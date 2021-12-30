using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SkipTutorial : MonoBehaviour
{
    // Start is called before the first frame update
    public void BeginGame()
    {
        SceneManager.LoadScene("Level01");
        Time.timeScale = 1;
    }
}
