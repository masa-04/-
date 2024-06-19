class Status
{
	//メンバ変数 
	int lv, hp, atk, def; //各パラメータ 

	//メンバ関数 
public:
	void   SetLv(int i);
	void   Calc();
	int    GetHp();
	int    GetAtk();
	int    GetDef();
};
