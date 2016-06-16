using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class LevelManager : MonoBehaviour {

	
//we deleted the Start and Update functions because, we want the purpose of the LevelManager to be to load the new game level
	public void LoadLevel(string name){
		SceneManager.LoadScene(name);
	}

	public void QuitRequest(){
		Debug.Log("A quit request has been made");
		Application.Quit();
	}

	public void LoadNextLevel (){
		Scene currScene = SceneManager.GetActiveScene ();
		SceneManager.LoadScene (currScene.buildIndex + 1);
	}

	public void BrickDestroyed (){
		if(Brick.breakableCount <= 0){
			LoadNextLevel();
		}
	}
}


