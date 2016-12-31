#ifndef VCAMERA_H_
#define VCAMERA_H_

class vCamera
{
public: __thiscall vCamera::vCamera(class vCamera const &)
public: __thiscall vCamera::vCamera(void)
public: class vCamera & __thiscall vCamera::operator=(class vCamera const &)
public: static void __cdecl vCamera::SerializeStatic(class EagleDynamics::Common::Serializer &)
public: static void __cdecl vCamera::StaticInit(void)
public: static void __cdecl vCamera::StaticStart(void)
public: unsigned long __thiscall vCamera::fightIDGet(void)
public: virtual bool __thiscall vCamera::LaunchNotify(unsigned long,unsigned long)
public: virtual class E3::Vector * __thiscall vCamera::LocalPointGet(void)
public: virtual class E3::Vector * __thiscall vCamera::VelocityGet(void)
public: virtual class cPosition * __thiscall vCamera::PositionGet(void)
public: virtual float __thiscall vCamera::GetViewAngle(void)
public: virtual float __thiscall vCamera::PilotHAngle(void)
public: virtual float __thiscall vCamera::PilotVAngle(void)
public: virtual unsigned long __thiscall vCamera::ObjectID(void)
public: virtual void __thiscall vCamera::CommandSet(int,float)
public: virtual void __thiscall vCamera::PositionSet(class cPosition)
public: virtual void __thiscall vCamera::QuakeCamera(class cPosition,unsigned long)
public: virtual void __thiscall vCamera::Serialize(class EagleDynamics::Common::Serializer &)
public: virtual void __thiscall vCamera::SetPadlock(bool)
public: virtual void __thiscall vCamera::Shake(float,float,float)
public: virtual void __thiscall vCamera::Start(void)
public: void __thiscall vCamera::HideStatusBar(void)
public: void __thiscall vCamera::ShowStatusBar(unsigned long,int)
public: void __thiscall vCamera::fightIDSet(unsigned long)
const vCamera::`vftable'

public: static class cPointerTemplate<class MovingObject> vCamera::humanPtr
public: static class std::vector<unsigned long,class std::allocator<unsigned long> > vCamera::objectsToIgnore
public: static class std::vector<unsigned long,class std::allocator<unsigned long> > vCamera::staticObjectsToIgnore
public: static bool vCamera::ShowInfoDataOn
public: static bool vCamera::ShowInfoDateOn
public: static bool vCamera::bCoordinatesInMeters
public: static bool vCamera::bDisableSnapViewsSaving
public: static bool vCamera::bLocal
public: static bool vCamera::bMouseCockpit
public: static bool vCamera::bMouseExternal
public: static bool vCamera::bMoveMode
public: static bool vCamera::bPlus
public: static bool vCamera::bReverse
public: static bool vCamera::bTerrainRestriction
public: static bool vCamera::bUseDefaultSnapViews
public: static double vCamera::explosionExpoTime
public: static float vCamera::fastKeyboardSpeed
public: static float vCamera::fastMouseSpeed
public: static float vCamera::hExternalViewAngleMax
public: static float vCamera::hExternalViewAngleMin
public: static float vCamera::hViewAngleExternal
public: static float vCamera::hViewAngleExternalDefault
public: static float vCamera::keyboardSpeed
public: static float vCamera::mouseSpeed
public: static float vCamera::normalKeyboardSpeed
public: static float vCamera::normalMouseSpeed
public: static float vCamera::slowKeyboardSpeed
public: static float vCamera::slowMouseSpeed
public: static int vCamera::humanCameraType
public: static int vCamera::iObjectsFilter
public: static unsigned long vCamera::humanID
protected: static unsigned long vCamera::fightID
};

#endif

