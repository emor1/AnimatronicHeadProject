using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

using WebSocketSharp;


public class SliderSceneManager : MonoBehaviour
{
    enum blendshapeLocations
    {
        JawOpen,
        EyeBlinkLeft,
        EyeBlinkRight,
        BrowInnerUp,
        BrowDownLeft,
        BrowDownRight,
        EyeLookUpLeft,
        EyeLookUpRight,
        EyeLookDownLeft,
        EyeLookDownRight,
        EyeLookInLeft ,
        EyeLookInRight,
        EyeLookOutLeft,
        EyeLookOutRight
    }

    [SerializeField]
    Slider p_slider;

    [SerializeField]
    GameObject canvas;

    [SerializeField]
    Text text;

    Slider[] sliders=new Slider[14];
    Text[] texts = new Text[14];
    Text[] debug_text = new Text[14];

    int height = 600;

    //Websocket settings
    //input feild
    [SerializeField]
    private InputField input_address;

    public string address = "192.168.0.9:9998";

    //websocket client
    private WebSocket ws;
    string ws_state = "none";

    // Start is called before the first frame update
    void Start()
    {
        input_address = input_address.GetComponent<InputField>();
        //int (int)i = 0;
        foreach (var i in　Enum.GetValues(typeof(blendshapeLocations)))
        {
            sliders[(int)i] = Instantiate(p_slider, new Vector3(100,(int)i*100-height,0), Quaternion.identity);
            sliders[(int)i].transform.SetParent(canvas.transform, false);
            texts[(int)i] = Instantiate(text, new Vector3(-300, (int)i * 100 - height, 0), Quaternion.identity);
            texts[(int)i].text = i.ToString();
            texts[(int)i].transform.SetParent(canvas.transform, false);

            debug_text[(int)i] = Instantiate(text, new Vector3(500, (int)i * 100 - height, 0), Quaternion.identity);
            debug_text[(int)i].fontSize = 30;
            debug_text[(int)i].text = $"\"{i}\":{sliders[(int)i].value}";
            debug_text[(int)i].transform.SetParent(canvas.transform, false);


            sliders[(int)i].onValueChanged.AddListener(delegate { makeJson((int)i); });

        }

    }

    // Update is called once per frame
    void Update()
    {
        /*
        ui_text.text = text;
        ws_text.text = ws_state;
        if (ws != null)
        {
            ws.Send(text);
        }*/
    }

    public void makeJson(int index)
    {
        string blendshape = ((blendshapeLocations)index).ToString();

        string json_out="";

        json_out+= $"\"{blendshape}\":{Math.Floor(sliders[index].value*100)/100}";

        //debug_text[index].text = sliders[index].value.ToString();
        debug_text[index].text = json_out;

        if (ws != null)
        {
            ws.Send("{"+json_out+"}");
        }
        //return json_out;
    }

    private void OnDestroy()
    {
        ws.Close();
        ws = null;
    }

    public void Connect()
    {
        if (ws != null)
        {
            ws.Close();
            ws = null;
        }
        address = input_address.text;

        ws = new WebSocket($"ws://{address}");
        ConnectAction(ws);

    }

    public void ConnectAction(WebSocket Client)
    {

        Client.OnOpen += (sender, e) =>
        {
            ws_state = "WebSocket Open";
        };
        Client.OnMessage += (sender, e) =>
        {
            ws_state = e.Data;
        };
        Client.OnError += (sender, e) =>
        {
            ws_state = "Websocket Error: " + e.Message;
        };
        Client.OnClose += (sender, e) =>
        {
            ws_state = "WebSocket Close";
        };

        Client.Connect();
    }

}
