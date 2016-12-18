#ifndef COMBOBOX_H_
#define COMBOBOX_H_

class ComboBox
{
public: __thiscall ComboBox::ComboBox(int,float,float,float,float)
public: __thiscall ComboBox::ComboBox(struct ComboBoxParameters const &)
public: virtual __thiscall ComboBox::~ComboBox(void)
public: char const * __thiscall ComboBox::getEditString(void)const 
public: char const * __thiscall ComboBox::getItemCaption(int)const 
public: char const * __thiscall ComboBox::getItemCaption(int,int)const 
public: char const * __thiscall ComboBox::getString(int)const 
public: char const * __thiscall ComboBox::getString(void)const 
public: class Static * __thiscall ComboBox::getButton(void)const 
public: class Static * __thiscall ComboBox::getEditBox(void)const 
public: int __thiscall ComboBox::getIndexOfSelectedString(void)const 
public: int __thiscall ComboBox::getItemFace(int,int)
public: int __thiscall ComboBox::getNumberOfStrings(void)const 
public: int __thiscall ComboBox::getSelectedRow(void)const 
public: virtual bool __thiscall ComboBox::canAcceptPoint(class TPoint<float> const &)const 
public: virtual bool __thiscall ComboBox::delField(int,int)
public: virtual bool __thiscall ComboBox::delRecord(int,int)
public: virtual bool __thiscall ComboBox::getSelection(int *,int *,bool)const 
public: virtual bool __thiscall ComboBox::getValue(int,int,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *)const 
public: virtual bool __thiscall ComboBox::setSelection(int,int,bool)
public: virtual bool __thiscall ComboBox::setValue(int,int,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual int __thiscall ComboBox::allFields(void)const 
public: virtual int __thiscall ComboBox::allRecords(void)const 
public: virtual int __thiscall ComboBox::newField(int,int)
public: virtual int __thiscall ComboBox::newRecord(int,int)
public: virtual void __thiscall ComboBox::addString(char const *,int)
public: virtual void __thiscall ComboBox::clear(void)
public: void __thiscall ComboBox::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall ComboBox::arrange(struct ComboBoxParameters const &)
public: void __thiscall ComboBox::changeChildrenStyle(int,bool)
public: void __thiscall ComboBox::changeSelectedItem(int,int)
public: void __thiscall ComboBox::changeSelectedRow(int)
public: void __thiscall ComboBox::delString(int)
public: void __thiscall ComboBox::empty(void)
public: void __thiscall ComboBox::emptyList(void)
public: void __thiscall ComboBox::setChildrenColor(unsigned long)
public: void __thiscall ComboBox::setChildrenColor(unsigned long,unsigned long)
public: void __thiscall ComboBox::setChildrenFontColor(unsigned long)
public: void __thiscall ComboBox::setCursorColor(unsigned long)
public: void __thiscall ComboBox::setEditReadOnly(bool)
public: void __thiscall ComboBox::setEditString(char const *,bool)
public: void __thiscall ComboBox::setItemCaption(char const *,int)
public: void __thiscall ComboBox::setItemCaption(char const *,int,int)
public: void __thiscall ComboBox::setItemFace(int,int,int)
public: void __thiscall ComboBox::setSelectedItem(char const *)
public: void __thiscall ComboBox::setSelectedItem(int,int)
public: void __thiscall ComboBox::setSelectedRow(int)
public: void __thiscall ComboBox::showList(bool)
protected: virtual struct MSGTABLE const * __thiscall ComboBox::getMessageTable(void)const 
protected: virtual void __thiscall ComboBox::onActivate(int,class Control *)
protected: virtual void __thiscall ComboBox::onPaint(void)
protected: virtual void __thiscall ComboBox::onStyleChanging(bool,int)
protected: void __thiscall ComboBox::init(void)
protected: void __thiscall ComboBox::killFocusMessage(void)
protected: void __thiscall ComboBox::onChar(char,int)
protected: void __thiscall ComboBox::onDrop(void)
protected: void __thiscall ComboBox::onEditClick(void)
protected: void __thiscall ComboBox::onEditEndSession(void)
protected: void __thiscall ComboBox::onEditKillFocus(void)
protected: void __thiscall ComboBox::onKeyDown(int,int)
protected: void __thiscall ComboBox::onProbablyCloseList(void)
protected: void __thiscall ComboBox::onSelectionChanged(void)
protected: void __thiscall ComboBox::setEditParamsOnSelect(void)
private: virtual void __thiscall ComboBox::showCursor(void)
private: void __thiscall ComboBox::thisArrange(struct ComboBoxParameters const &)
public: void __thiscall ComboBox::`vbase destructor'(void)
const ComboBox::`vbtable'{for `ControlWithVisibleAreas'}
const ComboBox::`vbtable'{for `UI::Chart'}
const ComboBox::`vftable'{for `Control'}
const ComboBox::`vftable'{for `UI::Chart'}
const ComboBox::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const ComboBox::messageTable
private: static struct MSGTABLE_ENTRY const * const ComboBox::messageEntries
};

#endif
