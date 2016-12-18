#ifndef HEADER_H_
#define HEADER_H_

class Header
{
public: __thiscall Header::Header(int,float,float,float,float)
public: __thiscall Header::Header(struct HeaderParameters const &)
public: virtual __thiscall Header::~Header(void)
public: virtual double __thiscall Header::getStep(void)const 
public: virtual double __thiscall Header::getValue(void)const 
public: virtual struct UI::Tuner::Range const __thiscall Header::getRange(void)const 
public: virtual void __thiscall Header::setCoordinates(float,float,float,float)
public: virtual void __thiscall Header::setRange(struct UI::Tuner::Range const &)
public: virtual void __thiscall Header::setStep(double)
public: virtual void __thiscall Header::setValue(double)
public: void __thiscall Header::arrange(struct HeaderParameters const &)
Protected: virtual void __thiscall Header::updateBorders(void)
Protected: void __thiscall Header::updateSelfBorders(void)
protected: virtual struct MSGTABLE const * __thiscall Header::getMessageTable(void)const 
protected: virtual void __thiscall Header::inflateSelf(void)
protected: virtual void __thiscall Header::onActivate(int,class Control *)
protected: virtual void __thiscall Header::onCreate(void)
protected: virtual void __thiscall Header::onLButtonDown(int,int,int)
protected: virtual void __thiscall Header::onMouseMove(int,int,int)
protected: virtual void __thiscall Header::onMove(int,int)
protected: virtual void __thiscall Header::onPaint(void)
protected: void __thiscall Header::CalcCurAngle(void)
protected: void __thiscall Header::ChangeDirection(double &)
protected: void __thiscall Header::ChangeValue(double)
protected: void __thiscall Header::Init(struct HeaderParameters const *)
protected: void __thiscall Header::UpdateAttachCtrls(double)
protected: void __thiscall Header::onClose(void)
protected: void __thiscall Header::onEditChange(void)
protected: void __thiscall Header::onLButtonUp(int,int,int)
protected: void __thiscall Header::onSpinEditChange(void)
protected: void __thiscall Header::setLocation(void)
public: void __thiscall Header::`vbase destructor'(void)
const Header::`vbtable'{for `Control'}
const Header::`vbtable'{for `UI::Tuner'}
const Header::`vftable'{for `Control'}
const Header::`vftable'{for `UI::Element'}
const Header::`vftable'{for `UI::Tuner'}

protected: static struct MSGTABLE const Header::messageTable
private: static struct MSGTABLE_ENTRY const * const Header::messageEntries
};

#endif
