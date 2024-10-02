#pragma once
#include"Common/Transform.h"


class UnitBase
{
public:
	//�R���X�g���N�^
	UnitBase(void);
	//�f�X�g���N�^
	~UnitBase(void);
	//���
	virtual void Destroy(void);

	//��{�����̂S�͉��z�֐�������̂ł�������I�[�o�[���C�h����悤��
	//������
	virtual void Init(void);
	//�X�V
	virtual void Update(void);
	//�`��
	virtual void Draw(void);

	//�Q�b�^�[�e��
	//�����m�F(�������Ă����true)
	bool IsAlive(void)const;
	//�ʒu
	VECTOR GetPos(void)const;
	//�p�x
	VECTOR GetRot(void)const;
	//�傫��
	VECTOR GetScl(void)const;
	//�U����
	float GetAtk(void)const;
	//�h���
	float GetDef(void)const;

private:

	int mdlId_;			//���f���ۑ�
	int hp_;			//�̗�
	Transform trans_;	//�ʒu���֌W
	float atk_;			//�U����
	float def_;			//�h���

};

