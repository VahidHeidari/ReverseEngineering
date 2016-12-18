#ifndef CAMPAIGNPROCESSOR_H_
#define CAMPAIGNPROCESSOR_H_

class CampaignProcessor
{
public: __thiscall CampaignProcessor::CampaignProcessor(class CampaignProcessor const &)
public: __thiscall CampaignProcessor::CampaignProcessor(void)
public: virtual __thiscall CampaignProcessor::~CampaignProcessor(void)
public: class CampaignProcessor & __thiscall CampaignProcessor::operator=(class CampaignProcessor const &)
public: bool __thiscall CampaignProcessor::IsAStageReadyToFly(void)
public: static bool __cdecl CampaignProcessor::GetCampaignPassing(void)
public: static bool __cdecl CampaignProcessor::GetEditableCampaignMode(void)
public: static void __cdecl CampaignProcessor::SetCampaignPassing(bool)
public: static void __cdecl CampaignProcessor::SetEditableCampaignMode(bool)
public: virtual bool __thiscall CampaignProcessor::initialize(void)
public: virtual bool __thiscall CampaignProcessor::uninitialize(void)
public: virtual void __thiscall CampaignProcessor::onClose(void)
public: virtual void __thiscall CampaignProcessor::onCreate(void)
public: virtual void __thiscall CampaignProcessor::show(bool)
public: void __thiscall CampaignProcessor::ClearTheCampaign(void)
public: void __thiscall CampaignProcessor::OnCampaignTitleEdit(void)
public: void __thiscall CampaignProcessor::OnClose(void)
public: void __thiscall CampaignProcessor::OnExit(void)
public: void __thiscall CampaignProcessor::OnReset(void)
public: void __thiscall CampaignProcessor::OnResult(void)
public: void __thiscall CampaignProcessor::OnSelChangeStagesList(void)
public: void __thiscall CampaignProcessor::OnStageDescriptionEdit(void)
public: void __thiscall CampaignProcessor::OnStageSpinEdit(void)
public: void __thiscall CampaignProcessor::OnStageTitleEdit(void)
public: void __thiscall CampaignProcessor::OnStagesQuantitySpinEdit(void)
public: void __thiscall CampaignProcessor::Refresh(bool *)
public: void __thiscall CampaignProcessor::RefreshCoalitions(void)
public: void __thiscall CampaignProcessor::`vbase destructor'(void)
public: void __thiscall CampaignProcessor::setFirstStageActive(void)
public: void __thiscall CampaignProcessor::setToolbarButtonsState(void)
protected: static struct MSGTABLE const CampaignProcessor::messageTable
protected: virtual struct MSGTABLE const * __thiscall CampaignProcessor::getMessageTable(void)const 
private: class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > __thiscall CampaignProcessor::AddStage(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
private: class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > __thiscall CampaignProcessor::GetCampaign(void)
private: int __thiscall CampaignProcessor::GetStageIndex(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
private: int __thiscall CampaignProcessor::RemoveStage(int)
private: void __thiscall CampaignProcessor::RefreshCampaignWindow(void)
private: void __thiscall CampaignProcessor::RefreshStageWindow(int)
private: void __thiscall CampaignProcessor::RefreshStateOfResultButton(void)
private: void __thiscall CampaignProcessor::SetStageAsActive(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
private: void __thiscall CampaignProcessor::SetStageIndexSpinEditRange(void)
const CampaignProcessor::`vbtable'
const CampaignProcessor::`vftable'
const CampaignProcessor::`vftable'{for `Control'}
const CampaignProcessor::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const CampaignProcessor::`vftable'{for `System'}
const CampaignProcessor::`vftable'{for `UI::Element'}

private: static bool CampaignProcessor::m_bCampaignPassing
private: static bool CampaignProcessor::m_bIsEditableCampaignMode
private: static struct MSGTABLE_ENTRY const * const CampaignProcessor::messageEntries
};

#endif

