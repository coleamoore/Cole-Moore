using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TextClear : MonoBehaviour
{
    public void ChangeColor()
    {
        GetComponent<Text>().color = Color.clear;
    }
}
