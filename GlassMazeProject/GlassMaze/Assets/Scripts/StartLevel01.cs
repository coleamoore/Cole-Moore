using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartLevel01 : MonoBehaviour
{
    //On collision, switch to end game scene
    void OnTriggerEnter(Collider other)
    {
        //other.name should equal the root of your Player object
        if (other.name == "Player")
        {
            //The scene number to load (in File->Build Settings)
            SceneManager.LoadScene("Level01");
        }
    }
}
