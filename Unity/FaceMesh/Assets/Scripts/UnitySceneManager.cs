using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UnitySceneManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ChangeToSlider()
    {
        SceneManager.LoadScene("SliderScene");
    }
    public void ChangeToFaceTrack()
    {
        SceneManager.LoadScene("FaceTrackingMode");
    }
    public void ChangeToHome()
    {
        SceneManager.LoadScene("start_up");
    }
}
