#ifndef EDITBOX_H_
#define EDITBOX_H_

class EditBox
{
public: __thiscall EditBox::EditBox(int,float,float,float,float)
public: __thiscall EditBox::EditBox(struct EditBoxParameters const &)
public: virtual __thiscall EditBox::~EditBox(void)
Public: void __thiscall EditBox::updateDigits(void)
public: class TPoint<float> __thiscall EditBox::getCaretSize(void)
public: double __thiscall EditBox::getMaxValue(void)const 
public: double __thiscall EditBox::getMinValue(void)const 
public: int __thiscall EditBox::getBodyType(void)const 
public: int __thiscall EditBox::getCaret(void)const 
public: int __thiscall EditBox::getMaxTextSize(void)const 
public: unsigned int __thiscall EditBox::getDigits(void)const 
public: virtual char const * __thiscall EditBox::getCaption(void)const 
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const __thiscall EditBox::getText(void)const 
public: virtual void __thiscall EditBox::activate(void)
public: virtual void __thiscall EditBox::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall EditBox::disable(bool)
public: virtual void __thiscall EditBox::freeze(bool)
public: virtual void __thiscall EditBox::setCoordinates(float,float,float,float)
public: virtual void __thiscall EditBox::setText(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall EditBox::arrange(struct EditBoxParameters const &)
public: void __thiscall EditBox::empty(void)
public: void __thiscall EditBox::getValue(int &)
public: void __thiscall EditBox::setBodyType(int)
public: void __thiscall EditBox::setCaption(char const *,int)
public: void __thiscall EditBox::setCaret(int,bool)
public: void __thiscall EditBox::setCaretSize(int,int)
public: void __thiscall EditBox::setDigits(unsigned int)
public: void __thiscall EditBox::setMaxTextSize(int)
public: void __thiscall EditBox::setRange(double,double)
protected: bool __thiscall EditBox::checkValue(double,double)
protected: bool __thiscall EditBox::checkValue(int,int)
protected: bool __thiscall EditBox::tGetValue(int &)
protected: virtual bool __thiscall EditBox::checkText(void)
protected: virtual bool __thiscall EditBox::isAvailableChars(char)
protected: virtual struct MSGTABLE const * __thiscall EditBox::getMessageTable(void)const 
protected: virtual void __thiscall EditBox::fitPCaption(void)
protected: virtual void __thiscall EditBox::onLButtonDblclk(int,int,int)
protected: virtual void __thiscall EditBox::onLButtonDown(int,int,int)
protected: virtual void __thiscall EditBox::onMouseMove(int,int,int)
protected: virtual void __thiscall EditBox::onMove(int,int)
protected: virtual void __thiscall EditBox::onPaint(void)
protected: virtual void __thiscall EditBox::showCursor(void)
protected: void __thiscall EditBox::init(void)
protected: void __thiscall EditBox::onChar(char,int)
protected: void __thiscall EditBox::onKeyDown(int,int)
protected: void __thiscall EditBox::onKillFocus(class Control *)
protected: void __thiscall EditBox::onLButtonUp(int,int,int)
protected: void __thiscall EditBox::onMouseWheel(short,short,int,int)
protected: void __thiscall EditBox::onSetFocus(class Control *)
private: void __thiscall EditBox::thisArrange(struct EditBoxParameters const &)
public: void __thiscall EditBox::`vbase destructor'(void)
const EditBox::`vbtable'
const EditBox::`vbtable'{for `ControlWithVisibleAreas'}
const EditBox::`vbtable'{for `UI::Button'}
const EditBox::`vbtable'{for `UI::Switch'}
const EditBox::`vftable'{for `Control'}
const EditBox::`vftable'{for `UI::Editor'}
const EditBox::`vftable'{for `UI::Element'}
const EditBox::`vftable'{for `UI::Switch'}

protected: static struct MSGTABLE const EditBox::messageTable
private: static struct MSGTABLE_ENTRY const * const EditBox::messageEntries
};

#endif
