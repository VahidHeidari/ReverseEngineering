#ifndef SLIDERBUTTON_H_
#define SLIDERBUTTON_H_

class SliderButton
{
public: __thiscall SliderButton::SliderButton(int,float,float,float,float)
public: __thiscall SliderButton::SliderButton(struct SliderButtonParameters const &)
public: virtual __thiscall SliderButton::~SliderButton(void)
public: double __thiscall SliderButton::getMaxPosition(void)const 
public: double __thiscall SliderButton::getMinPosition(void)const 
public: double __thiscall SliderButton::getPosition(void)const 
public: float __thiscall SliderButton::getFromCoordinate(void)
public: float __thiscall SliderButton::getToCoordinate(void)
public: int __thiscall SliderButton::getFixedSize(void)const 
public: virtual void __thiscall SliderButton::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall SliderButton::setCoordinates(float,float,float,float)
public: virtual void __thiscall SliderButton::shift(float,float)
public: void __thiscall SliderButton::arrange(struct SliderButtonParameters const &)
public: void __thiscall SliderButton::fitSliderSize(void)
public: void __thiscall SliderButton::getXYofPos(double,float *,float *)
public: void __thiscall SliderButton::setFixedSize(int)
public: void __thiscall SliderButton::setPosition(double,bool)
public: void __thiscall SliderButton::setPositionRange(double,double,bool)
public: void __thiscall SliderButton::setScrollRange(float,float,bool)
public: void __thiscall SliderButton::shiftFromToCoordinates(float,float)
protected: virtual struct MSGTABLE const * __thiscall SliderButton::getMessageTable(void)const 
protected: virtual void __thiscall SliderButton::onLButtonDown(int,int,int)
protected: virtual void __thiscall SliderButton::onMouseMove(int,int,int)
protected: virtual void __thiscall SliderButton::onMove(int,int)
protected: virtual void __thiscall SliderButton::onPaint(void)
protected: virtual void __thiscall SliderButton::onStyleChanging(bool,int)
protected: void __thiscall SliderButton::init(void)
protected: void __thiscall SliderButton::onClose(void)
protected: void __thiscall SliderButton::onKillFocus(class Control *)
protected: void __thiscall SliderButton::onLButtonUp(int,int,int)
protected: void __thiscall SliderButton::onSetFocus(class Control *)
private: void __thiscall SliderButton::thisArrange(struct SliderButtonParameters const &)
public: void __thiscall SliderButton::`vbase destructor'(void)
const SliderButton::`vbtable'{for `ControlWithVisibleAreas'}
const SliderButton::`vbtable'{for `UI::Button'}
const SliderButton::`vbtable'{for `UI::Switch'}
const SliderButton::`vftable'{for `Control'}
const SliderButton::`vftable'{for `UI::Element'}
const SliderButton::`vftable'{for `UI::Switch'}

protected: static struct MSGTABLE const SliderButton::messageTable
private: static struct MSGTABLE_ENTRY const * const SliderButton::messageEntries
};

#endif
