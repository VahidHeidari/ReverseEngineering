#ifndef DESCRIPTORTABLE_H_
#define DESCRIPTORTABLE_H_

class DescriptorTable
{
public: __thiscall DescriptorTable::DescriptorTable(class DescriptorTable const &)
public: __thiscall DescriptorTable::DescriptorTable(void)
public: __thiscall DescriptorTable::~DescriptorTable(void)
public: class DescriptorTable & __thiscall DescriptorTable::operator=(class DescriptorTable const &)
public: bool __thiscall DescriptorTable::getAutoDelete(void)const 
public: bool __thiscall DescriptorTable::getFastDelete(void)const 
public: class Control * __thiscall DescriptorTable::getControl(int)
public: class Control * __thiscall DescriptorTable::getFirstControl(void)
public: class Control * __thiscall DescriptorTable::getNextControl(void)
public: int __thiscall DescriptorTable::getNotUsedTag(void)const 
public: int __thiscall DescriptorTable::getSize(void)const 
public: void __thiscall DescriptorTable::ChangeControlTag(int,int)
public: void __thiscall DescriptorTable::addControl(class Control *)
public: void __thiscall DescriptorTable::clear(void)
public: void __thiscall DescriptorTable::delControl(class Control *)
public: void __thiscall DescriptorTable::delControl(int)
public: void __thiscall DescriptorTable::setAutoDelete(bool)
public: void __thiscall DescriptorTable::setFastDelete(bool)
private: void __thiscall DescriptorTable::delControlOnly(class Control *)
};

#endif
