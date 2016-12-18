#ifndef INPUTDIALOG_H_
#define INPUTDIALOG_H_

class InputDialog
{
public: __thiscall InputDialog::InputDialog(class InputDialog const &)
public: __thiscall InputDialog::InputDialog(void)
public: virtual __thiscall InputDialog::~InputDialog(void)
public: class InputDialog & __thiscall InputDialog::operator=(class InputDialog const &)
public: static void __cdecl InputDialog::prepare(void)
public: virtual bool __thiscall InputDialog::initialize(void)
public: virtual bool __thiscall InputDialog::uninitialize(void)
public: virtual void __thiscall InputDialog::enable(bool)
public: void __thiscall InputDialog::load(void)
public: void __thiscall InputDialog::onAxes(void)
public: void __thiscall InputDialog::onButtons(void)
public: void __thiscall InputDialog::onJoystick(void)
public: void __thiscall InputDialog::onSelector(void)
public: void __thiscall InputDialog::restore(void)
public: void __thiscall InputDialog::save(void)
public: void __thiscall InputDialog::update(void)
protected: virtual struct MSGTABLE const * __thiscall InputDialog::getMessageTable(void)const 
public: void __thiscall InputDialog::`vbase destructor'(void)
const InputDialog::`vbtable'
const InputDialog::`vftable'{for `Control'}
const InputDialog::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const InputDialog::`vftable'{for `System'}
const InputDialog::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const InputDialog::messageTable
private: static int InputDialog::position
private: static struct MSGTABLE_ENTRY const * const InputDialog::messageEntries
};

#endif

