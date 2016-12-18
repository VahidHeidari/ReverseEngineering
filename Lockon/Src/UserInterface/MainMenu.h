#ifndef MAINMENU_H_
#define MAINMENU_H_

class MainMenu
{
public: __thiscall MainMenu::MainMenu(class MainMenu const &)
public: __thiscall MainMenu::MainMenu(int,float,float,float,float)
public: __thiscall MainMenu::MainMenu(struct MainMenuParameters const &)
public: virtual __thiscall MainMenu::~MainMenu(void)
public: class MainMenu & __thiscall MainMenu::operator=(class MainMenu const &)
public: class Control * __thiscall MainMenu::getLastFocus(void)const 
public: class MenuButton * __thiscall MainMenu::getDroppedChild(void)const 
public: int __thiscall MainMenu::findItem(class MenuButton &)
public: int __thiscall MainMenu::getItemsDist(void)const 
public: virtual bool __thiscall MainMenu::canAcceptPoint(class TPoint<float> const &)const 
public: virtual void __thiscall MainMenu::setCoordinates(float,float,float,float)
public: void __thiscall MainMenu::addItem(class MenuButton &)
public: void __thiscall MainMenu::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall MainMenu::arrange(struct MainMenuParameters const &)
public: void __thiscall MainMenu::childActivated(class MenuButton *)
public: void __thiscall MainMenu::fitItems(bool)
public: void __thiscall MainMenu::onMenuItemSelect(int,int)
public: void __thiscall MainMenu::setDroppedChild(class MenuButton *)
public: void __thiscall MainMenu::setItemsDist(int)
public: void __thiscall MainMenu::setLastFocus(class Control *)
public: void __thiscall MainMenu::switchItem(class MenuButton &,int)
protected: virtual struct MSGTABLE const * __thiscall MainMenu::getMessageTable(void)const 
protected: virtual void __thiscall MainMenu::inflate(void)
protected: virtual void __thiscall MainMenu::inflateSelf(void)
protected: virtual void __thiscall MainMenu::onPaint(void)
protected: void __thiscall MainMenu::init(void)
private: void __thiscall MainMenu::thisArrange(struct MainMenuParameters const &)
public: void __thiscall MainMenu::`vbase destructor'(void)
const MainMenu::`vbtable'
const MainMenu::`vftable'{for `Control'}
const MainMenu::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const MainMenu::messageTable
private: static struct MSGTABLE_ENTRY const * const MainMenu::messageEntries
};

#endif
