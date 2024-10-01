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

private:

	int mdlId_;	//モデル保存
	int hp_;	//体力

};

