#ifndef LOBJWITHLIGHTS_H_
#define LOBJWITHLIGHTS_H_

class lObjWithLights
{
public: __thiscall lObjWithLights::lObjWithLights(class lObjWithLights const &)
public: __thiscall lObjWithLights::lObjWithLights(void)
public: virtual __thiscall lObjWithLights::~lObjWithLights(void)
public: class lObjWithLights & __thiscall lObjWithLights::operator=(class lObjWithLights const &)
public: bool __thiscall lObjWithLights::IsLightOn(int)const 
public: int __thiscall lObjWithLights::GetLightCount(void)const 
public: static class lLandObject * __cdecl lObjWithLights::CreateObject(void)
public: virtual void __thiscall lObjWithLights::Degrade(void)
public: virtual void __thiscall lObjWithLights::Init(struct wShape *,class cPosition const &,unsigned long,void *)
public: void __thiscall lObjWithLights::TurnLight(int,bool)
public: void __thiscall lObjWithLights::TurnLights(bool)
protected: void __thiscall lObjWithLights::AddLight(class Position3 const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
const lObjWithLights::`vftable'{for `Graphics::ModelInstance'}
const lObjWithLights::`vftable'{for `IwNetObject'}
const lObjWithLights::`vftable'{for `lLandObject'}
const lObjWithLights::`vftable'{for `viObject'}
};

#endif

