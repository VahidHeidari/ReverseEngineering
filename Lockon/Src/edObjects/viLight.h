#ifndef VILIGHT_H_
#define VILIGHT_H_

class viLight
{
public: __thiscall viLight::viLight(class viLight const &)
public: __thiscall viLight::viLight(void)
public: virtual __thiscall viLight::~viLight(void)
public: class viLight & __thiscall viLight::operator=(class viLight const &)
public: class Graphics::Light * __thiscall viLight::QueryEditor(void)
public: class Graphics::VolumeEffect * __thiscall viLight::GetVolumeEffect(void)
public: static class viLight * __cdecl viLight::Create(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall viLight::Init(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class Position3 const & __thiscall viLight::GetPosition(void)
public: virtual class cPosition & __thiscall viLight::Position(double)
public: virtual enum IntersectionType __thiscall viLight::TestVolume(class ClipVolume *)
public: virtual float __thiscall viLight::GetSize(void)
public: virtual struct gBox const & __thiscall viLight::LocalBox(double)
public: virtual void __thiscall viLight::AddToEffects(class HeapVector<class Graphics::VolumeEffect *> *)
public: virtual void __thiscall viLight::PrepareFrame(class Vector3 const &)
public: virtual void __thiscall viLight::SetPosition(class Position3 const &)
public: virtual void __thiscall viLight::Update(void)
public: virtual void __thiscall viLight::serialize(class EagleDynamics::Common::Serializer &)
const viLight::`vftable'{for `MovingHandle'}
const viLight::`vftable'{for `viObject'}
};

#endif

