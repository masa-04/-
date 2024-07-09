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
	// コンストラクタ
	Fat();
	// アクセス関数
	void SetName(const std::string& name);
	void SetHeight(float height);
	void SetWeight(float weight);
	// BMI 計算
	void Calc();
	// BMI 取得
	float GetBMI() const;
	// 結果表示
	void Disp() const;
};
#endif // FAT_H