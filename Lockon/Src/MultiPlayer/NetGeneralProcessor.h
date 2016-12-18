#ifndef NETGENERALPROCESSOR_H_
#define NETGENERALPROCESSOR_H_

class NetGeneralProcessor
{
public: __thiscall NetGeneralProcessor::NetGeneralProcessor(class NetGeneralProcessor const &)
public: __thiscall NetGeneralProcessor::NetGeneralProcessor(void)
public: virtual __thiscall NetGeneralProcessor::~NetGeneralProcessor(void)
public: class NetGeneralProcessor & __thiscall NetGeneralProcessor::operator=(class NetGeneralProcessor const &)
public: virtual bool __thiscall NetGeneralProcessor::initialize(void)
public: virtual bool __thiscall NetGeneralProcessor::process(void)
public: virtual bool __thiscall NetGeneralProcessor::uninitialize(void)
public: void __thiscall NetGeneralProcessor::chatOn(void)
public: void __thiscall NetGeneralProcessor::joinOnOff(bool)
public: void __thiscall NetGeneralProcessor::lockButtons(void)
public: void __thiscall NetGeneralProcessor::poolOn(void)
public: void __thiscall NetGeneralProcessor::unlockButtons(bool)
protected: virtual struct MSGTABLE const * __thiscall NetGeneralProcessor::getMessageTable(void)const 
protected: void __thiscall NetGeneralProcessor::onCloseAll(void)
protected: void __thiscall NetGeneralProcessor::onConnectChat(void)
protected: void __thiscall NetGeneralProcessor::onJoinPool(void)
public: void __thiscall NetGeneralProcessor::`vbase destructor'(void)
const NetGeneralProcessor::`vbtable'
const NetGeneralProcessor::`vftable'
const NetGeneralProcessor::`vftable'{for `Control'}
const NetGeneralProcessor::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const NetGeneralProcessor::`vftable'{for `System'}
const NetGeneralProcessor::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const NetGeneralProcessor::messageTable
private: static struct MSGTABLE_ENTRY const * const NetGeneralProcessor::messageEntries
};

#endif

