/*
   TriangleClass.h
   三角形の面積を求めるTriangleClassクラスを宣言
*/
class TriangleClass
{
	//メンバ変数
	float teihen;  //底辺
	float takasa;  //高さ
	float menseki;  //面積

	//メンバ関数
public:
	void Input();
	void Calc();
	void Disp();
};