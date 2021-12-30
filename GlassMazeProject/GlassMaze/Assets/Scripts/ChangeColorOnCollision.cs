using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class ChangeColorOnCollision : MonoBehaviour
{
    public Material Material;
    // OnTriggerEnter is called when another collider touches this collider.
    private void OnCollisionEnter(Collision other)
    {
        transform.GetComponent<Renderer>().material = Material;
        StartCoroutine(StartTimer());
    }

    IEnumerator StartTimer()
    {
        yield return new WaitForSeconds(3f);
        transform.GetComponent<Renderer>().material.color = Color.clear;
    }
}
