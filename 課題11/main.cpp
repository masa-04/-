#include <iostream>
#include "Enemy.h"
#include "Player.h"
int main()
{
	Player pl; //�v���C���[�N���X�̃C���X�^���X
	Enemy ene; //�G�N���X�̃C���X�^���X
	int damage; //�U���������̃_���[�W��
	//�ǂ��炩�� HP ���O�ȉ��ɂȂ�܂Ń��[�v
	for (int turn = 1; ; turn++)
	{
		cout << "\n������������" << turn << "�^�[���ځ�����������\n";
		//���ꂼ��̂g�o��\��
		pl.dispHp();
		ene.dispHp();
		//��l���̍U��
		damage = pl.Attack(ene.GetDef()); //�U�������i�_���[�W�ʌv�Z�j
		ene.Damage(damage); //�G�Ƀ_���[�W��^����iHP �����炷�j
		if (ene.IsDead()) break; //�G���퓬�s�\�ɂȂ�����I��
		//�G�̍U��
		damage = ene.Attack(pl.GetDef()); //�U�������i�_���[�W�ʌv�Z�j
		pl.Damage(damage); //��ڲ԰����Ұ�ނ�^����iHP �����炷�j
		if (pl.IsDead()) break; //�v���C���[���퓬�s�\�ɂȂ�����I��
	}
	cout << "�I��\n";
}
