#ifndef LOMNILIGHT_H_
#define LOMNILIGHT_H_

class lOmniLight
{
public: __thiscall lOmniLight::lOmniLight(class lOmniLight const &)
public: __thiscall lOmniLight::lOmniLight(void)
public: virtual __thiscall lOmniLight::~lOmniLight(void)
public: class lOmniLight & __thiscall lOmniLight::operator=(class lOmniLight const &)
public: virtual void __thiscall lOmniLight::Init(struct wShape *,class cPosition const &,unsigned long,void *)
public: virtual void __thiscall lOmniLight::serialize(class EagleDynamics::Common::Serializer &)
protected: void __thiscall lOmniLight::UpdateLightParams(void)
const lOmniLight::`vftable'
const lOmniLight::`vftable'{for `Graphics::ModelInstance'}
const lOmniLight::`vftable'{for `viObject'}
};

#endif

