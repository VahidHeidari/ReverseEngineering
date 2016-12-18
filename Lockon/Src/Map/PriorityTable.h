#ifndef PRIORITYTABLE_H_
#define PRIORITYTABLE_H_

class PriorityTable
{
public: __thiscall PriorityTable::PriorityTable(class PriorityTable const &)
public: class PriorityTable & __thiscall PriorityTable::operator=(class PriorityTable const &)
public: int const __thiscall PriorityTable::getPriority(class MapObj const *)const 
public: int const __thiscall PriorityTable::getPriority(unsigned int)const 
public: static class PriorityTable * __cdecl PriorityTable::instance(void)
public: static void __cdecl PriorityTable::deleteInstance(void)
public: void __thiscall PriorityTable::setPriority(unsigned int,int)
protected: __thiscall PriorityTable::PriorityTable(void)
protected: __thiscall PriorityTable::~PriorityTable(void)

protected: static class PriorityTable * PriorityTable::thePriorityTable
};

#endif

