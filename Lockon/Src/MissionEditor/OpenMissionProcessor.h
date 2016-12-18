#ifndef OPENMISSIONPROCESSOR_H_
#define OPENMISSIONPROCESSOR_H_

class OpenMissionProcessor
{
public: __thiscall OpenMissionProcessor::OpenMissionProcessor(class OpenMissionProcessor const &)
public: __thiscall OpenMissionProcessor::OpenMissionProcessor(void)
public: virtual __thiscall OpenMissionProcessor::~OpenMissionProcessor(void)
public: class OpenMissionProcessor & __thiscall OpenMissionProcessor::operator=(class OpenMissionProcessor const &)
public: bool __thiscall OpenMissionProcessor::isMerged(void)const 
public: class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > __thiscall OpenMissionProcessor::getMergedMission(void)
public: enum OpenMissionProcessor::FileType const & __thiscall OpenMissionProcessor::GetFileType(void)const 
public: static void __cdecl OpenMissionProcessor::setMerged(int)
public: virtual bool __thiscall OpenMissionProcessor::FileWasChoosed(char const *,char const *,char const *,enum TwoWayProcessor::TwoWayProcessorFlags)
public: virtual bool __thiscall OpenMissionProcessor::initialize(void)
public: virtual bool __thiscall OpenMissionProcessor::uninitialize(void)
public: virtual void __thiscall OpenMissionProcessor::Notify(bool)
public: virtual void __thiscall OpenMissionProcessor::onCreate(void)
public: virtual void __thiscall OpenMissionProcessor::onPaint(void)
public: void __thiscall OpenMissionProcessor::Add(class MissionListener *)
public: void __thiscall OpenMissionProcessor::OnCancel(void)
public: void __thiscall OpenMissionProcessor::OnClose(void)
public: void __thiscall OpenMissionProcessor::OnDelete(void)
public: void __thiscall OpenMissionProcessor::OnEdit(void)
public: void __thiscall OpenMissionProcessor::OnMouseWheel(void)
public: void __thiscall OpenMissionProcessor::OnScrollThePage(void)
public: void __thiscall OpenMissionProcessor::Remove(class MissionListener *)
public: void __thiscall OpenMissionProcessor::SetParentProcessor(class TwoWayProcessor const *)
public: void __thiscall OpenMissionProcessor::onClose(void)
protected: virtual struct MSGTABLE const * __thiscall OpenMissionProcessor::getMessageTable(void)const 
private: bool __thiscall OpenMissionProcessor::FillBriefingWindow(void)
private: bool __thiscall OpenMissionProcessor::GetExtensionFromFileName(char const *,int,char * const)
private: bool __thiscall OpenMissionProcessor::IsCampaignInTheFile(char *)
private: bool __thiscall OpenMissionProcessor::LoadCampaignFromFile(char const *,bool)
private: bool __thiscall OpenMissionProcessor::LoadFromFile(void)
private: bool __thiscall OpenMissionProcessor::LoadMissionFromFile(char const *)
private: bool __thiscall OpenMissionProcessor::LoadTrackFromFile(char const *)
private: void __thiscall OpenMissionProcessor::CloseAll(void)
private: void __thiscall OpenMissionProcessor::SetStateOfButton(enum OpenMissionProcessor::OpenMissionProcessorTags,bool)
private: void __thiscall OpenMissionProcessor::SetStateOfButtons(void)
public: void __thiscall OpenMissionProcessor::`vbase destructor'(void)
const OpenMissionProcessor::`vbtable'
const OpenMissionProcessor::`vftable'{for `AbleToCloseMissionEditor'}
const OpenMissionProcessor::`vftable'{for `Bindable'}
const OpenMissionProcessor::`vftable'{for `Control'}
const OpenMissionProcessor::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const OpenMissionProcessor::`vftable'{for `System'}
const OpenMissionProcessor::`vftable'{for `TwoWayProcessor'}
const OpenMissionProcessor::`vftable'{for `UI::Element'}

private: static bool OpenMissionProcessor::merged
private: static int OpenMissionProcessor::side
private: static struct MSGTABLE_ENTRY const * const OpenMissionProcessor::messageEntries
protected: static struct MSGTABLE const OpenMissionProcessor::messageTable
};

#endif

