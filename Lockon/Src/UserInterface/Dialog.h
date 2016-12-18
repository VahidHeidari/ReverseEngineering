#ifndef DIALOG_H_
#define DIALOG_H_

class Dialog
{
public: __thiscall Dialog::Dialog(char const *)
public: __thiscall Dialog::Dialog(class Dialog const &)
public: __thiscall Dialog::Dialog(int,float,float,float,float)
public: __thiscall Dialog::Dialog(struct DialogParameters const &)
public: virtual __thiscall Dialog::~Dialog(void)
public: class Dialog & __thiscall Dialog::operator=(class Dialog const &)
Public: virtual void __thiscall Dialog::whenCloseDialog(void)
public: bool __thiscall Dialog::getFastPointAcceptCheck(void)const 
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Dialog::getName(void)const 
public: static bool __cdecl Dialog::setCursorVisibility(void)
public: virtual bool __thiscall Dialog::canAcceptPoint(class TPoint<float> const &)const 
public: virtual void __thiscall Dialog::disable(bool)
public: virtual void __thiscall Dialog::enable(bool)
public: virtual void __thiscall Dialog::fitByParent(class Control *)
public: void __thiscall Dialog::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall Dialog::arrange(struct DialogParameters const &)
public: void __thiscall Dialog::setFastPointAcceptCheck(bool)
protected: virtual struct MSGTABLE const * __thiscall Dialog::getMessageTable(void)const 
protected: virtual void __thiscall Dialog::onActivate(int,class Control *)
protected: virtual void __thiscall Dialog::onCreate(void)
protected: virtual void __thiscall Dialog::onLButtonDown(int,int,int)
protected: virtual void __thiscall Dialog::onMouseMove(int,int,int)
protected: virtual void __thiscall Dialog::onPaint(void)
protected: virtual void __thiscall Dialog::onStyleChanging(bool,int)
protected: void __thiscall Dialog::init(void)
protected: void __thiscall Dialog::onClose(void)
protected: void __thiscall Dialog::onCloseButton(void)
protected: void __thiscall Dialog::onLButtonUp(int,int,int)
protected: void __thiscall Dialog::onWindowPosChanging(int,int)
private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall Dialog::createResourceName(char const *,int,class MapOfFile *)
private: virtual void __thiscall Dialog::decreaseDialogCounter(void)
private: virtual void __thiscall Dialog::increaseDialogCounter(void)
private: void __thiscall Dialog::createControl(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &,char const *,int,int,class MainMenu * &)
private: void __thiscall Dialog::createFromFile(char const *)
private: void __thiscall Dialog::thisArrange(struct DialogParameters const &)
public: void __thiscall Dialog::`vbase destructor'(void)
const Dialog::`vbtable'
const Dialog::`vftable'{for `Control'}
const Dialog::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const Dialog::messageTable
private: static class std::set<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > Dialog::dialogsWithCursor
private: static int Dialog::dialogsCounter
private: static struct MSGTABLE_ENTRY const * const Dialog::messageEntries
};

#endif
