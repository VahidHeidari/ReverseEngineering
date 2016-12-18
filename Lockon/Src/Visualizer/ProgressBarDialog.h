#ifndef PROGRESSBARDIALOG_H_
#define PROGRESSBARDIALOG_H_

class ProgressBarDialog
{
public: __thiscall ProgressBarDialog::ProgressBarDialog(char const *)
public: __thiscall ProgressBarDialog::ProgressBarDialog(class ProgressBarDialog const &)
public: virtual __thiscall ProgressBarDialog::~ProgressBarDialog(void)
public: class ProgressBarDialog & __thiscall ProgressBarDialog::operator=(class ProgressBarDialog const &)
public: void __thiscall ProgressBarDialog::set(float,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,bool)
public: void __thiscall ProgressBarDialog::setText(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,bool)
public: void __thiscall ProgressBarDialog::setValue(float,bool)
public: void __thiscall ProgressBarDialog::update(void)
protected: virtual struct MSGTABLE const * __thiscall ProgressBarDialog::getMessageTable(void)const 
protected: void __thiscall ProgressBarDialog::changeResolution(void)
protected: void __thiscall ProgressBarDialog::setBackground(void)
public: void __thiscall ProgressBarDialog::`default constructor closure'(void)
public: void __thiscall ProgressBarDialog::`vbase destructor'(void)
const ProgressBarDialog::`vbtable'
const ProgressBarDialog::`vftable'{for `Control'}
const ProgressBarDialog::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const ProgressBarDialog::`vftable'{for `System'}
const ProgressBarDialog::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const ProgressBarDialog::messageTable
private: static struct MSGTABLE_ENTRY const * const ProgressBarDialog::messageEntries
};

#endif

