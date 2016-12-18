#ifndef COMPLEXTABLE_H_
#define COMPLEXTABLE_H_

class ComplexTable
{
public: __thiscall ComplexTable::ComplexTable(class ComplexTable const &)
public: __thiscall ComplexTable::ComplexTable(struct ControlParameters const &)
public: virtual __thiscall ComplexTable::~ComplexTable(void)
public: class ComplexTable & __thiscall ComplexTable::operator=(class ComplexTable const &)
public: bool __thiscall ComplexTable::GetLineParameters(class std::vector<struct ControlData,class std::allocator<struct ControlData> > &,int)
public: bool __thiscall ComplexTable::SetLineParameters(class std::vector<struct ControlData,class std::allocator<struct ControlData> > const &,int)
public: bool __thiscall ComplexTable::onScrollPageDown(void)
public: bool __thiscall ComplexTable::onScrollPageUp(void)
public: int __thiscall ComplexTable::AddGroup(class std::vector<struct ControlData,class std::allocator<struct ControlData> > const &,class std::vector<struct ControlData,class std::allocator<struct ControlData> > const *)
public: int __thiscall ComplexTable::AddLine(enum LineType,class std::vector<struct ControlData,class std::allocator<struct ControlData> > const &,bool)
public: int __thiscall ComplexTable::Delete(int)
public: int __thiscall ComplexTable::GetNumberPages(void)
protected: bool __thiscall ComplexTable::IsLineVisible(int)
protected: class GroupDesc * __thiscall ComplexTable::GetActiveGroup(int)
protected: int __thiscall ComplexTable::DeleteLine(class TableLine * *)
protected: virtual struct MSGTABLE const * __thiscall ComplexTable::getMessageTable(void)const 
protected: virtual void __thiscall ComplexTable::onPaint(void)
protected: void __thiscall ComplexTable::FillBackGround(void)
protected: void __thiscall ComplexTable::MoveLines(class TableLine * *,int)
protected: void __thiscall ComplexTable::SelectNext(void)
protected: void __thiscall ComplexTable::SelectPrev(void)
protected: void __thiscall ComplexTable::onKeyDown(int,int)
protected: void __thiscall ComplexTable::onLineActivated(class TableLine *)
public: void __thiscall ComplexTable::`vbase destructor'(void)
const ComplexTable::`vbtable'
const ComplexTable::`vftable'{for `Control'}
const ComplexTable::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const ComplexTable::messageTable
private: static struct MSGTABLE_ENTRY const * const ComplexTable::messageEntries
};

#endif
