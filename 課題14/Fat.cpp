#include "Fat.h"
// �R���X�g���N�^
Fat::Fat() : name(""), height(0), weight(0), bmi(0) {}
// ���O�ݒ�
void Fat::SetName(const std::string& name) {
    this->name = name;
}
// �g���ݒ�
void Fat::SetHeight(float height) {
    this->height = height;
}
// �̏d�ݒ�
void Fat::SetWeight(float weight) {
    this->weight = weight;
}
// BMI �v�Z
void Fat::Calc() {
    if (height > 0) {
        bmi = weight / (height * height);
    }
    else {
        bmi = 0;
    }
}
// BMI �擾
float Fat::GetBMI() const {
    return bmi;
}
// ���ʕ\��
void Fat::Disp() const {
    std::cout << name << "�� BMI �� " << bmi << " �ł�" << std::endl;
}