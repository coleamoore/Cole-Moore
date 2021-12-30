using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pause : MonoBehaviour
{
    public Transform canvas;

    // Update is called once per frame
    void Update()
    {
        //If ESC key pushed, pause or unpause game based on whether
        //it was previously paused
        if (Input.GetKeyDown(KeyCode.Escape)) {
            if (canvas.gameObject.activeInHierarchy == false)
            {
                canvas.gameObject.SetActive(true);
                Time.timeScale = 0;
            }
            else
            {
                canvas.gameObject.SetActive(false);
                Time.timeScale = 1;
            }
        }
    }
}
