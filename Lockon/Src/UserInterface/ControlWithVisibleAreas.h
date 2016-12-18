#ifndef CONTROLWITHVISIBLEAREAS_H_
#define CONTROLWITHVISIBLEAREAS_H_

class ControlWithVisibleAreas
{
public: __thiscall ControlWithVisibleAreas::ControlWithVisibleAreas(class ControlWithVisibleAreas const &)
public: __thiscall ControlWithVisibleAreas::ControlWithVisibleAreas(int,float,float,float,float)
public: __thiscall ControlWithVisibleAreas::ControlWithVisibleAreas(struct ControlWithVisibleAreasParameters const &)
public: virtual __thiscall ControlWithVisibleAreas::~ControlWithVisibleAreas(void)
public: class ControlWithVisibleAreas & __thiscall ControlWithVisibleAreas::operator=(class ControlWithVisibleAreas const &)
public: bool __thiscall ControlWithVisibleAreas::autoVisibleArea(void)
public: class TPoint<float> __thiscall ControlWithVisibleAreas::getVisibleAreaBegin(void)
public: class TPoint<float> __thiscall ControlWithVisibleAreas::getVisibleAreaPBegin(void)
public: float __thiscall ControlWithVisibleAreas::getMinXSize(void)
public: float __thiscall ControlWithVisibleAreas::getMinYSize(void)
public: int __thiscall ControlWithVisibleAreas::getVisibleAreaHeight(void)
public: int __thiscall ControlWithVisibleAreas::getVisibleAreaPHeight(void)
public: int __thiscall ControlWithVisibleAreas::getVisibleAreaPWidth(void)
public: int __thiscall ControlWithVisibleAreas::getVisibleAreaWidth(void)
public: int __thiscall ControlWithVisibleAreas::getXLeftShift(void)
public: int __thiscall ControlWithVisibleAreas::getXRightShift(void)
public: int __thiscall ControlWithVisibleAreas::getYBottomShift(void)
public: int __thiscall ControlWithVisibleAreas::getYTopShift(void)
public: virtual void __thiscall ControlWithVisibleAreas::fitPVisibleArea(void)
public: virtual void __thiscall ControlWithVisibleAreas::fitVisibleArea(void)
public: virtual void __thiscall ControlWithVisibleAreas::setBorderThickness(bool)
public: virtual void __thiscall ControlWithVisibleAreas::setCoordinates(float,float,float,float)
public: virtual void __thiscall ControlWithVisibleAreas::shift(float,float)
public: void __thiscall ControlWithVisibleAreas::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall ControlWithVisibleAreas::arrange(struct ControlWithVisibleAreasParameters const &)
public: void __thiscall ControlWithVisibleAreas::fitPShifts(void)
public: void __thiscall ControlWithVisibleAreas::fitPXVisibleArea(bool)
public: void __thiscall ControlWithVisibleAreas::fitPYVisibleArea(bool)
public: void __thiscall ControlWithVisibleAreas::fitXVisibleArea(bool)
public: void __thiscall ControlWithVisibleAreas::fitYVisibleArea(bool)
public: void __thiscall ControlWithVisibleAreas::setAutoVisibleArea(bool)
public: void __thiscall ControlWithVisibleAreas::setBorderSize(float)
public: void __thiscall ControlWithVisibleAreas::setShifts(float,float,float,float)
public: void __thiscall ControlWithVisibleAreas::setVisibleAreaBegin(class TPoint<float>)
public: void __thiscall ControlWithVisibleAreas::setVisibleAreaBegin(float,float)
public: void __thiscall ControlWithVisibleAreas::setVisibleAreaHeight(int)
public: void __thiscall ControlWithVisibleAreas::setVisibleAreaWidth(int)
public: void __thiscall ControlWithVisibleAreas::setXLeftShift(float)
public: void __thiscall ControlWithVisibleAreas::setXRightShift(float)
public: void __thiscall ControlWithVisibleAreas::setXShift(float)
public: void __thiscall ControlWithVisibleAreas::setYBottomShift(float)
public: void __thiscall ControlWithVisibleAreas::setYShift(float)
public: void __thiscall ControlWithVisibleAreas::setYTopShift(float)
Protected: virtual void __thiscall ControlWithVisibleAreas::updateSelfPaintCoordinates(void)
protected: virtual struct MSGTABLE const * __thiscall ControlWithVisibleAreas::getMessageTable(void)const 
protected: virtual void __thiscall ControlWithVisibleAreas::inflateSelf(void)
protected: virtual void __thiscall ControlWithVisibleAreas::onMove(int,int)
protected: void __thiscall ControlWithVisibleAreas::changeSizeMessage(void)
protected: void __thiscall ControlWithVisibleAreas::init(void)
private: void __thiscall ControlWithVisibleAreas::thisArrange(struct ControlWithVisibleAreasParameters const &)
public: void __thiscall ControlWithVisibleAreas::`vbase destructor'(void)
const ControlWithVisibleAreas::`vbtable'
const ControlWithVisibleAreas::`vftable'{for `Control'}
const ControlWithVisibleAreas::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const ControlWithVisibleAreas::messageTable
private: static struct MSGTABLE_ENTRY const * const ControlWithVisibleAreas::messageEntries
};

#endif
