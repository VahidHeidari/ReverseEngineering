#ifndef CAMPAIGNOPENPROCESSOR_H_
#define CAMPAIGNOPENPROCESSOR_H_

class CampaignOpenProcessor
{
public: __thiscall CampaignOpenProcessor::CampaignOpenProcessor(class CampaignOpenProcessor const &)
public: __thiscall CampaignOpenProcessor::CampaignOpenProcessor(void)
public: virtual __thiscall CampaignOpenProcessor::~CampaignOpenProcessor(void)
public: class CampaignOpenProcessor & __thiscall CampaignOpenProcessor::operator=(class CampaignOpenProcessor const &)
public: virtual bool __thiscall CampaignOpenProcessor::FileWasChoosed(char const *,char const *,char const *,enum TwoWayProcessor::TwoWayProcessorFlags)
public: virtual bool __thiscall CampaignOpenProcessor::initialize(void)
public: virtual bool __thiscall CampaignOpenProcessor::uninitialize(void)
public: virtual void __thiscall CampaignOpenProcessor::hide(void)
public: virtual void __thiscall CampaignOpenProcessor::onClose(void)
public: virtual void __thiscall CampaignOpenProcessor::onCreate(void)
public: virtual void __thiscall CampaignOpenProcessor::onPaint(void)
public: virtual void __thiscall CampaignOpenProcessor::show(bool)
public: void __thiscall CampaignOpenProcessor::OnCancel(void)
public: void __thiscall CampaignOpenProcessor::OnClose(void)
public: void __thiscall CampaignOpenProcessor::OnOpen(void)
public: void __thiscall CampaignOpenProcessor::SetParentProcessor(class TwoWayProcessor const *)
protected: virtual struct MSGTABLE const * __thiscall CampaignOpenProcessor::getMessageTable(void)const 
private: bool __thiscall CampaignOpenProcessor::FillDescriptionWindow(void)
private: bool __thiscall CampaignOpenProcessor::GetExtensionFromFileName(char const *,int,char * const)
private: bool __thiscall CampaignOpenProcessor::LoadCampaignFromFile(char const *,bool)
private: bool __thiscall CampaignOpenProcessor::LoadFromFile(void)
private: void __thiscall CampaignOpenProcessor::CloseAll(void)
private: void __thiscall CampaignOpenProcessor::SetStateOfButton(enum CampaignOpenProcessor::CampaignOpenProcessorTags,bool)
private: void __thiscall CampaignOpenProcessor::SetStateOfButtons(void)
private: void __thiscall CampaignOpenProcessor::SetStateOfGroupButtons(bool)
public: void __thiscall CampaignOpenProcessor::`vbase destructor'(void)
const CampaignOpenProcessor::`vbtable'
const CampaignOpenProcessor::`vftable'{for `AbleToCloseMissionEditor'}
const CampaignOpenProcessor::`vftable'{for `Control'}
const CampaignOpenProcessor::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const CampaignOpenProcessor::`vftable'{for `System'}
const CampaignOpenProcessor::`vftable'{for `TwoWayProcessor'}
const CampaignOpenProcessor::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const CampaignOpenProcessor::messageTable
private: static struct MSGTABLE_ENTRY const * const CampaignOpenProcessor::messageEntries
};

#endif

