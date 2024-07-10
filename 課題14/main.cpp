#include "Fat.h"
//定数宣言
#define NUM 5 //人数
//プロトタイプ宣言
void SetData();
void BmiCalc();
void Sort();
void Output();
//グローバル変数
Fat* human; //クラスのポインタ
//メイン関数
int main()
{
	//インスタンス配列を作成
	human = new Fat[NUM];
	SetData();
	BmiCalc();
	Sort();
	Output();
	//インスタンスを削除
	delete[] human;
}
//全員分の名前、身長、体重を設定
void SetData()
{
	//全員分のデータ（適当に）
	const char* name[] = { "太郎","花子","次郎","良子","吾郎" }; //名前
	float height[] = { 1.72f, 1.63f, 1.85f, 1.56f, 1.77f }; //身長
	float weight[] = { 68.2f, 55.6f, 92.5f, 63.3f, 50.1f }; //体重
	//アクセス関数を使って全員分のデータを渡す
	for (int i = 0; i < NUM; i++)
	{
		human[i].SetName(name[i]);
		human[i].SetHeight(height[i]);
		human[i].SetWeight(weight[i]);
	}
}

//全員分の BMI を計算
void BmiCalc()
{
	for (int i = 0; i < NUM; i++)
	{
		human[i].Calc();
	}
}
//やせている順に並べ替える
void Sort()
{
	//（例）バブルソート
	// 最後の要素を除いて、すべての要素を並べ替えます
	for (int i = 0;i < NUM - 1;i++) {
		// 下から上に順番に比較します
		for (int j = NUM - 1;j > i;j--) {
			// 上の方が大きいときは互いに入れ替えます
			if (human[j].GetBMI() < human[j - 1].GetBMI()) {
				Fat t = human[j];
				human[j] = human[j - 1];
				human[j - 1] = t;
			}
		}
	}
}
//全員分の結果を表示
void Output()
{
	for (int i = 0; i < NUM; i++)
	{
		human[i].Disp();
	}
}
