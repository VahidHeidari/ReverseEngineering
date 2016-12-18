#ifndef MENUBUTTON_H_
#define MENUBUTTON_H_

class MenuButton
{
public: __thiscall MenuButton::MenuButton(int,float,float,float,float)
public: __thiscall MenuButton::MenuButton(struct MenuButtonParameters const &)
public: virtual __thiscall MenuButton::~MenuButton(void)
public: bool __thiscall MenuButton::isMenuChild(void)
public: virtual bool __thiscall MenuButton::canAcceptPoint(class TPoint<float> const &)const 
public: virtual void __thiscall MenuButton::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall MenuButton::onActivate(int,class Control *)
public: virtual void __thiscall MenuButton::setCoordinates(float,float,float,float)
public: void __thiscall MenuButton::arrange(struct MenuButtonParameters const &)
public: void __thiscall MenuButton::iAmClosed(void)
public: void __thiscall MenuButton::iAmDropped(void)
public: void __thiscall MenuButton::onDrop(void)
public: void __thiscall MenuButton::onProbablyCloseList(void)
public: void __thiscall MenuButton::setList(void)
public: void __thiscall MenuButton::setMenu(class MainMenu *)
protected: virtual struct MSGTABLE const * __thiscall MenuButton::getMessageTable(void)const 
protected: virtual void __thiscall MenuButton::onLButtonDblclk(int,int,int)
protected: virtual void __thiscall MenuButton::onLButtonDown(int,int,int)
protected: virtual void __thiscall MenuButton::onPaint(void)
protected: void __thiscall MenuButton::init(void)
protected: void __thiscall MenuButton::onKeyDown(int,int)
protected: void __thiscall MenuButton::onLButtonUp(int,int,int)
protected: void __thiscall MenuButton::onSelectionChanged(void)
protected: void __thiscall MenuButton::rememberFocus(class Control *)
private: void __thiscall MenuButton::thisArrange(struct MenuButtonParameters const &)
public: void __thiscall MenuButton::`vbase destructor'(void)
const MenuButton::`vbtable'{for `ControlWithVisibleAreas'}
const MenuButton::`vbtable'{for `UI::Button'}
const MenuButton::`vbtable'{for `UI::Switch'}
const MenuButton::`vftable'{for `Control'}
const MenuButton::`vftable'{for `UI::Element'}
const MenuButton::`vftable'{for `UI::Switch'}

protected: static struct MSGTABLE const MenuButton::messageTable
private: static struct MSGTABLE_ENTRY const * const MenuButton::messageEntries
};

#endif
