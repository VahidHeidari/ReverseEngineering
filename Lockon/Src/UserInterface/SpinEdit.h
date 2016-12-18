#ifndef SPINEDIT_H_
#define SPINEDIT_H_

class SpinEdit
{
public: __thiscall SpinEdit::SpinEdit(int,float,float,float,float)
public: __thiscall SpinEdit::SpinEdit(struct SpinEditParameters)
public: virtual __thiscall SpinEdit::~SpinEdit(void)
public: float __thiscall SpinEdit::getMaxValue(void)const 
public: float __thiscall SpinEdit::getMinValue(void)const 
public: int __thiscall SpinEdit::lastIncrementSign(void)
public: virtual bool __thiscall SpinEdit::canAcceptPoint(class TPoint<float> const &)const 
public: virtual double __thiscall SpinEdit::getStep(void)const 
public: virtual double __thiscall SpinEdit::getValue(void)const 
public: virtual struct UI::Tuner::Range const __thiscall SpinEdit::getRange(void)const 
public: virtual void __thiscall SpinEdit::onStyleChanging(bool,int)
public: virtual void __thiscall SpinEdit::setRange(struct UI::Tuner::Range const &)
public: virtual void __thiscall SpinEdit::setStep(double)
public: virtual void __thiscall SpinEdit::setValue(double)
public: void __thiscall SpinEdit::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall SpinEdit::arrange(struct SpinEditParameters const &)
public: void __thiscall SpinEdit::calculatePrecision(void)
public: void __thiscall SpinEdit::changeValue(float,int)
public: void __thiscall SpinEdit::decreaseValue(void)
public: void __thiscall SpinEdit::increaseValue(void)
public: void __thiscall SpinEdit::setFontColor(unsigned long,int)
public: void __thiscall SpinEdit::setMaxValue(float)
public: void __thiscall SpinEdit::setMinValue(float)
public: void __thiscall SpinEdit::setValueRange(float,float)
public: void __thiscall SpinEdit::showPosSign(bool)
protected: virtual struct MSGTABLE const * __thiscall SpinEdit::getMessageTable(void)const 
protected: virtual void __thiscall SpinEdit::onPaint(void)
protected: void __thiscall SpinEdit::fitToActualValue(bool)
protected: void __thiscall SpinEdit::init(struct SpinEditParameters const &)
protected: void __thiscall SpinEdit::onEditChange(void)
protected: void __thiscall SpinEdit::onEditEndSession(void)
protected: void __thiscall SpinEdit::onEditKillFocus(void)
private: void __thiscall SpinEdit::thisArrange(struct SpinEditParameters const &)
public: void __thiscall SpinEdit::`vbase destructor'(void)
const SpinEdit::`vbtable'{for `ControlWithVisibleAreas'}
const SpinEdit::`vbtable'{for `UI::Tuner'}
const SpinEdit::`vftable'{for `Control'}
const SpinEdit::`vftable'{for `UI::Element'}
const SpinEdit::`vftable'{for `UI::Tuner'}

protected: static struct MSGTABLE const SpinEdit::messageTable
private: static struct MSGTABLE_ENTRY const * const SpinEdit::messageEntries
};

#endif
