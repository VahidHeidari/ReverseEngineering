#ifndef SMCAMERA_IMPLEMENT_H_
#define SMCAMERA_IMPLEMENT_H_

class smCamera_Implement
{
public: __thiscall smCamera_Implement::smCamera_Implement(class smCamera_Implement const &)
public: __thiscall smCamera_Implement::smCamera_Implement(enum vCameraType_e,enum vCameraSubType_e)
public: bool __thiscall smCamera_Implement::IsOriginUsed(void)
public: class ClipVolume * __thiscall smCamera_Implement::CreateVolume(unsigned long)
public: class ClipVolumePlanes * __thiscall smCamera_Implement::GetClipVolume(void)
public: class Position3 const & __thiscall smCamera_Implement::Pos(void)const 
public: enum vCameraType_e __thiscall smCamera_Implement::Type(void)const 
public: float __thiscall smCamera_Implement::Aspect(void)const 
public: float __thiscall smCamera_Implement::HorAngle(void)const 
public: struct DistFactors & __thiscall smCamera_Implement::DistFactor(unsigned long)
public: unsigned long __thiscall smCamera_Implement::Mask(void)const 
public: virtual __thiscall smCamera_Implement::~smCamera_Implement(void)
public: virtual bool __thiscall smCamera_Implement::SetClipRegion(int)
public: virtual class Graphics::Camera const & __thiscall smCamera_Implement::GetCamera(void)
public: virtual class Vector3 const & __thiscall smCamera_Implement::GetOrigin(void)
public: virtual float __thiscall smCamera_Implement::GetDistance(class viObject *)
public: virtual float __thiscall smCamera_Implement::GetDistance(unsigned long)
public: virtual float __thiscall smCamera_Implement::GetFarClip(void)
public: virtual float __thiscall smCamera_Implement::GetNearClip(void)
public: virtual int __thiscall smCamera_Implement::GetClipRegion(void)
public: virtual void __thiscall smCamera_Implement::DefaultDistFactors(unsigned long)
public: virtual void __thiscall smCamera_Implement::LoadConfig(class ConfigParser::iterator const &)
public: virtual void __thiscall smCamera_Implement::OnObjectReady(class Graphics::RenderObject *)
public: virtual void __thiscall smCamera_Implement::SetAspect(float)
public: virtual void __thiscall smCamera_Implement::SetClipDistances(float,float)
public: virtual void __thiscall smCamera_Implement::SetClipRegion(int,float,float)
public: virtual void __thiscall smCamera_Implement::SetDistFactors(unsigned long,float,float)
public: virtual void __thiscall smCamera_Implement::SetDistMultiplier(float)
public: virtual void __thiscall smCamera_Implement::SetHorAngle(float)
public: virtual void __thiscall smCamera_Implement::SetMaxDistance(float)
public: virtual void __thiscall smCamera_Implement::SetObjectMask(unsigned long)
public: virtual void __thiscall smCamera_Implement::SetOrigin(class Vector3 const &)
public: virtual void __thiscall smCamera_Implement::SetParams(class smCamera *)
public: virtual void __thiscall smCamera_Implement::SetPosition(class Position3 const &)
public: void __thiscall smCamera_Implement::SetClipVolume(class ClipVolumePlanes *)
protected: class ClipVolume * __thiscall smCamera_Implement::CreateCameraVolume(float)
private: void __thiscall smCamera_Implement::LoadDistFactors(unsigned long,class ConfigParser::iterator const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
const smCamera_Implement::`vftable'{for `RenderParserImpl'}
const smCamera_Implement::`vftable'{for `smCamera'}
};

#endif

