using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Unity.Collections;

using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.ARKit;
using UnityEngine.UI;

using WebSocketSharp;

public class face_tracking : MonoBehaviour
{
    //ARFace
    [SerializeField]
    private ARFaceManager faceManager;
    //show the parrameter of jaw
    [SerializeField]
    private Text ui_text;
    [SerializeField]
    private Text ws_text;

    ARKitFaceSubsystem faceSubsystem;

    string text = "{\"none\":\"none\"}";
    string ws_state = "none";

    [SerializeField]
    private InputField input_address;

    public string address = "192.168.0.9:9998";

    //websocket client
    private WebSocket ws;

    private void OnEnable()
    {
        faceManager.facesChanged += OnFaceChanged;
    }

    private void OnDisable()
    {
        faceManager.facesChanged -= OnFaceChanged;
    }

    private void OnFaceChanged(ARFacesChangedEventArgs eventArgs)
    {
        if (eventArgs.updated.Count != 0)
        {
            var arface = eventArgs.updated[0];
            if (arface.trackingState == TrackingState.Tracking && ARSession.state > ARSessionState.Ready)
            {
                //Debug.Log($"face position: {arface.transform.position}");
                //text = $"face position: {arface.transform.position}";
                UpdateAnimatronicFaceShape(arface);
            }
        }
    }

    private void UpdateAnimatronicFaceShape(ARFace arface)
    {
        using var blendShapesARKit = faceSubsystem.GetBlendShapeCoefficients(arface.trackableId, Allocator.Temp);

        //Math.Floor(a * 10)) / 10

        text = "{";
        foreach(var featureCoefficient in blendShapesARKit)
        {
            if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.JawOpen)
            {
                text += $"\"JawOpen\":{Math.Floor(featureCoefficient.coefficient*100)/100},";
            }
            
            if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeBlinkLeft)
            {
                text += $"\"EyeBlinkLeft\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
            }
            
            if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeBlinkRight)
            {
                text += $"\"EyeBlinkRight\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
            }
            if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.BrowInnerUp)
            {
                text += $"\"BrowInnerUp\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
            }
            if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.BrowDownLeft)
            {
                text += $"\"BrowDownLeft\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
            }
            if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.BrowDownRight)
            {
                text += $"\"BrowDownRight\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
            }
            if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookUpLeft)
            {
                text += $"\"EyeLookUpLeft\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
            }
            if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookUpRight)
            {
                text += $"\"EyeLookUpRight\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
            }
            if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookDownLeft)
            {
                text += $"\"EyeLookDownLeft\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
            }
            if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookDownRight)
            {
                text += $"\"EyeLookDownRight\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
            }
            if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookInLeft)
            {
                text += $"\"EyeLookInLeft\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
            }
            if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookInRight)
            {
                text += $"\"EyeLookInRight\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
            }
            if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookOutLeft)
            {
                text += $"\"EyeLookOutLeft\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
            }
            if (featureCoefficient.blendShapeLocation == ARKitBlendShapeLocation.EyeLookOutRight)
            {
                text += $"\"EyeLookOutRight\":{Math.Floor(featureCoefficient.coefficient * 100) / 100},";
            }


        }
        text = text.Substring(0, text.Length - 1)+ "}";
    }
    // Start is called before the first frame update
    void Start()
    {
        input_address = input_address.GetComponent<InputField>();

        faceSubsystem = (ARKitFaceSubsystem)faceManager.subsystem;

        ws = null;
    }

    // Update is called once per frame
    void Update()
    {
        ui_text.text = text;
        ws_text.text = ws_state;
        
        if (ws != null)
        {
            ws.Send(text);
        }
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
