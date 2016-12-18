#ifndef WRADIORECEIVER_H_
#define WRADIORECEIVER_H_

class wRadioReceiver
{
public: __thiscall wRadioReceiver::wRadioReceiver(class wObject *)
public: __thiscall wRadioReceiver::wRadioReceiver(class wRadioReceiver const &)
public: __thiscall wRadioReceiver::wRadioReceiver(void)
public: virtual __thiscall wRadioReceiver::~wRadioReceiver(void)
public: class wRadioReceiver & __thiscall wRadioReceiver::operator=(class wRadioReceiver const &)
public: virtual class wObject * __thiscall wRadioReceiver::getOwner(void)
public: virtual void __thiscall wRadioReceiver::addRadioListener(class wRadioListener *)
public: virtual void __thiscall wRadioReceiver::receiveMessage(class wRadioMessage *)
public: virtual void __thiscall wRadioReceiver::removeRadioListener(class wRadioListener *)
public: virtual void __thiscall wRadioReceiver::setOwner(class wObject *)
const wRadioReceiver::`vftable'
const wRadioReceiver::`vftable'{for `Evoker<class wListener,class Link<class wListener> >'}
const wRadioReceiver::`vftable'{for `Suicide'}
};

#endif

