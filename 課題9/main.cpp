#include "Sample.h" 
void Function();
#include <iostream> 

int main()
{
	std::cout << "プログラム開始\n";
	Function();
	std::cout << "プログラム終了\n";
}

void Function()
{
	std::cout << "関数が呼び出されました\n";

	//インスタンス作成 
	Sample instSample;

	//メンバ関数実行 
	instSample.menberFunc();
}