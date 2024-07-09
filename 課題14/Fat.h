#ifndef FAT_H
#define FAT_H
#include <iostream>
#include <string>
class Fat {
private:
	std::string name;
	float height;
	float weight;
	float bmi;
public:
	// �R���X�g���N�^
	Fat();
	// �A�N�Z�X�֐�
	void SetName(const std::string& name);
	void SetHeight(float height);
	void SetWeight(float weight);
	// BMI �v�Z
	void Calc();
	// BMI �擾
	float GetBMI() const;
	// ���ʕ\��
	void Disp() const;
};
#endif // FAT_H