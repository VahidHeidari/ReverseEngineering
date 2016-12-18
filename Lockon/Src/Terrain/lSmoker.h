#ifndef LSMOKER_H_
#define LSMOKER_H_

class lSmoker
{
public: __thiscall lSmoker::lSmoker(class lSmoker const &)
public: __thiscall lSmoker::lSmoker(void)
public: virtual __thiscall lSmoker::~lSmoker(void)
public: class lSmoker & __thiscall lSmoker::operator=(class lSmoker const &)
public: static class lLandObject * __cdecl lSmoker::CreateObject(void)
public: virtual class Vector3 const & __thiscall lSmoker::GetKillerPos(void)
public: virtual void __thiscall lSmoker::Degrade(void)
public: virtual void __thiscall lSmoker::OnKillByDistance(void)
public: virtual void __thiscall lSmoker::Parse(class Graphics::ModelParser &,class Position3 const &,class HeapVector<class Graphics::VolumeEffect *> *)
public: virtual void __thiscall lSmoker::ReinitState(void)
protected: virtual void __thiscall lSmoker::AddSmoke(float,class Vector3 const &)
protected: virtual void __thiscall lSmoker::CreateSmokes(void)
protected: virtual void __thiscall lSmoker::DestroySmokes(void)
protected: void __thiscall lSmoker::CreateSmokesBase(void)
const lSmoker::`vftable'
const lSmoker::`vftable'{for `Graphics::ModelInstance'}
const lSmoker::`vftable'{for `IwNetObject'}
const lSmoker::`vftable'{for `lLandObject'}
const lSmoker::`vftable'{for `viObject'}
};

#endif

