#ifndef COMBOBOXFORDBGTASKDLG_H_
#define COMBOBOXFORDBGTASKDLG_H_

class ComboBoxForDBGTaskDlg
{
public: __thiscall ComboBoxForDBGTaskDlg::ComboBoxForDBGTaskDlg(struct ComboBoxParameters const &)
public: virtual __thiscall ComboBoxForDBGTaskDlg::~ComboBoxForDBGTaskDlg(void)
public: virtual void __thiscall ComboBoxForDBGTaskDlg::addString(char const *,int)
protected: virtual struct MSGTABLE const * __thiscall ComboBoxForDBGTaskDlg::getMessageTable(void)const 
protected: virtual void __thiscall ComboBoxForDBGTaskDlg::onPaint(void)
protected: void __thiscall ComboBoxForDBGTaskDlg::FormAndSendMessage(short,short,void *)
protected: void __thiscall ComboBoxForDBGTaskDlg::onEditClick(void)
protected: void __thiscall ComboBoxForDBGTaskDlg::onEditKillFocus(void)
protected: void __thiscall ComboBoxForDBGTaskDlg::onEditSetFocus(void)
protected: void __thiscall ComboBoxForDBGTaskDlg::onKeyDown(int,int)
protected: void __thiscall ComboBoxForDBGTaskDlg::onKillFocus(class Control *)
protected: void __thiscall ComboBoxForDBGTaskDlg::onSetFocus(class Control *)
public: void __thiscall ComboBoxForDBGTaskDlg::`vbase destructor'(void)
const ComboBoxForDBGTaskDlg::`vbtable'{for `ControlWithVisibleAreas'}
const ComboBoxForDBGTaskDlg::`vbtable'{for `UI::Chart'}
const ComboBoxForDBGTaskDlg::`vftable'{for `Control'}
const ComboBoxForDBGTaskDlg::`vftable'{for `UI::Chart'}
const ComboBoxForDBGTaskDlg::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const ComboBoxForDBGTaskDlg::messageTable
private: static struct MSGTABLE_ENTRY const * const ComboBoxForDBGTaskDlg::messageEntries
};

#endif
