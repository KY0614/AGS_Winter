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

private:

	int mdlId_;	//���f���ۑ�
	int hp_;	//�̗�

};

