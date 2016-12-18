#ifndef LETL_FARM_H_
#define LETL_FARM_H_

class lETL_Farm
{
public: __thiscall lETL_Farm::lETL_Farm(class lETL_Farm const &)
public: __thiscall lETL_Farm::lETL_Farm(void)
public: virtual __thiscall lETL_Farm::~lETL_Farm(void)
public: class lETL_Farm & __thiscall lETL_Farm::operator=(class lETL_Farm const &)
public: static class lLandObject * __cdecl lETL_Farm::CreateObject(void)
public: virtual int __thiscall lETL_Farm::CableCount(void)
public: virtual void __thiscall lETL_Farm::AttachPos(bool,int,class E3::Vector &)
protected: virtual void __thiscall lETL_Farm::CreateFires(void)
const lETL_Farm::`vftable'{for `Graphics::ModelInstance'}
const lETL_Farm::`vftable'{for `IwNetObject'}
const lETL_Farm::`vftable'{for `lLandObject'}
const lETL_Farm::`vftable'{for `viObject'}
};

#endif

