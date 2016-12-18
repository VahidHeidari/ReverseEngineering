#ifndef MOVINGHANDLE_H_
#define MOVINGHANDLE_H_

class MovingHandle
{
public: __thiscall MovingHandle::MovingHandle(class MovingHandle const &)
public: __thiscall MovingHandle::MovingHandle(class Vector3 const &)
public: virtual __thiscall MovingHandle::~MovingHandle(void)
public: class MovingHandle & __thiscall MovingHandle::operator=(class MovingHandle const &)
public: bool __thiscall MovingHandle::SearchFromThisNode(class viSearch *)
public: virtual void __thiscall MovingHandle::ChangePos(class Position3 const &)
public: virtual void __thiscall MovingHandle::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall MovingHandle::`default constructor closure'(void)
const MovingHandle::`vftable'
};

#endif

