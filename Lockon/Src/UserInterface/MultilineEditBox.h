#ifndef MULTILINEEDITBOX_H_
#define MULTILINEEDITBOX_H_

class MultilineEditBox
{
public: __thiscall MultilineEditBox::MultilineEditBox(int,float,float,float,float)
public: __thiscall MultilineEditBox::MultilineEditBox(struct MultilineEditBoxParameters const &)
public: virtual __thiscall MultilineEditBox::~MultilineEditBox(void)
public: bool __thiscall MultilineEditBox::getCaretAfterLastSymbol(void)const 
public: int __thiscall MultilineEditBox::getCaretAdditionalHeight(void)const 
public: int __thiscall MultilineEditBox::getCaretPos(void)const 
public: int __thiscall MultilineEditBox::getCaretRow(void)const 
public: int __thiscall MultilineEditBox::getCaretWidth(void)const 
public: int __thiscall MultilineEditBox::getMaxTextSize(void)const 
public: unsigned int __thiscall MultilineEditBox::getLastTimeOfCaretDrawing(void)const 
public: virtual void __thiscall MultilineEditBox::deleteSelection(void)
public: virtual void __thiscall MultilineEditBox::setCoordinates(float,float,float,float)
public: void __thiscall MultilineEditBox::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall MultilineEditBox::arrange(struct MultilineEditBoxParameters const &)
public: void __thiscall MultilineEditBox::cut(void)
public: void __thiscall MultilineEditBox::focusOnCaret(void)
public: void __thiscall MultilineEditBox::insertToCaretPos(char const *)
public: void __thiscall MultilineEditBox::paste(void)
public: void __thiscall MultilineEditBox::setCaretAdditionalHeight(float)
public: void __thiscall MultilineEditBox::setCaretPos(int,bool)
public: void __thiscall MultilineEditBox::setCaretWidth(float)
public: void __thiscall MultilineEditBox::setCurrentTimeAsLastTimeOfCaretDrawing(void)
public: void __thiscall MultilineEditBox::setFont(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,int,int)
public: void __thiscall MultilineEditBox::setLastTimeOfCaretDrawing(unsigned int)
public: void __thiscall MultilineEditBox::setMaxTextSize(int)
public: void __thiscall MultilineEditBox::setNeedToFocusOnCaret(bool)
public: void __thiscall MultilineEditBox::shiftCaretRow(int)
Protected: void __thiscall MultilineEditBox::updateCaret(void)
protected: virtual bool __thiscall MultilineEditBox::refreshText(void)
protected: virtual struct MSGTABLE const * __thiscall MultilineEditBox::getMessageTable(void)const 
protected: virtual struct UndoRedoAction __thiscall MultilineEditBox::undoRedo(int,int)
protected: virtual void __thiscall MultilineEditBox::drawCaret(void)const 
protected: virtual void __thiscall MultilineEditBox::onLButtonDblclk(int,int,int)
protected: virtual void __thiscall MultilineEditBox::onLButtonDown(int,int,int)
protected: virtual void __thiscall MultilineEditBox::onMouseMove(int,int,int)
protected: virtual void __thiscall MultilineEditBox::onMove(int,int)
protected: virtual void __thiscall MultilineEditBox::onPaint(void)
protected: void __thiscall MultilineEditBox::init(void)
protected: void __thiscall MultilineEditBox::onChar(char,int)
protected: void __thiscall MultilineEditBox::onKeyDown(int,int)
protected: void __thiscall MultilineEditBox::onKillFocus(class Control *)
protected: void __thiscall MultilineEditBox::onLButtonUp(int,int,int)
protected: void __thiscall MultilineEditBox::onSetFocus(class Control *)
protected: void __thiscall MultilineEditBox::setNeedToUpdateCaret(bool)
private: void __thiscall MultilineEditBox::thisArrange(struct MultilineEditBoxParameters const &)
public: void __thiscall MultilineEditBox::`vbase destructor'(void)
const MultilineEditBox::`vbtable'{for `ControlWithScrollBar'}
const MultilineEditBox::`vbtable'{for `UI::Editor'}
const MultilineEditBox::`vftable'{for `Control'}
const MultilineEditBox::`vftable'{for `UI::Editor'}
const MultilineEditBox::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const MultilineEditBox::messageTable
private: static struct MSGTABLE_ENTRY const * const MultilineEditBox::messageEntries
};

#endif
