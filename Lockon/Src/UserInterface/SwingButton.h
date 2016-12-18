#ifndef SWINGBUTTON_H_
#define SWINGBUTTON_H_

class SwingButton
{
public: __thiscall SwingButton::SwingButton(struct SwingButtonParameters const &)
public: virtual __thiscall SwingButton::~SwingButton(void)
public: virtual int __thiscall SwingButton::findFace(void)
public: virtual void __thiscall SwingButton::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall SwingButton::arrange(struct SwingButtonParameters const &)
protected: virtual struct MSGTABLE const * __thiscall SwingButton::getMessageTable(void)const 
protected: virtual void __thiscall SwingButton::onActivate(int,class Control *)
protected: virtual void __thiscall SwingButton::onCreate(void)
protected: virtual void __thiscall SwingButton::onLButtonDblclk(int,int,int)
protected: virtual void __thiscall SwingButton::onLButtonDown(int,int,int)
protected: virtual void __thiscall SwingButton::onStyleChanging(bool,int)
protected: void __thiscall SwingButton::onLButtonUp(int,int,int)
private: void __thiscall SwingButton::init(void)
private: void __thiscall SwingButton::thisArrange(struct SwingButtonParameters const &)
public: void __thiscall SwingButton::`vbase destructor'(void)
const SwingButton::`vbtable'{for `ControlWithVisibleAreas'}
const SwingButton::`vbtable'{for `UI::Button'}
const SwingButton::`vbtable'{for `UI::Switch'}
const SwingButton::`vftable'{for `Control'}
const SwingButton::`vftable'{for `UI::Element'}
const SwingButton::`vftable'{for `UI::Switch'}

protected: static struct MSGTABLE const SwingButton::messageTable
private: static struct MSGTABLE_ENTRY const * const SwingButton::messageEntries
};

#endif
