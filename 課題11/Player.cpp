#include "Player.h"
//コンストラクタ（初期化）
Player::Player()
{
	hp = 300; //HP
	atk = 50; //攻撃力
	def = 35; //防御力
}
//HP を表示
//引数：なし
//戻値：なし
void Player::DispHp()
{
	cout << "プレイヤーＨＰ＝" << hp << “\n";
}
//攻撃
//引数：敵の防御力
//戻値：ダメージ量
int Player::Attack(int i)
{
	printf("プレイヤーの攻撃！ ");
	return atk - i / 2;
}
プレイヤー
HP を表示
パラメータの初期化
攻撃（ダメージ量の計算）
ダメージを受ける（HP 減算）
防御力の取得 （アクセス関数）
戦闘不能判定
HP、攻撃力、防御力
敵
HP を表示
パラメータの初期化
攻撃（ダメージ量の計算）
ダメージを受ける（HP 減算）
防御力の取得 （アクセス関数）
戦闘不能判定
HP、攻撃力、防御力
- 19 -
C++実習課題
//ダメージを受ける（HP を減らす）
//引数：受けるダメージ量
//戻値：なし
void Player::Damage(int i)
{
	Cout << "プレイヤーは" << i << "のダメージ\n";
	hp -= i;
}
//防御力を取得（アクセス関数）
//引数：なし
//戻値：防御力
int Player::GetDef()
{
	return def;
}
//戦闘不能判定
//引数：なし
//戻値：戦闘不能＝true その他＝false
bool Player::IsDead()
{
	//HP が 0 以下だったら true を返す
	if (hp <= 0)
		return true;
	//それ以外なら false を返す
	return false;
}