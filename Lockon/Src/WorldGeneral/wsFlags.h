#ifndef WSFLAGS_H_
#define WSFLAGS_H_

class wsFlags
{
public: __thiscall wsFlags::wsFlags(__int32)
public: __thiscall wsFlags::wsFlags(void)
public: class wsFlags & __thiscall wsFlags::operator=(class wsFlags const &)
public: bool const __thiscall wsFlags::IsSet(__int32)const 
public: void __thiscall wsFlags::Reset(__int32)
public: void __thiscall wsFlags::Reset(void)
public: void __thiscall wsFlags::Set(__int32)
};

class EagleDynamics::Common::Serializer & __cdecl operator<<(class EagleDynamics::Common::Serializer &,class wsFlags &)

#endif

