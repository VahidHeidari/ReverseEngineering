#ifndef WRADIOMESSAGE_H_
#define WRADIOMESSAGE_H_

#include "wRadioReceiver.h"
#include "wRadioTransmitter.h"

class wRadioMessage
{
public: __thiscall wRadioMessage::wRadioMessage(class wRadioMessage const &)
public: __thiscall wRadioMessage::wRadioMessage(class wRadioReceiver *,class wRadioTransmitter *,unsigned long,int,int,int,int,int,int,int,bool,int,int)
public: __thiscall wRadioMessage::wRadioMessage(void)
public: virtual __thiscall wRadioMessage::~wRadioMessage(void)
public: class wRadioMessage const & __thiscall wRadioMessage::operator=(class wRadioMessage const &)
public: class wRadioReceiver * __thiscall wRadioMessage::getReceiver(void)
public: class wRadioTransmitter * __thiscall wRadioMessage::getTransmitter(void)
public: int __thiscall wRadioMessage::get_RW_Number(void)
public: int __thiscall wRadioMessage::get_altitude(void)
public: int __thiscall wRadioMessage::get_bearing(void)
public: int __thiscall wRadioMessage::get_boardNumber(void)
public: int __thiscall wRadioMessage::get_call_sign_number(void)
public: int __thiscall wRadioMessage::get_country(void)
public: int __thiscall wRadioMessage::get_distance(void)
public: int __thiscall wRadioMessage::get_state(void)
public: int __thiscall wRadioMessage::get_wingmanNumber(void)
public: unsigned long __thiscall wRadioMessage::get_event(void)
public: bool __thiscall wRadioMessage::get_humanLeader(void)
public: void __thiscall wRadioMessage::setReceiver(class wRadioReceiver *)
public: void __thiscall wRadioMessage::setTransmitter(class wRadioTransmitter *)
public: void __thiscall wRadioMessage::set_RW_Number(int)
public: void __thiscall wRadioMessage::set_altitude(int)
public: void __thiscall wRadioMessage::set_bearing(int)
public: void __thiscall wRadioMessage::set_boardNumber(int)
public: void __thiscall wRadioMessage::set_call_sign_number(int)
public: void __thiscall wRadioMessage::set_country(int)
public: void __thiscall wRadioMessage::set_distance(int)
public: void __thiscall wRadioMessage::set_event(unsigned long)
public: void __thiscall wRadioMessage::set_humanLeader(bool)
public: void __thiscall wRadioMessage::set_state(int)
public: void __thiscall wRadioMessage::set_wingmanNumber(int)
const wRadioMessage::`vftable'
};

#endif

