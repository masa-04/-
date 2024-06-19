//ヘッダをインクルード 
#include < iostream> 
#include "Data.h" 

//渡された値をメンバ変数に代入する関数（アクセス関数） 
void Data::SetValue(int a) {
	value = a;
}

//メンバ変数の内容を出力するメンバ関数 
void Data::Disp()
{
	std::cout << "メンバ変数の値は" << value << "\n";
}