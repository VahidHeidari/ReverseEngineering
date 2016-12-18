#ifndef SCROLLBAR_H_
#define SCROLLBAR_H_

class ScrollBar
{
public: __thiscall ScrollBar::ScrollBar(class ScrollBar const &)
public: __thiscall ScrollBar::ScrollBar(int,float,float,float,float)
public: __thiscall ScrollBar::ScrollBar(struct ScrollBarParameters const &)
public: virtual __thiscall ScrollBar::~ScrollBar(void)
public: class ScrollBar & __thiscall ScrollBar::operator=(class ScrollBar const &)
public: class SliderButton * __thiscall ScrollBar::getScroller(void)const 
public: class Static * __thiscall ScrollBar::getDecreaseButton(void)const 
public: class Static * __thiscall ScrollBar::getIncreaseButton(void)const 
public: float __thiscall ScrollBar::getFromCoordinate(void)
public: float __thiscall ScrollBar::getToCoordinate(void)
public: int __thiscall ScrollBar::getMaxPosition(void)const 
public: int __thiscall ScrollBar::getMinPosition(void)const 
public: int __thiscall ScrollBar::getPageSize(void)const 
public: int __thiscall ScrollBar::getPosition(void)const 
public: virtual bool __thiscall ScrollBar::canAcceptPoint(class TPoint<float> const &)const 
public: void __thiscall ScrollBar::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall ScrollBar::arrange(struct ScrollBarParameters const &)
public: void __thiscall ScrollBar::decreasePosition(unsigned int)
public: void __thiscall ScrollBar::fitFromToCoord(void)
public: void __thiscall ScrollBar::fitSliderSize(void)
public: void __thiscall ScrollBar::increasePosition(unsigned int)
public: void __thiscall ScrollBar::pageDown(unsigned int)
public: void __thiscall ScrollBar::pageUp(unsigned int)
public: void __thiscall ScrollBar::setPageSize(int)
public: void __thiscall ScrollBar::setPosition(int,bool)
public: void __thiscall ScrollBar::setPositionRange(int,int)
public: void __thiscall ScrollBar::setScrollRange(float,float)
protected: virtual struct MSGTABLE const * __thiscall ScrollBar::getMessageTable(void)const 
protected: virtual void __thiscall ScrollBar::onLButtonDown(int,int,int)
protected: virtual void __thiscall ScrollBar::onPaint(void)
protected: virtual void __thiscall ScrollBar::onStyleChanging(bool,int)
protected: void __thiscall ScrollBar::init(void)
protected: void __thiscall ScrollBar::onDecreasePosition(void)
protected: void __thiscall ScrollBar::onGetKeyboardFocus(int)
protected: void __thiscall ScrollBar::onIncreasePosition(void)
protected: void __thiscall ScrollBar::onScrollerMove(void)
protected: void __thiscall ScrollBar::onSetFocus(class Control *)
private: void __thiscall ScrollBar::thisArrange(struct ScrollBarParameters const &)
public: void __thiscall ScrollBar::`vbase destructor'(void)
const ScrollBar::`vbtable'
const ScrollBar::`vftable'{for `Control'}
const ScrollBar::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const ScrollBar::messageTable
private: static struct MSGTABLE_ENTRY const * const ScrollBar::messageEntries
};

#endif
