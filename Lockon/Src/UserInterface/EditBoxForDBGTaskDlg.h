#ifndef EDITBOXFORDBGTASKDLG_H_
#define EDITBOXFORDBGTASKDLG_H_

class EditBoxForDBGTaskDlg
{
public: __thiscall EditBoxForDBGTaskDlg::EditBoxForDBGTaskDlg(struct EditBoxParameters const &,bool)
public: virtual __thiscall EditBoxForDBGTaskDlg::~EditBoxForDBGTaskDlg(void)
protected: virtual struct MSGTABLE const * __thiscall EditBoxForDBGTaskDlg::getMessageTable(void)const 
protected: virtual void __thiscall EditBoxForDBGTaskDlg::onLButtonDown(int,int,int)
protected: virtual void __thiscall EditBoxForDBGTaskDlg::onPaint(void)
protected: void __thiscall EditBoxForDBGTaskDlg::onKeyDown(int,int)
protected: void __thiscall EditBoxForDBGTaskDlg::onKillFocus(class Control *)
protected: void __thiscall EditBoxForDBGTaskDlg::onSetFocus(class Control *)
public: void __thiscall EditBoxForDBGTaskDlg::`vbase destructor'(void)
const EditBoxForDBGTaskDlg::`vbtable'
const EditBoxForDBGTaskDlg::`vbtable'{for `ControlWithVisibleAreas'}
const EditBoxForDBGTaskDlg::`vbtable'{for `UI::Button'}
const EditBoxForDBGTaskDlg::`vbtable'{for `UI::Switch'}
const EditBoxForDBGTaskDlg::`vftable'{for `Control'}
const EditBoxForDBGTaskDlg::`vftable'{for `UI::Editor'}
const EditBoxForDBGTaskDlg::`vftable'{for `UI::Element'}
const EditBoxForDBGTaskDlg::`vftable'{for `UI::Switch'}

protected: static struct MSGTABLE const EditBoxForDBGTaskDlg::messageTable
private: static struct MSGTABLE_ENTRY const * const EditBoxForDBGTaskDlg::messageEntries
};

#endif
