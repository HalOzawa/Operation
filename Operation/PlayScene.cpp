#include "PlayScene.h"

PlayScene::PlayScene(GameObject* parent)
{
}

void PlayScene::Initialize()
{
}

void PlayScene::Update()
{
	SetBackgroundColor(0, 255, 255);
}

void PlayScene::Draw()
{
	// ３Ｄ空間上に線分を描画する
	DrawLine3D(VGet(400.0f, 300.0f, 0.0f), VGet(300.0f, 200.0f, 0.0f), GetColor(255, 255, 0));
}

void PlayScene::Release()
{
}
