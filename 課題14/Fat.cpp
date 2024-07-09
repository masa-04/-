#include "Fat.h"
// コンストラクタ
Fat::Fat() : name(""), height(0), weight(0), bmi(0) {}
// 名前設定
void Fat::SetName(const std::string& name) {
    this->name = name;
}
// 身長設定
void Fat::SetHeight(float height) {
    this->height = height;
}
// 体重設定
void Fat::SetWeight(float weight) {
    this->weight = weight;
}
// BMI 計算
void Fat::Calc() {
    if (height > 0) {
        bmi = weight / (height * height);
    }
    else {
        bmi = 0;
    }
}
// BMI 取得
float Fat::GetBMI() const {
    return bmi;
}
// 結果表示
void Fat::Disp() const {
    std::cout << name << "の BMI は " << bmi << " です" << std::endl;
}