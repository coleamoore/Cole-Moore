using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class QuitGame : MonoBehaviour
{
    public void EndGame()
    {
        SceneManager.LoadScene("EndGame");
        Time.timeScale = 1;
    }
}
