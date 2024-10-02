#include "UnitBase.h"

UnitBase::UnitBase(void)
{
}

UnitBase::~UnitBase(void)
{
}

void UnitBase::Destroy(void)
{
}

void UnitBase::Init(void)
{
}

void UnitBase::Update(void)
{
}

void UnitBase::Draw(void)
{
}

bool UnitBase::IsAlive(void) const
{
	return hp_ > 0;
}

VECTOR UnitBase::GetPos(void) const
{
	return trans_.pos;
}

VECTOR UnitBase::GetRot(void) const
{
	return trans_.rot;
}

VECTOR UnitBase::GetScl(void) const
{
	return trans_.scl;
}

float UnitBase::GetAtk(void) const
{
	return atk_;
}

float UnitBase::GetDef(void) const
{
	return def_;
}
