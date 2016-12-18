#ifndef RADIOGROUP_H_
#define RADIOGROUP_H_

class RadioGroup
{
public: __thiscall RadioGroup::RadioGroup(struct RadioGroupParameters const &)
public: virtual __thiscall RadioGroup::~RadioGroup(void)
public: virtual bool __thiscall RadioGroup::setPosition(int)
public: virtual bool __thiscall RadioGroup::setPositionRange(int)
public: virtual int __thiscall RadioGroup::getPosition(void)const 
public: virtual int __thiscall RadioGroup::getPositionRange(void)const 
public: virtual void __thiscall RadioGroup::allowPosition(bool,int,int)
public: virtual void __thiscall RadioGroup::setFlag(enum UI::Element::Flag,bool)
protected: virtual struct MSGTABLE const * __thiscall RadioGroup::getMessageTable(void)const 
protected: virtual void __thiscall RadioGroup::onCreate(void)
protected: virtual void __thiscall RadioGroup::onStyleChanging(bool,int)
protected: void __thiscall RadioGroup::init(void)
protected: void __thiscall RadioGroup::pressed(class UI::Switch *)
private: bool __thiscall RadioGroup::setPos(int,bool)
private: class Static * __thiscall RadioGroup::member(int)
private: void __thiscall RadioGroup::thisArrange(struct RadioGroupParameters const &)
public: void __thiscall RadioGroup::`vbase destructor'(void)
const RadioGroup::`vbtable'{for `Control'}
const RadioGroup::`vbtable'{for `UI::Selector'}
const RadioGroup::`vftable'{for `Control'}
const RadioGroup::`vftable'{for `UI::Element'}
const RadioGroup::`vftable'{for `UI::Selector'}

protected: static struct MSGTABLE const RadioGroup::messageTable
private: static struct MSGTABLE_ENTRY const * const RadioGroup::messageEntries
};

#endif
