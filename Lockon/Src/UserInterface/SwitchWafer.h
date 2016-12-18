#ifndef SWITCHWAFER_H_
#define SWITCHWAFER_H_

class SwitchWafer
{
public: __thiscall SwitchWafer::SwitchWafer(struct SwitchWaferParameters const &)
public: virtual __thiscall SwitchWafer::~SwitchWafer(void)
Public: void __thiscall SwitchWafer::unregisterSwitchStatic(class SwitchStatic *)
public: virtual bool __thiscall SwitchWafer::setPosition(int)
public: virtual bool __thiscall SwitchWafer::setPositionRange(int)
public: virtual int __thiscall SwitchWafer::getPosition(void)const 
public: virtual int __thiscall SwitchWafer::getPositionRange(void)const 
public: virtual void __thiscall SwitchWafer::allowPosition(bool,int,int)
public: void __thiscall SwitchWafer::arrange(struct SwitchWaferParameters const &)
public: void __thiscall SwitchWafer::registerSwitchStatic(class SwitchStatic *)
protected: virtual struct MSGTABLE const * __thiscall SwitchWafer::getMessageTable(void)const 
protected: virtual void __thiscall SwitchWafer::onLButtonDblclk(int,int,int)
protected: virtual void __thiscall SwitchWafer::onLButtonDown(int,int,int)
private: int __thiscall SwitchWafer::getDistance(int,int,class Control *)
private: void __thiscall SwitchWafer::thisArrange(struct SwitchWaferParameters const &)
public: void __thiscall SwitchWafer::`vbase destructor'(void)
const SwitchWafer::`vbtable'{for `Control'}
const SwitchWafer::`vbtable'{for `UI::Selector'}
const SwitchWafer::`vftable'{for `Control'}
const SwitchWafer::`vftable'{for `UI::Element'}
const SwitchWafer::`vftable'{for `UI::Selector'}

protected: static struct MSGTABLE const SwitchWafer::messageTable
private: static struct MSGTABLE_ENTRY const * const SwitchWafer::messageEntries
};

#endif
