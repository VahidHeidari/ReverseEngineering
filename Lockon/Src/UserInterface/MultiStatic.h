#ifndef MULTISTATIC_H_
#define MULTISTATIC_H_

class MultiStatic
{
public: __thiscall MultiStatic::MultiStatic(int,float,float,float,float)
public: __thiscall MultiStatic::MultiStatic(struct MultiStaticParameters const &)
public: virtual __thiscall MultiStatic::~MultiStatic(void)
Public: int __thiscall MultiStatic::xToColumn(float,int,bool *)const 
Public: int __thiscall MultiStatic::xyToPos(float,float,bool *)const 
Public: int __thiscall MultiStatic::xyToSelectionPos(float,float,bool *)const 
Public: struct std::pair<int,int> __thiscall MultiStatic::xyToColumnRow(float,float,bool *)const 
public: bool __thiscall MultiStatic::hasSelection(void)const 
public: bool __thiscall MultiStatic::posToXY(int,float &,float &,bool)const 
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall MultiStatic::getSelection(void)const 
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall MultiStatic::getString(int)const 
public: int __thiscall MultiStatic::getFirstVisibleStringNum(void)const 
public: int __thiscall MultiStatic::getLastVisibleStringNum(void)const 
public: int __thiscall MultiStatic::getLineHeight(void)const 
public: int __thiscall MultiStatic::getNumberOfStrings(void)
public: int __thiscall MultiStatic::getNumberOfVisibleStrings(void)const 
public: int __thiscall MultiStatic::getSelectionBegin(void)const 
public: int __thiscall MultiStatic::getSelectionEnd(void)const 
public: int __thiscall MultiStatic::getTextLength(void)const 
public: unsigned long __thiscall MultiStatic::getSelectionColor(void)const 
public: unsigned long __thiscall MultiStatic::getSelectionFontColor(void)const 
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall MultiStatic::getSubstring(int,int)const 
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall MultiStatic::getSubstringFromTo(int,int)const 
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const __thiscall MultiStatic::getText(void)const 
public: virtual void __thiscall MultiStatic::add(char const *,int)
public: virtual void __thiscall MultiStatic::add(char)
public: virtual void __thiscall MultiStatic::assign(char const *,int)
public: virtual void __thiscall MultiStatic::clear(void)
public: virtual void __thiscall MultiStatic::deleteSelection(void)
public: virtual void __thiscall MultiStatic::disable(bool)
public: virtual void __thiscall MultiStatic::freeze(bool)
public: virtual void __thiscall MultiStatic::inflateSelf(void)
public: virtual void __thiscall MultiStatic::insert(int,char const *,int)
public: virtual void __thiscall MultiStatic::insert(int,char)
public: virtual void __thiscall MultiStatic::remove(int,int)
public: virtual void __thiscall MultiStatic::removeFromTo(int,int)
public: virtual void __thiscall MultiStatic::scroll(int)
public: virtual void __thiscall MultiStatic::setCoordinates(float,float,float,float)
public: virtual void __thiscall MultiStatic::setIndent(int)
public: virtual void __thiscall MultiStatic::setText(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall MultiStatic::shift(float,float)
public: void __thiscall MultiStatic::addString(char const *)
public: void __thiscall MultiStatic::arrange(struct MultiStaticParameters const &)
public: void __thiscall MultiStatic::copy(void)const 
public: void __thiscall MultiStatic::delString(int)
public: void __thiscall MultiStatic::empty(void)
public: void __thiscall MultiStatic::noSelection(void)
public: void __thiscall MultiStatic::setContent(char const *)
public: void __thiscall MultiStatic::setFont(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,float,unsigned int)
public: void __thiscall MultiStatic::setFontColor(unsigned long)
public: void __thiscall MultiStatic::setSelection(int,int)
public: void __thiscall MultiStatic::setSelectionBegin(int)
public: void __thiscall MultiStatic::setSelectionColor(unsigned long)
public: void __thiscall MultiStatic::setSelectionEnd(int)
public: void __thiscall MultiStatic::setSelectionFontColor(unsigned long)
protected: bool __thiscall MultiStatic::getSelectionOn(void)const 
protected: class DrawUIText * __thiscall MultiStatic::createDrawString(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)const 
protected: class DrawUIText * __thiscall MultiStatic::createTempDrawString(void)const 
protected: class std::stack<struct UndoRedoAction,class std::deque<struct UndoRedoAction,class std::allocator<struct UndoRedoAction> > > * __thiscall MultiStatic::getCurrentActionStorage(void)
protected: float __thiscall MultiStatic::getNextLineY(float)const 
protected: int __thiscall MultiStatic::getFirstSelectedPos(void)const 
protected: int __thiscall MultiStatic::getUndoRedoMode(void)
protected: virtual bool __thiscall MultiStatic::refreshText(void)
protected: virtual struct MSGTABLE const * __thiscall MultiStatic::getMessageTable(void)const 
protected: virtual struct UndoRedoAction __thiscall MultiStatic::undoRedo(int,int)
protected: virtual void __thiscall MultiStatic::onLButtonDown(int,int,int)
protected: virtual void __thiscall MultiStatic::onMouseMove(int,int,int)
protected: virtual void __thiscall MultiStatic::onMove(int,int)
protected: virtual void __thiscall MultiStatic::onPaint(void)
protected: void __thiscall MultiStatic::addAction(struct UndoRedoAction const &)
protected: void __thiscall MultiStatic::addInsertAction(int,int)
protected: void __thiscall MultiStatic::addRemoveAction(int,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
protected: void __thiscall MultiStatic::calculateNumberOfVisibleStrings(void)
protected: void __thiscall MultiStatic::choseCursor(void)const 
protected: void __thiscall MultiStatic::clearDrawStrings(void)
protected: void __thiscall MultiStatic::clearRedoStorage(void)
protected: void __thiscall MultiStatic::clearUndoStorage(void)
protected: void __thiscall MultiStatic::createDrawStrings(void)
protected: void __thiscall MultiStatic::deselect(void)
protected: void __thiscall MultiStatic::disableUndo(void)
protected: void __thiscall MultiStatic::enableUndo(void)
protected: void __thiscall MultiStatic::init(void)
protected: void __thiscall MultiStatic::noNeedToUpdate(void)
protected: void __thiscall MultiStatic::onClose(void)
protected: void __thiscall MultiStatic::onKeyDown(int,int)
protected: void __thiscall MultiStatic::onKillFocus(class Control *)
protected: void __thiscall MultiStatic::onLButtonUp(int,int,int)
protected: void __thiscall MultiStatic::onMouseWheel(short,short,int,int)
protected: void __thiscall MultiStatic::onSetFocus(class Control *)
protected: void __thiscall MultiStatic::onVScroll(int,int,class Control *)
protected: void __thiscall MultiStatic::redo(void)
protected: void __thiscall MultiStatic::setFirstSelectedPos(int)
protected: void __thiscall MultiStatic::setNeedToUpdate(bool)
protected: void __thiscall MultiStatic::setSelectionOn(bool)
protected: void __thiscall MultiStatic::setUndoRedoMode(int)
protected: void __thiscall MultiStatic::thisArrange(struct MultiStaticParameters const &)
protected: void __thiscall MultiStatic::tuneSelection(void)
protected: void __thiscall MultiStatic::undo(void)
protected: void __thiscall MultiStatic::undoAction(struct UndoRedoAction const &)
public: void __thiscall MultiStatic::`vbase destructor'(void)
const MultiStatic::`vbtable'{for `ControlWithScrollBar'}
const MultiStatic::`vbtable'{for `UI::Editor'}
const MultiStatic::`vftable'{for `Control'}
const MultiStatic::`vftable'{for `UI::Editor'}
const MultiStatic::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const MultiStatic::messageTable
private: static struct MSGTABLE_ENTRY const * const MultiStatic::messageEntries
};

#endif
