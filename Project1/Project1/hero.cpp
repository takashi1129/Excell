//�g�p����w�b�_�[�t�@�C��
#include "GameL/DrawTexture.h"
#include "GameL/WinInputs.h"
#include "GameHead.h"
#include "hero.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;


//�C�j�V�����C�Y
void CObjHero::Init()
{
	m_y = 0;
	m_x = 0;
}

//�A�N�V����
void CObjHero::Action()
{
	//����
	if (Input::GetVKey(VK_RIGHT) == true)
	{
		m_x += 3.0f;
	}
	if (Input::GetVKey(VK_LEFT) == true)
	{
		m_x -= 3.0f;

	}
	if (Input::GetVKey(VK_UP)==true)
	{
		m_y -= 3.0f;
	}
	if (Input::GetVKey(VK_DOWN) == true)
	{
		m_y += 3.0f;
	}

	//�͈͊O�ɍs���Ȃ�����
	if (m_x + 32.0f > 800.0f)
	{
		m_x = 800.0f - 32.0f;
	}
	if (m_y + 32.0f > 600.0f)
	{
		m_y = 600.0f - 32.0f;
	}
	if (m_y < 0.0f)
	{
		m_y = 0.0f;
	}
	if (m_x < 0.0f)
	{
		m_x = 0.0f;
	}



}


//�h���[
void CObjHero::Draw()
{
	//�`��J���[���@R��Red G=Green B=Blue A=alpha(���ߏ��)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	
	RECT_F src;//�`�挳�؂���ʒu
	RECT_F dst;//�`���\���ʒu

	//�؂���ʒu�̐ݒ�
	src.m_top		= 0.0f;
	src.m_left		= 0.0f;
	src.m_right		= 50.0f;
	src.m_bottom	= 50.8f;

	//�\���ʒu�̐ݒ�
	dst.m_top		= 0.0f+m_y;
	dst.m_left		= 0.0f+m_x;
	dst.m_right		= 32.0f+m_x;
	dst.m_bottom	= 32.0f+m_y;

	//�O�Ԗڂɓo�^�����O���t�B�b�N��src�Edst�Ec�̏������ɕ`��
	Draw::Draw(0, &src, &dst, c, 0.0f);
}
