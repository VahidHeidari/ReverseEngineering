#ifndef WOSNARE_H_
#define WOSNARE_H_

class woSnare
{
public: __thiscall woSnare::woSnare(class woSnare const &)
public: __thiscall woSnare::woSnare(void)
public: virtual __thiscall woSnare::~woSnare(void)
public: class Effects::ObjectLight * __thiscall woSnare::get_pLight(void)
public: class woSnare & __thiscall woSnare::operator=(class woSnare const &)
public: virtual class cPosition & __thiscall woSnare::Position(double)
public: virtual float const __thiscall woSnare::Hrad(void)
public: virtual int __thiscall woSnare::Class(void)
public: virtual void __thiscall woSnare::Parse(class Graphics::ModelParser &,class Position3 const &,class HeapVector<class Graphics::VolumeEffect *> *)
public: virtual void __thiscall woSnare::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall woSnare::Status_Quo(double)
public: void __thiscall woSnare::setSnare(class cPosition &,class E3::Vector &,class wsType,float)
private: void __thiscall woSnare::CreateLight(void)
private: void __thiscall woSnare::createSnareActivity(void)
private: void __thiscall woSnare::initialize(void)
const woSnare::`vftable'{for `Evoker<class wListener,class Link<class wListener> >'}
const woSnare::`vftable'{for `Graphics::ModelInstance'}
const woSnare::`vftable'{for `IwNetObject'}
const woSnare::`vftable'{for `Suicide'}
const woSnare::`vftable'{for `viMovingObject'}
const woSnare::`vftable'{for `viObject'}
const woSnare::`vftable'{for `wVulnerable'}

public: static class RandomObject woSnare::randomOrderly
};

#endif

