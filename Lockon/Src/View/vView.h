#ifndef VVIEW_H_
#define VVIEW_H_

#include "E3.h"

class vView
{
public: virtual __thiscall vView::~vView(void)
public: class vView & __thiscall vView::operator=(class vView const &)
private: static void __cdecl vView::ParseConfig(void)
private: void __thiscall vView::ReadStrings(void)
private: void __thiscall vView::UpdateExternalZoom(void)
public: __thiscall vView::vView(class vView const &)
public: __thiscall vView::vView(void)
public: bool __thiscall vView::HasMouseFocus(void)
public: virtual bool __thiscall vView::GetCockpitHUDOnly(void)
public: virtual bool __thiscall vView::GetLeftMirrorOn(void)
public: virtual bool __thiscall vView::GetRightMirrorOn(void)
public: virtual bool __thiscall vView::GetTempCockpitOn(void)
public: virtual bool __thiscall vView::InCockpit(void)
public: virtual bool __thiscall vView::Init(void)
public: virtual bool __thiscall vView::Started(void)
public: virtual class E3::Vector * __thiscall vView::CameraLocalPointGet(void)
public: virtual class E3::Vector * __thiscall vView::CameraVelocityGet(void)
public: virtual class cPosition * __thiscall vView::CameraPositionGet(int)
public: virtual class cPosition * __thiscall vView::CameraPositionGet(void)
public: virtual class cPositionMFD * __thiscall vView::CameraPositionMFD(void)
public: virtual float __thiscall vView::GetViewAngle(void)
public: virtual float __thiscall vView::PilotHAngle(void)
public: virtual float __thiscall vView::PilotVAngle(void)
public: virtual int __thiscall vView::CameraTypeGet(int)
public: virtual int __thiscall vView::CameraTypeGet(void)
public: virtual int __thiscall vView::Restore(struct _iobuf *)
public: virtual int __thiscall vView::ReturnCameraPosition(int)
public: virtual int __thiscall vView::Save(struct _iobuf *)
public: virtual unsigned long __thiscall vView::ObjectIDGet(void)
public: virtual void __thiscall vView::AutoChange(void)
public: virtual void __thiscall vView::CameraPositionSet(class cPosition)
public: virtual void __thiscall vView::CarrierLanding(void)
public: virtual void __thiscall vView::CommandSet(int)
public: virtual void __thiscall vView::CommandSet(int,float)
public: virtual void __thiscall vView::Finish(void)
public: virtual void __thiscall vView::HelmetMove(float,float)
public: virtual void __thiscall vView::HumanCrashNotify(unsigned long)
public: virtual void __thiscall vView::HumanEjectNotify(bool)
public: virtual void __thiscall vView::LaunchNotify(unsigned long,unsigned long)
public: virtual void __thiscall vView::NextFrame(double)
public: virtual void __thiscall vView::Quake(class cPosition,unsigned long)
public: virtual void __thiscall vView::Serialize(class EagleDynamics::Common::Serializer &)
public: virtual void __thiscall vView::SetLeftMirrorOn(bool)
public: virtual void __thiscall vView::SetPadlock(bool)
public: virtual void __thiscall vView::SetRightMirrorOn(bool)
public: virtual void __thiscall vView::SetTempCockpitOn(bool)
public: virtual void __thiscall vView::Shake(float,float,float)
public: virtual void __thiscall vView::Start(void)
public: virtual void __thiscall vView::Stop(void)
public: virtual void __thiscall vView::SwitchTo(unsigned long)
const vView::`vftable'

public: static bool vView::bChaseNyMove
public: static bool vView::bInCockpit
public: static bool vView::bOldTrackVersion
public: static int vView::rX
public: static int vView::rY
private: static bool vView::bLeftMirrorOn
private: static bool vView::bOptionMirrors
private: static bool vView::bRightMirrorOn
private: static bool vView::bTempCockpitOn
private: static float vView::externalZoomSpeedCurrent
private: static int vView::curCamera
private: static class vCamera * * vView::camera
};

#endif

