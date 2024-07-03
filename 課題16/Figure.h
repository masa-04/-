#include <iostream>
//基本となる図形クラス

//クラスを宣言
class Figure
{
protected:
	float teihen, takasa, menseki;
public:
	void SetTeihen(float f);
	void SetTakasa(float f);
	void Disp();
};
