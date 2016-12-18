#ifndef TOOLSPROCESSOR_H_
#define TOOLSPROCESSOR_H_

class ToolsProcessor
{
public: __thiscall ToolsProcessor::ToolsProcessor(class ToolsProcessor const &)
public: __thiscall ToolsProcessor::ToolsProcessor(void)
public: virtual __thiscall ToolsProcessor::~ToolsProcessor(void)
public: class ToolsProcessor::ToolsListener * __thiscall ToolsProcessor::getCapture(void)const 
public: class ToolsProcessor & __thiscall ToolsProcessor::operator=(class ToolsProcessor const &)
public: bool __thiscall ToolsProcessor::isNetworkMode(void)
public: unsigned long __thiscall ToolsProcessor::getGroupSelectorPosition(unsigned long)
public: unsigned long __thiscall ToolsProcessor::setGroupSelectorPosition(unsigned long)
public: virtual bool __thiscall ToolsProcessor::initialize(void)
public: virtual bool __thiscall ToolsProcessor::uninitialize(void)
public: virtual void __thiscall ToolsProcessor::Notify(bool)
public: virtual void __thiscall ToolsProcessor::onClose(class Processor *)
public: virtual void __thiscall ToolsProcessor::onCreate(void)
public: virtual void __thiscall ToolsProcessor::onGroupType(class GroupTypeProcessor *)
public: virtual void __thiscall ToolsProcessor::onOpen(class Processor *)
public: void __thiscall ToolsProcessor::`vbase destructor'(void)
public: void __thiscall ToolsProcessor::add(class ToolsProcessor::ToolsListener *)
public: void __thiscall ToolsProcessor::locking(void)
public: void __thiscall ToolsProcessor::onCamp(void)
public: void __thiscall ToolsProcessor::onFastBattlePlanner(void)
public: void __thiscall ToolsProcessor::onGroupSelector(void)
public: void __thiscall ToolsProcessor::onMissionEditor(void)
public: void __thiscall ToolsProcessor::onMissionGoal(void)
public: void __thiscall ToolsProcessor::onNetMode(void)
public: void __thiscall ToolsProcessor::onNetworkPlay(void)
public: void __thiscall ToolsProcessor::onStartSelector(void)
public: void __thiscall ToolsProcessor::onZoom100(void)
public: void __thiscall ToolsProcessor::onZoomBack(void)
public: void __thiscall ToolsProcessor::onZoomForward(void)
public: void __thiscall ToolsProcessor::onZoomInOff(void)
public: void __thiscall ToolsProcessor::onZoomInOn(void)
public: void __thiscall ToolsProcessor::onZoomOutOff(void)
public: void __thiscall ToolsProcessor::onZoomOutOn(void)
public: void __thiscall ToolsProcessor::press(enum ToolsProcessor::ToolsElements const &)
public: void __thiscall ToolsProcessor::remove(class ToolsProcessor::ToolsListener *)
public: void __thiscall ToolsProcessor::resetAllZoomButtonsToUnpushedState(void)
public: void __thiscall ToolsProcessor::setButtonsPassingCampaign(void)
public: void __thiscall ToolsProcessor::setCapture(class ToolsProcessor::ToolsListener *)
public: void __thiscall ToolsProcessor::setCorrectStartSelectorPosition(void)
public: void __thiscall ToolsProcessor::setDisabledStateOfAllButtons(void)
public: void __thiscall ToolsProcessor::setNetwork(bool)
public: void __thiscall ToolsProcessor::setStateOfButton(enum MEButton,bool)
public: void __thiscall ToolsProcessor::setStateOfButtons(bool)
public: void __thiscall ToolsProcessor::unlocking(void)
public: void __thiscall ToolsProcessor::unpress(enum ToolsProcessor::ToolsElements const &)
public: void __thiscall ToolsProcessor::zoomIn(void)
public: void __thiscall ToolsProcessor::zoomOut(void)
protected: virtual struct MSGTABLE const * __thiscall ToolsProcessor::getMessageTable(void)const 
private: bool __thiscall ToolsProcessor::closeTheCampaignProcessor(void (__thiscall Control::*)(void))
private: bool __thiscall ToolsProcessor::closeTheMissionProcessor(void (__thiscall Control::*)(void))
private: void __thiscall ToolsProcessor::beginNetwork(enum ToolsProcessor::ToolsElements)
private: void __thiscall ToolsProcessor::clearTheMissionAndCampaign(void)
private: void __thiscall ToolsProcessor::endNetwork(void)
private: void __thiscall ToolsProcessor::onPress(unsigned long)
private: void __thiscall ToolsProcessor::onUnpress(void)
private: void __thiscall ToolsProcessor::setStateOfButton(class Static *,bool)
private: void __thiscall ToolsProcessor::showButton(class Static *,bool)
const ToolsProcessor::`vbtable'
const ToolsProcessor::`vftable'{for `Control'}
const ToolsProcessor::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const ToolsProcessor::`vftable'{for `GroupTypeProcessor::Listener'}
const ToolsProcessor::`vftable'{for `ProcessorsManager::Listener'}
const ToolsProcessor::`vftable'{for `System'}
const ToolsProcessor::`vftable'{for `TwoWayProcessor'}
const ToolsProcessor::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const ToolsProcessor::messageTable
private: static struct MSGTABLE_ENTRY const * const ToolsProcessor::messageEntries
};

#endif

