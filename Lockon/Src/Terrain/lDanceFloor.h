#ifndef LDANCEFLOOR_H_
#define LDANCEFLOOR_H_

class lDanceFloor
{
public: __thiscall lDanceFloor::lDanceFloor(class lDanceFloor const &)
public: __thiscall lDanceFloor::lDanceFloor(void)
public: virtual __thiscall lDanceFloor::~lDanceFloor(void)
public: class lDanceFloor & __thiscall lDanceFloor::operator=(class lDanceFloor const &)
public: static class lLandObject * __cdecl lDanceFloor::CreateObject(void)
public: virtual class HeapVector<struct Graphics::DynamicParam> const & __thiscall lDanceFloor::GetDrawArguments(void)
private: void __thiscall lDanceFloor::RecalculateArgs(double)
const lDanceFloor::`vftable'{for `Graphics::ModelInstance'}
const lDanceFloor::`vftable'{for `IwNetObject'}
const lDanceFloor::`vftable'{for `lLandObject'}
const lDanceFloor::`vftable'{for `viObject'}

private: static double const lDanceFloor::timeRotate180
private: static double const lDanceFloor::total_time
};

#endif

