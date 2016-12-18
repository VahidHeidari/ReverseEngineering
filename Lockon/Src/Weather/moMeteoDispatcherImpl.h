#ifndef MOMETEODISPATCHERIMPL_H_
#define MOMETEODISPATCHERIMPL_H_

class moMeteoDispatcherImpl
{
public: __thiscall moMeteoDispatcherImpl::moMeteoDispatcherImpl(class moMeteoDispatcherImpl const &)
public: __thiscall moMeteoDispatcherImpl::moMeteoDispatcherImpl(void)
public: virtual __thiscall moMeteoDispatcherImpl::~moMeteoDispatcherImpl(void)
public: class moMeteoDispatcherImpl & __thiscall moMeteoDispatcherImpl::operator=(class moMeteoDispatcherImpl const &)
public: class Effects::GraphicEffectManager * __thiscall moMeteoDispatcherImpl::GetCloudsGE(void)
public: class gCloudsZW * __thiscall moMeteoDispatcherImpl::GetCloudsZW(void)
public: double __thiscall moMeteoDispatcherImpl::GetCloudPosibility(double,double)
public: float __thiscall moMeteoDispatcherImpl::GetFarDistance(void)
public: static class moMeteoDispatcherImpl * __cdecl moMeteoDispatcherImpl::Create(void)
public: static class moMeteoDispatcherImpl * moMeteoDispatcherImpl::instance
public: static void __cdecl moMeteoDispatcherImpl::Destroy(void)
public: virtual bool __thiscall moMeteoDispatcherImpl::IsOvercastClouds(float &,float &)
public: virtual bool __thiscall moMeteoDispatcherImpl::Randomize(int,int,double,double)
public: virtual enum CloudsType __thiscall moMeteoDispatcherImpl::GetCloudsType(void)
public: virtual float __thiscall moMeteoDispatcherImpl::GetCloudHeight(class Vector3 const &)
public: virtual float __thiscall moMeteoDispatcherImpl::GetCurrentRainPower(void)
public: virtual float __thiscall moMeteoDispatcherImpl::getCloudOcclusion(class Vector3 const &,class Vector3 const &)
public: virtual float __thiscall moMeteoDispatcherImpl::getFogDensity(class Vector3 const &)
public: virtual float __thiscall moMeteoDispatcherImpl::getTurbulance(class Vector3 const &)
public: virtual void __thiscall moMeteoDispatcherImpl::DrawOvercast(float,class HeapVector<class Graphics::VolumeEffect *> *)
public: virtual void __thiscall moMeteoDispatcherImpl::DrawPercipitation(void)
public: virtual void __thiscall moMeteoDispatcherImpl::Exit(void)
public: virtual void __thiscall moMeteoDispatcherImpl::GetHeight(float &,float &)
public: virtual void __thiscall moMeteoDispatcherImpl::Init(void)
public: virtual void __thiscall moMeteoDispatcherImpl::OnFreeResources(void)
public: virtual void __thiscall moMeteoDispatcherImpl::OnNextFrame(class Position3 const &,class Graphics::Fog *)
public: virtual void __thiscall moMeteoDispatcherImpl::SetCloudsDensity(float)
public: virtual void __thiscall moMeteoDispatcherImpl::SetCloudsType(enum CloudsType)
public: virtual void __thiscall moMeteoDispatcherImpl::SetGroundFog(float,float,float)
public: virtual void __thiscall moMeteoDispatcherImpl::SetHeight(float,float)
public: virtual void __thiscall moMeteoDispatcherImpl::SetMaxVisibility(float,float,float)
public: virtual void __thiscall moMeteoDispatcherImpl::SetMinVisibility(float,float,float)
public: virtual void __thiscall moMeteoDispatcherImpl::SetPrecipitation(float,float,float)
public: virtual void __thiscall moMeteoDispatcherImpl::SetPrecipitationPosibility(float)
public: virtual void __thiscall moMeteoDispatcherImpl::SetPrecipitationVisibility(float,float)
public: virtual void __thiscall moMeteoDispatcherImpl::SetRadius(float,float,float)
public: virtual void __thiscall moMeteoDispatcherImpl::SetTemperature(float,float)
public: virtual void __thiscall moMeteoDispatcherImpl::SetThunderbolt(float)
public: virtual void __thiscall moMeteoDispatcherImpl::SetTurbulance(float,float,float)
public: virtual void __thiscall moMeteoDispatcherImpl::SetWind(class Vector3 const &,class Vector3 const &,class Vector3 const &)
public: virtual void __thiscall moMeteoDispatcherImpl::SetWrapSize(float)
public: virtual void __thiscall moMeteoDispatcherImpl::StartMission(void)
public: virtual void __thiscall moMeteoDispatcherImpl::getWind(class Vector3 const &,class Vector3 &)
public: virtual void __thiscall moMeteoDispatcherImpl::getWind(class Vector3 const &,float &,float &)
public: virtual void __thiscall moMeteoDispatcherImpl::getWind(class landscape::lPointOnSurface const &,float,class Vector3 &)
public: void __thiscall moMeteoDispatcherImpl::AddCloudToList(unsigned long,class viCloudObject *)
public: void __thiscall moMeteoDispatcherImpl::BuildBmp(int,char const *)
protected: bool __thiscall moMeteoDispatcherImpl::GenerateCloud(class E3::Vector &)
protected: bool __thiscall moMeteoDispatcherImpl::GetLightningPos(class Vector3 &)
protected: float __thiscall moMeteoDispatcherImpl::GetPrecipitationPower(class E3::Vector &)
protected: virtual void __thiscall moMeteoDispatcherImpl::NextEvent(void)
protected: void __thiscall moMeteoDispatcherImpl::CreatePrecipitation(void)
protected: void __thiscall moMeteoDispatcherImpl::GenerateCloudsInVolume(int,class Box &)
protected: void __thiscall moMeteoDispatcherImpl::UpdateClouds(class Position3 const &,float)
protected: void __thiscall moMeteoDispatcherImpl::UpdateFog(class Position3 const &,class Graphics::Fog *)
protected: void __thiscall moMeteoDispatcherImpl::UpdateRainSnow(class Position3 const &)
const moMeteoDispatcherImpl::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Serializable>'}
const moMeteoDispatcherImpl::`vftable'{for `Graphics::RendererCallback'}
const moMeteoDispatcherImpl::`vftable'{for `IMeteoDispatcher'}
const moMeteoDispatcherImpl::`vftable'{for `Plugin'}
const moMeteoDispatcherImpl::`vftable'{for `Suicide'}
};

#endif

