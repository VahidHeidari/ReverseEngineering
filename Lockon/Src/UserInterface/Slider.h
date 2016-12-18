#ifndef SLIDER_H_
#define SLIDER_H_

class Slider
{
public: __thiscall Slider::Slider(int,float,float,float,float)
public: __thiscall Slider::Slider(struct SliderParameters const &)
public: virtual __thiscall Slider::~Slider(void)
public: double __thiscall Slider::getMaxPosition(void)const 
public: double __thiscall Slider::getMinPosition(void)const 
public: double __thiscall Slider::getPosition(void)const 
public: virtual bool __thiscall Slider::canAcceptPoint(class TPoint<float> const &)const 
public: virtual double __thiscall Slider::getStep(void)const 
public: virtual double __thiscall Slider::getValue(void)const 
public: virtual struct UI::Tuner::Range const __thiscall Slider::getRange(void)const 
public: virtual void __thiscall Slider::setRange(struct UI::Tuner::Range const &)
public: virtual void __thiscall Slider::setStep(double)
public: virtual void __thiscall Slider::setValue(double)
public: void __thiscall Slider::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall Slider::arrange(struct SliderParameters const &)
public: void __thiscall Slider::setPosition(double)
public: void __thiscall Slider::setPositionRange(double,double)
protected: virtual struct MSGTABLE const * __thiscall Slider::getMessageTable(void)const 
protected: virtual void __thiscall Slider::onLButtonDown(int,int,int)
protected: virtual void __thiscall Slider::onPaint(void)
protected: virtual void __thiscall Slider::onStyleChanging(bool,int)
protected: void __thiscall Slider::init(void)
protected: void __thiscall Slider::onProgressClick(void)
protected: void __thiscall Slider::onSliderMove(void)
private: void __thiscall Slider::thisArrange(struct SliderParameters const &)
public: void __thiscall Slider::`vbase destructor'(void)
const Slider::`vbtable'{for `Control'}
const Slider::`vbtable'{for `UI::Tuner'}
const Slider::`vftable'{for `Control'}
const Slider::`vftable'{for `UI::Element'}
const Slider::`vftable'{for `UI::Tuner'}

protected: static struct MSGTABLE const Slider::messageTable
private: static struct MSGTABLE_ENTRY const * const Slider::messageEntries
};

#endif
