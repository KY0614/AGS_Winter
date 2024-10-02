#pragma once
#include"Common/Transform.h"


class UnitBase
{
public:
	//コンストラクタ
	UnitBase(void);
	//デストラクタ
	~UnitBase(void);
	//解放
	virtual void Destroy(void);

	//基本処理の４つは仮想関数化するのでしっかりオーバーライドするように
	//初期化
	virtual void Init(void);
	//更新
	virtual void Update(void);
	//描画
	virtual void Draw(void);

	//ゲッター各種
	//生存確認(生存しているとtrue)
	bool IsAlive(void)const;
	//位置
	VECTOR GetPos(void)const;
	//角度
	VECTOR GetRot(void)const;
	//大きさ
	VECTOR GetScl(void)const;
	//攻撃力
	float GetAtk(void)const;
	//防御力
	float GetDef(void)const;

private:

	int mdlId_;			//モデル保存
	int hp_;			//体力
	Transform trans_;	//位置情報関係
	float atk_;			//攻撃力
	float def_;			//防御力

};

