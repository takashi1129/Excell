#pragma once
//�g�p�w�b�_�[
#include "GameL/SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�I�u�W�F�N�g�F��l��
class CObjHero:public CObj
{
public:
	CObjHero(){};
	~CObjHero(){};

	void Init();
	void Action();
	void Draw();

private:
	float m_y;//��l���@ y�����ړ��p�ϐ�
	float m_x;//��l���@ x�����ړ��p�ϐ�
};

