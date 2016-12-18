#ifndef OPTIONSDIALOG_H_
#define OPTIONSDIALOG_H_

class OptionsDialog
{
public: __thiscall OptionsDialog::OptionsDialog(class OptionsDialog const &)
public: __thiscall OptionsDialog::OptionsDialog(void)
public: virtual __thiscall OptionsDialog::~OptionsDialog(void)
public: class OptionsDialog & __thiscall OptionsDialog::operator=(class OptionsDialog const &)
public: static void __cdecl OptionsDialog::prepare(void)
private: void __thiscall OptionsDialog::onApply(void)
private: void __thiscall OptionsDialog::onClose(void)
private: void __thiscall OptionsDialog::onModeChange(void)
private: void __thiscall OptionsDialog::onReset(void)
public: void __thiscall OptionsDialog::`vbase destructor'(void)
const OptionsDialog::`vbtable'
const OptionsDialog::`vftable'{for `AbleToCloseMissionEditor'}
const OptionsDialog::`vftable'{for `Bindable'}
const OptionsDialog::`vftable'{for `Control'}
const OptionsDialog::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const OptionsDialog::`vftable'{for `System'}
const OptionsDialog::`vftable'{for `UI::Element'}

private: static int OptionsDialog::startPage
};

#endif

