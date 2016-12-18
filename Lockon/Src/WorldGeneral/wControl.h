#ifndef WCONTROL_H_
#define WCONTROL_H_

class wControl
{
public: __thiscall wControl::wControl(class wControl const &)
public: __thiscall wControl::wControl(void)
public: virtual __thiscall wControl::~wControl(void)
public: class wControl & __thiscall wControl::operator=(class wControl const &)
public: virtual class wControl * __thiscall wControl::GetCommander(void)
public: virtual int __thiscall wControl::Life(void)
public: virtual void __thiscall wControl::ProcessCommand(unsigned long,unsigned long,void *)
public: virtual void __thiscall wControl::serialize(class EagleDynamics::Common::Serializer &)
const wControl::`vftable'{for `EagleDynamics::Common::FakeUnknown<class EagleDynamics::Common::Serializable>'}
const wControl::`vftable'{for `Suicide'}
const wControl::`vftable'{for `wListener'}
};

#endif

