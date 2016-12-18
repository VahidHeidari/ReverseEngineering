#ifndef WOBJECT_H_
#define WOBJECT_H_

class wObject
{
public: __thiscall wObject::wObject(class wObject const &)
public: __thiscall wObject::wObject(void)
public: virtual __thiscall wObject::~wObject(void)
public: class wObject & __thiscall wObject::operator=(class wObject const &)
public: virtual void __thiscall wObject::addListener(class wListener *)
public: virtual void __thiscall wObject::notifyBirth(class wObject *)
public: virtual void __thiscall wObject::notifyDeath(class wObject *)
public: virtual void __thiscall wObject::notifyEvent(struct wEventBase const &)
public: virtual void __thiscall wObject::removeListener(class wListener *)
public: virtual void __thiscall wObject::serialize(class EagleDynamics::Common::Serializer &)
const wObject::`vftable'{for `Evoker<class wListener,class Link<class wListener> >'}
const wObject::`vftable'{for `Suicide'}
};

#endif

