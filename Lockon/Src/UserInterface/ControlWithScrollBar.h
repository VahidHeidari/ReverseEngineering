#ifndef CONTROLWITHSCROLLBAR_H_
#define CONTROLWITHSCROLLBAR_H_

class ControlWithScrollBar
{
public: __thiscall ControlWithScrollBar::ControlWithScrollBar(class ControlWithScrollBar const &)
public: __thiscall ControlWithScrollBar::ControlWithScrollBar(int,float,float,float,float)
public: __thiscall ControlWithScrollBar::ControlWithScrollBar(struct ControlWithScrollBarParameters const &)
public: virtual __thiscall ControlWithScrollBar::~ControlWithScrollBar(void)
public: void __thiscall ControlWithScrollBar::`vbase destructor'(void)
public: class ControlWithScrollBar & __thiscall ControlWithScrollBar::operator=(class ControlWithScrollBar const &)
public: bool __thiscall ControlWithScrollBar::getVisibleScrollBar(void)
public: bool __thiscall ControlWithScrollBar::hasScrollBar(void)const 
public: class ScrollBar * __thiscall ControlWithScrollBar::getScrollBar(void)const 
public: float __thiscall ControlWithScrollBar::getHeaderHeight(void)
public: float __thiscall ControlWithScrollBar::getMinXSize(void)
public: virtual bool __thiscall ControlWithScrollBar::canAcceptPoint(class TPoint<float> const &)const 
public: virtual void __thiscall ControlWithScrollBar::fitVisibleArea(void)
public: virtual void __thiscall ControlWithScrollBar::setBorderThickness(bool)
public: virtual void __thiscall ControlWithScrollBar::setCoordinates(float,float,float,float)
public: void __thiscall ControlWithScrollBar::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall ControlWithScrollBar::arrange(struct ControlWithScrollBarParameters const &)
public: void __thiscall ControlWithScrollBar::createScrollBar(int,int,int,float,int)
public: void __thiscall ControlWithScrollBar::deleteScrollBar(void)
public: void __thiscall ControlWithScrollBar::recreateScrollBar(void)
public: void __thiscall ControlWithScrollBar::setVisibleScrollBar(bool)
Protected: virtual void __thiscall ControlWithScrollBar::updateSelfPaintCoordinates(void)
protected: virtual struct MSGTABLE const * __thiscall ControlWithScrollBar::getMessageTable(void)const 
protected: virtual void __thiscall ControlWithScrollBar::onCreate(void)
protected: virtual void __thiscall ControlWithScrollBar::onStyleChanging(bool,int)
protected: void __thiscall ControlWithScrollBar::correctVisibleArea(void)
protected: void __thiscall ControlWithScrollBar::init(void)
private: void __thiscall ControlWithScrollBar::fitScrollBar(void)
private: void __thiscall ControlWithScrollBar::thisArrange(struct ControlWithScrollBarParameters const &)
const ControlWithScrollBar::`vbtable'
const ControlWithScrollBar::`vftable'{for `Control'}
const ControlWithScrollBar::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const ControlWithScrollBar::messageTable
private: static struct MSGTABLE_ENTRY const * const ControlWithScrollBar::messageEntries
};

#endif
