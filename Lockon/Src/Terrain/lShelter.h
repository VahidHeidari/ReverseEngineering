#ifndef LSHELTER_H_
#define LSHELTER_H_

class lShelter
{
public: __thiscall lShelter::lShelter(class lShelter const &)
public: __thiscall lShelter::lShelter(void)
public: virtual __thiscall lShelter::~lShelter(void)
public: class lShelter & __thiscall lShelter::operator=(class lShelter const &)
public: bool __thiscall lShelter::Close(float)
public: bool __thiscall lShelter::IsOpen(void)
public: bool __thiscall lShelter::Open(float)
public: static class lLandObject * __cdecl lShelter::CreateObject(void)
public: virtual class HeapVector<struct Graphics::DynamicParam> const & __thiscall lShelter::GetDrawArguments(void)
public: virtual void __thiscall lShelter::Degrade(void)
const lShelter::`vftable'{for `Graphics::ModelInstance'}
const lShelter::`vftable'{for `IwNetObject'}
const lShelter::`vftable'{for `lLandObject'}
const lShelter::`vftable'{for `viObject'}
};

#endif

