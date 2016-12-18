#ifndef WRADIOMANAGER_H_
#define WRADIOMANAGER_H_

#include "wRadioReceiver.h"
#include "wRadioTransmitter.h"
#include "wRadioMessage.h"

class wRadioManager
{
public: __thiscall wRadioManager::wRadioManager(class wRadioManager const &)
public: __thiscall wRadioManager::wRadioManager(void)
public: __thiscall wRadioManager::~wRadioManager(void)
public: class wRadioManager & __thiscall wRadioManager::operator=(class wRadioManager const &)
public: void __thiscall wRadioManager::addReceiver(class wRadioReceiver *)
public: void __thiscall wRadioManager::removeReceiver(class wRadioReceiver *)
public: void __thiscall wRadioManager::addTransmitter(class wRadioTransmitter *)
public: void __thiscall wRadioManager::removeTransmitter(class wRadioTransmitter *)
public: void __thiscall wRadioManager::transmitMessage(class wRadioMessage *)
};

#endif

