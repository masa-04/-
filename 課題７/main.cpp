#include <iostream> 
#include "Status.h" 

int main()
{
	int lv;
	Status st; //クラスのインスタンス 

	std::cout << "レベルを入力⇒";
	std::cin >> lv;

	st.SetLv(lv); //レベル値を渡す 
	st.Calc();  //各パラメータを設定 

	//各パラメータを表示 
	std::cout << " ＨＰ = " << st.GetHp() << "\n";
	std::cout << "攻撃力= " << st.GetAtk() << "\n";
	std::cout << "防御力= " << st.GetDef() << "\n";
}