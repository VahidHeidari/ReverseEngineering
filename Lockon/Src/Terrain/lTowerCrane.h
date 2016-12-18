#ifndef LTOWERCRANE_H_
#define LTOWERCRANE_H_

class lTowerCrane
{
public: __thiscall lTowerCrane::lTowerCrane(class lTowerCrane const &)
public: __thiscall lTowerCrane::lTowerCrane(void)
public: virtual __thiscall lTowerCrane::~lTowerCrane(void)
public: class lTowerCrane & __thiscall lTowerCrane::operator=(class lTowerCrane const &)
public: static class lLandObject * __cdecl lTowerCrane::CreateObject(void)
public: virtual class HeapVector<struct Graphics::DynamicParam> const & __thiscall lTowerCrane::GetDrawArguments(void)
private: void __thiscall lTowerCrane::RecalculateArgs(double)
const lTowerCrane::`vftable'{for `Graphics::ModelInstance'}
const lTowerCrane::`vftable'{for `IwNetObject'}
const lTowerCrane::`vftable'{for `lLandObject'}
const lTowerCrane::`vftable'{for `viObject'}

private: static double const lTowerCrane::timePolzunMove
private: static double const lTowerCrane::timeRotate180
private: static double const lTowerCrane::total_time
};

#endif

