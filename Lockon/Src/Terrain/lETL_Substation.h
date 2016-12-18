#ifndef LETL_SUBSTATION_H_
#define LETL_SUBSTATION_H_

class lETL_Substation
{
public: __thiscall lETL_Substation::lETL_Substation(class lETL_Substation const &)
public: __thiscall lETL_Substation::lETL_Substation(void)
public: virtual __thiscall lETL_Substation::~lETL_Substation(void)
public: class lETL_Substation & __thiscall lETL_Substation::operator=(class lETL_Substation const &)
public: static class lLandObject * __cdecl lETL_Substation::CreateObject(void)
public: virtual int __thiscall lETL_Substation::CableCount(void)
public: virtual void __thiscall lETL_Substation::AttachPos(bool,int,class E3::Vector &)
const lETL_Substation::`vftable'{for `Graphics::ModelInstance'}
const lETL_Substation::`vftable'{for `IwNetObject'}
const lETL_Substation::`vftable'{for `lLandObject'}
const lETL_Substation::`vftable'{for `viObject'}
};

#endif

