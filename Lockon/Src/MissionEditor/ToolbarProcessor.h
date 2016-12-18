#ifndef TOOLBARPROCESSOR_H_
#define TOOLBARPROCESSOR_H_

class ToolbarProcessor
{
public: __thiscall ToolbarProcessor::ToolbarProcessor(class ToolbarProcessor const &)
public: __thiscall ToolbarProcessor::ToolbarProcessor(void)
public: virtual __thiscall ToolbarProcessor::~ToolbarProcessor(void)
public: bool __thiscall ToolbarProcessor::getStateOfButton(enum ToolbarProcessor::Elements)
public: bool __thiscall ToolbarProcessor::getStateOfCoalitionButton(void)
public: bool __thiscall ToolbarProcessor::getStateOfFlyReadiness(void)
public: class ToolbarProcessor & __thiscall ToolbarProcessor::operator=(class ToolbarProcessor const &)
public: class ToolbarProcessor::ToolbarListener * __thiscall ToolbarProcessor::getCapture(void)const 
public: static bool __cdecl ToolbarProcessor::getCloseStatus(void)
public: static void __cdecl ToolbarProcessor::disableMenu(void)
public: static void __cdecl ToolbarProcessor::enableMenu(bool)
public: virtual bool __thiscall ToolbarProcessor::initialize(void)
public: virtual bool __thiscall ToolbarProcessor::process(void)
public: virtual bool __thiscall ToolbarProcessor::uninitialize(void)
public: virtual void __thiscall ToolbarProcessor::onClose(class Processor *)
public: virtual void __thiscall ToolbarProcessor::onCreate(void)
public: virtual void __thiscall ToolbarProcessor::onOpen(class Processor *)
public: void __thiscall ToolbarProcessor::Notify(bool)
public: void __thiscall ToolbarProcessor::OnClose(void)
public: void __thiscall ToolbarProcessor::`vbase destructor'(void)
public: void __thiscall ToolbarProcessor::add(class ToolbarProcessor::ToolbarListener *)
public: void __thiscall ToolbarProcessor::doNotify(enum ToolbarProcessor::Elements)
public: void __thiscall ToolbarProcessor::locking(class std::bitset<24> const &)
public: void __thiscall ToolbarProcessor::onAbout(void)
public: void __thiscall ToolbarProcessor::onBackward(void)
public: void __thiscall ToolbarProcessor::onBriefing(void)
public: void __thiscall ToolbarProcessor::onClassify(void)
public: void __thiscall ToolbarProcessor::onClockMode(void)
public: void __thiscall ToolbarProcessor::onClose(void)
public: void __thiscall ToolbarProcessor::onCoalitions(void)
public: void __thiscall ToolbarProcessor::onColors(void)
public: void __thiscall ToolbarProcessor::onCopy(void)
public: void __thiscall ToolbarProcessor::onCut(void)
public: void __thiscall ToolbarProcessor::onDebriefing(void)
public: void __thiscall ToolbarProcessor::onDeclassify(void)
public: void __thiscall ToolbarProcessor::onDelete(void)
public: void __thiscall ToolbarProcessor::onEncyclopedia(void)
public: void __thiscall ToolbarProcessor::onFailures(void)
public: void __thiscall ToolbarProcessor::onForward(void)
public: void __thiscall ToolbarProcessor::onHide(void)
public: void __thiscall ToolbarProcessor::onLoopTrack(void)
public: void __thiscall ToolbarProcessor::onMEScript(void)
public: void __thiscall ToolbarProcessor::onMapOptions(void)
public: void __thiscall ToolbarProcessor::onMenuItemSelect(int,int)
public: void __thiscall ToolbarProcessor::onMerge(void)
public: void __thiscall ToolbarProcessor::onNetChat(void)
public: void __thiscall ToolbarProcessor::onNetPlay(void)
public: void __thiscall ToolbarProcessor::onNew(void)
public: void __thiscall ToolbarProcessor::onOpen(void)
public: void __thiscall ToolbarProcessor::onOptions(void)
public: void __thiscall ToolbarProcessor::onPaste(void)
public: void __thiscall ToolbarProcessor::onPilotLogBook(void)
public: void __thiscall ToolbarProcessor::onPlayTrack(void)
public: void __thiscall ToolbarProcessor::onPrintScreen(void)
public: void __thiscall ToolbarProcessor::onRecordAvi(void)
public: void __thiscall ToolbarProcessor::onRecordTrack(void)
public: void __thiscall ToolbarProcessor::onRedo(void)
public: void __thiscall ToolbarProcessor::onSave(void)
public: void __thiscall ToolbarProcessor::onSaveAs(void)
public: void __thiscall ToolbarProcessor::onStart(void)
public: void __thiscall ToolbarProcessor::onTraining(void)
public: void __thiscall ToolbarProcessor::onUndo(void)
public: void __thiscall ToolbarProcessor::onVideoEdit(void)
public: void __thiscall ToolbarProcessor::onWeather(void)
public: void __thiscall ToolbarProcessor::remove(class ToolbarProcessor::ToolbarListener *)
public: void __thiscall ToolbarProcessor::setButtonState(enum ToolbarProcessor::Elements,bool)
public: void __thiscall ToolbarProcessor::setButtonsPassingCampaign(void)
public: void __thiscall ToolbarProcessor::setCapture(class ToolbarProcessor::ToolbarListener *)
public: void __thiscall ToolbarProcessor::setDisabledStateOfAllButtons(void)
public: void __thiscall ToolbarProcessor::setStateOfAnyGroupSelection(bool)
public: void __thiscall ToolbarProcessor::setStateOfButton(enum MEButton,bool)
public: void __thiscall ToolbarProcessor::setStateOfButtons(bool)
public: void __thiscall ToolbarProcessor::setStateOfFlyReadiness(bool)
public: void __thiscall ToolbarProcessor::setStateOfMenuButtons(bool)
public: void __thiscall ToolbarProcessor::startRecordAvi(void)
protected: virtual struct MSGTABLE const * __thiscall ToolbarProcessor::getMessageTable(void)const 
private: void __thiscall ToolbarProcessor::buttonState(enum ToolbarProcessor::Elements const &,bool)
private: void __thiscall ToolbarProcessor::closeAll(void)
private: void __thiscall ToolbarProcessor::notify(enum ToolbarProcessor::Elements)
private: void __thiscall ToolbarProcessor::setButtonState(class Processor *,bool)
private: void __thiscall ToolbarProcessor::setStateOfButton(enum ToolbarProcessor::Elements,bool)
private: void __thiscall ToolbarProcessor::setStateOfMenuButton(enum ToolbarProcessor::Elements,int,bool)
private: void __thiscall ToolbarProcessor::showButton(enum ToolbarProcessor::Elements,bool)
const ToolbarProcessor::`vbtable'
const ToolbarProcessor::`vftable'{for `CampaignProcessorWatcher'}
const ToolbarProcessor::`vftable'{for `Control'}
const ToolbarProcessor::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const ToolbarProcessor::`vftable'{for `ProcessorsManager::Listener'}
const ToolbarProcessor::`vftable'{for `System'}
const ToolbarProcessor::`vftable'{for `UI::Element'}

protected: static bool ToolbarProcessor::closeStatus
protected: static struct MSGTABLE const ToolbarProcessor::messageTable
private: static struct MSGTABLE_ENTRY const * const ToolbarProcessor::messageEntries
};

#endif

