/*
 TriangleClass.cpp
 TriangleClassクラスの各メンバ関数を定義
*/

//ヘッダをインクルード 
#include <iostream> 
#include "TriangleClass.h" 

//底辺と高さの値を代入する関数 
void TriangleClass::Input()
{
	teihen = 20.0f;
	takasa = 15.0f;
}

//三角形の面積を求める関数 
void TriangleClass::Calc()
{
	menseki = teihen * takasa / 2.0f;
}

//結果を出力する関数 
void TriangleClass::Disp()
{
	std::cout << "三角形の面積＝" << menseki << "\n";
}