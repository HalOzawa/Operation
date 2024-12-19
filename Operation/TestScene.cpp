#include "TestScene.h"
#include "SceneManager.h"

TestScene::TestScene(GameObject* parent)
{

}
void TestScene::Initialize()
{
	
}

void TestScene::Update() 
{
	
	if (CheckHitKey(KEY_INPUT_P)) {
		SceneManager::Instance()->ChangeScene(SceneManager::SCENE_ID::SCENE_ID_PLAY);
	}
}

void TestScene::Draw()
{
	// ‚R‚c‹óŠÔã‚Éü•ª‚ğ•`‰æ‚·‚é
	//DrawLine3D(VGet(100.0f, 100.0f, 0.0f), VGet(300.0f, 200.0f, 0.0f), GetColor(255, 255, 0));
}

void TestScene::Release()
{

}