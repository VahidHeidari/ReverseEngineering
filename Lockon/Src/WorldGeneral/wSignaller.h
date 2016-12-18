#ifndef WSIGNALLER_H_
#define WSIGNALLER_H_

class wSignaller
{
public: __thiscall wSignaller::wSignaller(void)
public: __thiscall wSignaller::~wSignaller(void)
public: class wSignaller & __thiscall wSignaller::operator=(class wSignaller const &)
public: bool __thiscall wSignaller::getState(void)
public: bool __thiscall wSignaller::processBegin(void)
public: bool __thiscall wSignaller::processEnd(void)
public: void __thiscall wSignaller::setState(bool)
public: void __thiscall wSignaller::updateState(void)
};

class EagleDynamics::Common::Serializer & __cdecl operator<<(class EagleDynamics::Common::Serializer &,class wSignaller &)

#endif

