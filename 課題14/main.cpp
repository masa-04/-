#include "Fat.h"
//�萔�錾
#define NUM 5 //�l��
//�v���g�^�C�v�錾
void SetData();
void BmiCalc();
void Sort();
void Output();
//�O���[�o���ϐ�
Fat* human; //�N���X�̃|�C���^
//���C���֐�
int main()
{
	//�C���X�^���X�z����쐬
	human = new Fat[NUM];
	SetData();
	BmiCalc();
	Sort();
	Output();
	//�C���X�^���X���폜
	delete[] human;
}
//�S�����̖��O�A�g���A�̏d��ݒ�
void SetData()
{
	//�S�����̃f�[�^�i�K���Ɂj
	const char* name[] = { "���Y","�Ԏq","���Y","�ǎq","��Y" }; //���O
	float height[] = { 1.72f, 1.63f, 1.85f, 1.56f, 1.77f }; //�g��
	float weight[] = { 68.2f, 55.6f, 92.5f, 63.3f, 50.1f }; //�̏d
	//�A�N�Z�X�֐����g���đS�����̃f�[�^��n��
	for (int i = 0; i < NUM; i++)
	{
		human[i].SetName(name[i]);
		human[i].SetHeight(height[i]);
		human[i].SetWeight(weight[i]);
	}
}

//�S������ BMI ���v�Z
void BmiCalc()
{
	for (int i = 0; i < NUM; i++)
	{
		human[i].Calc();
	}
}
//�₹�Ă��鏇�ɕ��בւ���
void Sort()
{
	//�i��j�o�u���\�[�g
	// �Ō�̗v�f�������āA���ׂĂ̗v�f����בւ��܂�
	for (int i = 0;i < NUM - 1;i++) {
		// �������ɏ��Ԃɔ�r���܂�
		for (int j = NUM - 1;j > i;j--) {
			// ��̕����傫���Ƃ��݂͌��ɓ���ւ��܂�
			if (human[j].GetBMI() < human[j - 1].GetBMI()) {
				Fat t = human[j];
				human[j] = human[j - 1];
				human[j - 1] = t;
			}
		}
	}
}
//�S�����̌��ʂ�\��
void Output()
{
	for (int i = 0; i < NUM; i++)
	{
		human[i].Disp();
	}
}
