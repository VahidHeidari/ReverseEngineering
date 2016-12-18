#ifndef MISSIONEDITOR_H_
#define MISSIONEDITOR_H_

`string'
class Binder * globalBinder
class IMapLevel * globalIMisMapLevel
class MenuProcessor * globalMenuProcessor
class MissionEditor * globalMissionEditor
class PilotLogBook * globalPilotLogBook

void __cdecl fly(void)
void __cdecl goToMEsection(enum MissionEditorSections)
void __cdecl removeGroupsFromDraw(void)
void __cdecl restoreMapPositionFromMission(void)
void __cdecl setGroupPoint(class _com_ptr_t<class _com_IIID<struct IGroup,&struct __s_GUID _GUID_5db2dc56_6086_430b_bab5_89e7f2713e3c> >,int,long,long,long)
void __cdecl setMapDragging(class DlgMap *,bool)
void __cdecl setSideFilter(enum MapConverterTypes::MissSide)
void __cdecl setTypeFilter(enum MapConverterTypes::MissType,bool)
void __cdecl setTypeMask(enum MapConverterTypes::MissType)
bool __cdecl clearMission(bool)
bool __cdecl getSkillNames(class std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > &,bool)
class GlobalMapEvoker & __cdecl getGlobalMapEvoker(void)
class MapConverter::MissViewFilter * __cdecl getGlobalMissViewFilter(void)
class StoredDifficulties & __cdecl getGlobalStoredDifficulties(void)

class MissionEditor
{
public: __thiscall MissionEditor::MissionEditor(class MissionEditor const &)
public: __thiscall MissionEditor::MissionEditor(unsigned long const &)
public: virtual __thiscall MissionEditor::~MissionEditor(void)
public: class MissionEditor & __thiscall MissionEditor::operator=(class MissionEditor const &)
public: bool __thiscall MissionEditor::getStateOfCoalitionButton(void)
public: bool __thiscall MissionEditor::getStateOfFlyReadiness(void)
public: bool __thiscall MissionEditor::isMetricSystem(void)
public: class _bstr_t __thiscall MissionEditor::stringById(long)const 
public: class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > __thiscall MissionEditor::getApplication(void)
public: class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > __thiscall MissionEditor::getCampaign(void)
public: unsigned long const & __thiscall MissionEditor::getVersion(void)const 
public: virtual bool __thiscall MissionEditor::initialize(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
public: virtual bool __thiscall MissionEditor::process(void)
public: virtual bool __thiscall MissionEditor::uninitialize(void)
public: virtual class EagleDynamics::Common::Identifier __thiscall MissionEditor::getAutoActivatedProcessor(void)
public: virtual enum Mode const & __thiscall MissionEditor::getMode(void)const 
public: virtual enum Status __thiscall MissionEditor::getStatus(void)const 
public: virtual enum SubStatus __thiscall MissionEditor::getSubStatus(void)const 
public: virtual void __thiscall MissionEditor::missionChanged(enum MissionDisplay const &,bool)
public: virtual void __thiscall MissionEditor::setAutoActivatedProcessor(class EagleDynamics::Common::Identifier const &)
public: virtual void __thiscall MissionEditor::setHistory(class ProcessorsHistory const *,bool,int *)
public: virtual void __thiscall MissionEditor::setMode(enum Mode const &)
public: virtual void __thiscall MissionEditor::setStatus(enum Status const &)
public: virtual void __thiscall MissionEditor::setSubStatus(enum SubStatus const &)
public: void __thiscall MissionEditor::createWaitDialog(void)
public: void __thiscall MissionEditor::destroyWaitDialog(void)
public: void __thiscall MissionEditor::dontSetMapScaleToDefaultAtNextInitializing(void)
public: void __thiscall MissionEditor::finish(void)
public: void __thiscall MissionEditor::freeApplication(void)
public: void __thiscall MissionEditor::freeCampaign(void)
public: void __thiscall MissionEditor::setCampaign(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
public: void __thiscall MissionEditor::setDisabledStateOfAllButtons(void)
public: void __thiscall MissionEditor::setFileName(char const *,char const *,char const *,enum TwoWayProcessor::TwoWayProcessorFlags)
public: void __thiscall MissionEditor::setMetricSystem(bool)
public: void __thiscall MissionEditor::setProperStateOfButtons(void)
public: void __thiscall MissionEditor::setStateOfAnyGroupSelection(bool)
public: void __thiscall MissionEditor::setStateOfButtons(bool)
public: void __thiscall MissionEditor::setStateOfButtons(class std::vector<enum MEButton,class std::allocator<enum MEButton> >,bool)
public: void __thiscall MissionEditor::setStateOfFlyReadiness(bool)
public: void __thiscall MissionEditor::showToolbar(bool)
public: void __thiscall MissionEditor::showTools(bool)
public: void __thiscall MissionEditor::updateMap(void)
private: static bool MissionEditor::bIsSaveMapScale
private: static class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > MissionEditor::m_pCampaign
private: void __thiscall MissionEditor::loadSettings(void)
private: void __thiscall MissionEditor::saveSettings(void)
const MissionEditor::`vftable'
};

#endif

