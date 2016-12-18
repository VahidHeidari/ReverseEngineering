#ifndef LCROSSING_H_
#define LCROSSING_H_

class lCrossing
{
public: __thiscall lCrossing::lCrossing(class lCrossing const &)
public: __thiscall lCrossing::lCrossing(void)
public: virtual __thiscall lCrossing::~lCrossing(void)
public: class lCrossing & __thiscall lCrossing::operator=(class lCrossing const &)
public: bool __thiscall lCrossing::IsOpen(void)
public: static class lLandObject * __cdecl lCrossing::CreateObject(void)
public: virtual class HeapVector<struct Graphics::DynamicParam> const & __thiscall lCrossing::GetDrawArguments(void)
public: void __thiscall lCrossing::Close(void)
public: void __thiscall lCrossing::Open(void)
const lCrossing::`vftable'{for `Graphics::ModelInstance'}
const lCrossing::`vftable'{for `IwNetObject'}
const lCrossing::`vftable'{for `lLandObject'}
const lCrossing::`vftable'{for `viObject'}

private: static double const lCrossing::OpenTime
};

#endif

