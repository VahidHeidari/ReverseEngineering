#ifndef WARNINGPROCESSOR_H_
#define WARNINGPROCESSOR_H_

class WarningProcessor
{
public: __thiscall WarningProcessor::WarningProcessor(char const *)
public: __thiscall WarningProcessor::WarningProcessor(class WarningProcessor const &)
public: virtual __thiscall WarningProcessor::~WarningProcessor(void)
public: class WarningProcessor & __thiscall WarningProcessor::operator=(class WarningProcessor const &)
public: virtual bool __thiscall WarningProcessor::initialize(void)
public: virtual bool __thiscall WarningProcessor::uninitialize(void)
public: virtual void __thiscall WarningProcessor::onCreate(void)
public: void __thiscall WarningProcessor::OnCancel(void)
public: void __thiscall WarningProcessor::OnNo(void)
public: void __thiscall WarningProcessor::OnOk(void)
public: void __thiscall WarningProcessor::SetParentProcessor(class TwoWayProcessor const *)
public: void __thiscall WarningProcessor::SetText(char const *)
public: void __thiscall WarningProcessor::`vbase destructor'(void)
public: void __thiscall WarningProcessor::onClose(void)
public: void __thiscall WarningProcessor::onKeyDown(int,int)
protected: virtual struct MSGTABLE const * __thiscall WarningProcessor::getMessageTable(void)const 
const WarningProcessor::`vbtable'
const WarningProcessor::`vftable'{for `Control'}
const WarningProcessor::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const WarningProcessor::`vftable'{for `System'}
const WarningProcessor::`vftable'{for `UI::Element'}

public: static enum UI_STRINGS const * const WarningProcessor::m_escWarning
protected: static struct MSGTABLE const WarningProcessor::messageTable
private: static struct MSGTABLE_ENTRY const * const WarningProcessor::messageEntries
};

#endif

