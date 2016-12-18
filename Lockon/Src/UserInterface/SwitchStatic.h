#ifndef SWITCHSTATIC_H_
#define SWITCHSTATIC_H_

class SwitchStatic
{
public: __thiscall SwitchStatic::SwitchStatic(struct SwitchStaticParameters const &)
public: virtual __thiscall SwitchStatic::~SwitchStatic(void)
public: int __thiscall SwitchStatic::getSwitchState(void)
public: void __thiscall SwitchStatic::arrange(struct SwitchStaticParameters const &)
protected: virtual struct MSGTABLE const * __thiscall SwitchStatic::getMessageTable(void)const 
protected: virtual void __thiscall SwitchStatic::onCreate(void)
protected: virtual void __thiscall SwitchStatic::onLButtonDown(int,int,int)
protected: void __thiscall SwitchStatic::onClose(void)
private: void __thiscall SwitchStatic::init(void)
private: void __thiscall SwitchStatic::thisArrange(struct SwitchStaticParameters const &)
public: void __thiscall SwitchStatic::`vbase destructor'(void)
const SwitchStatic::`vbtable'{for `ControlWithVisibleAreas'}
const SwitchStatic::`vbtable'{for `UI::Button'}
const SwitchStatic::`vbtable'{for `UI::Switch'}
const SwitchStatic::`vftable'{for `Control'}
const SwitchStatic::`vftable'{for `UI::Element'}
const SwitchStatic::`vftable'{for `UI::Switch'}

protected: static struct MSGTABLE const SwitchStatic::messageTable
private: static struct MSGTABLE_ENTRY const * const SwitchStatic::messageEntries
};

#endif
