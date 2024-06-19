#include <iostream> 
#include "Circle.h" 

int main()
{
	float m;  //面積 
	float r = 10.0f; //半径 

	Circle c; //クラスのインスタンスを作る 

	m = c.Menseki(r);
	std::cout << "半径" << r << "の円の面積は" << m << "\n";
}