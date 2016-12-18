#ifndef PROGRESSBAR_H_
#define PROGRESSBAR_H_

class ProgressBar
{
public: __thiscall ProgressBar::ProgressBar(int,float,float,float,float)
public: __thiscall ProgressBar::ProgressBar(struct ProgressBarParameters const &)
public: virtual __thiscall ProgressBar::~ProgressBar(void)
public: class Control & __thiscall ProgressBar::getProgress(void)
public: class Static & __thiscall ProgressBar::getStaticText(void)
public: virtual char const * __thiscall ProgressBar::getCaption(void)const 
public: virtual double __thiscall ProgressBar::getStep(void)const 
public: virtual double __thiscall ProgressBar::getValue(void)const 
public: virtual struct UI::Tuner::Range const __thiscall ProgressBar::getRange(void)const 
public: virtual void __thiscall ProgressBar::inflateChildren(void)
public: virtual void __thiscall ProgressBar::setCaption(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)
public: virtual void __thiscall ProgressBar::setCoordinates(float,float,float,float)
public: virtual void __thiscall ProgressBar::setRange(struct UI::Tuner::Range const &)
public: virtual void __thiscall ProgressBar::setStep(double)
public: virtual void __thiscall ProgressBar::setValue(double)
public: void __thiscall ProgressBar::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall ProgressBar::arrange(struct ProgressBarParameters const &)
Protected: void __thiscall ProgressBar::update(void)
Protected: void __thiscall ProgressBar::updateProgress(void)
Protected: void __thiscall ProgressBar::updateText(void)
protected: virtual struct MSGTABLE const * __thiscall ProgressBar::getMessageTable(void)const 
protected: void __thiscall ProgressBar::init(void)
private: void __thiscall ProgressBar::thisArrange(struct ProgressBarParameters const &)
public: void __thiscall ProgressBar::`vbase destructor'(void)
const ProgressBar::`vbtable'{for `ControlWithVisibleAreas'}
const ProgressBar::`vbtable'{for `UI::Tuner'}
const ProgressBar::`vftable'{for `Control'}
const ProgressBar::`vftable'{for `UI::Element'}
const ProgressBar::`vftable'{for `UI::Tuner'}

protected: static struct MSGTABLE const ProgressBar::messageTable
private: static struct MSGTABLE_ENTRY const * const ProgressBar::messageEntries
};

#endif
