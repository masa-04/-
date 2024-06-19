#include "Status.h" 

//レベル値を受け取る（アクセス関数） 
void Status::SetLv(int i)
{
	lv = i;
}

//各パラメータを計算 
void Status::Calc()
{
	hp = lv * lv + 50;
	atk = lv * 10;
	def = lv * 9;
}

//HP値を返す（アクセス関数） 
int Status::GetHp()
{
	return hp;
}

//攻撃力値を返す（アクセス関数） 
int Status::GetAtk()
{
	return atk;
}

//防御力値を返す（アクセス関数） 
int Status::GetDef()
{
	return def;
}