#ifndef DISTANCETOOL_H_
#define DISTANCETOOL_H_

class DistanceTool
{
public: __thiscall DistanceTool::DistanceTool(class DistanceTool const &)
public: __thiscall DistanceTool::DistanceTool(class DlgMap *)
public: virtual __thiscall DistanceTool::~DistanceTool(void)
public: class DistanceTool & __thiscall DistanceTool::operator=(class DistanceTool const &)
public: int __thiscall DistanceTool::getMode(void)const 
public: virtual bool __thiscall DistanceTool::canAcceptPoint(class TPoint<float> const &)const 
public: virtual void __thiscall DistanceTool::onMapEvent(struct MapListener::MapEvent *)
public: virtual void __thiscall DistanceTool::onPaint(void)
public: void __thiscall DistanceTool::deleteFirstPoint(void)
public: void __thiscall DistanceTool::deleteMeasureLine(void)
public: void __thiscall DistanceTool::deleteSecondPoint(void)
public: void __thiscall DistanceTool::init(void)
public: void __thiscall DistanceTool::onLButtonDblclk(int,float,float)
public: void __thiscall DistanceTool::onMouseMove(int,float,float)
public: void __thiscall DistanceTool::onRButtonDown(int,float,float)
public: void __thiscall DistanceTool::setFirstPoint(float,float)
public: void __thiscall DistanceTool::setMeasureLine(class TPoint<float> *,class TPoint<float> *)
public: void __thiscall DistanceTool::setMode(int)
public: void __thiscall DistanceTool::setSecondPoint(float,float)
protected: virtual struct MSGTABLE const * __thiscall DistanceTool::getMessageTable(void)const 
public: void __thiscall DistanceTool::`vbase destructor'(void)
const DistanceTool::`vbtable'
const DistanceTool::`vftable'{for `Control'}
const DistanceTool::`vftable'{for `DistanceToolEvoker'}
const DistanceTool::`vftable'{for `MapListener'}
const DistanceTool::`vftable'{for `UI::Element'}

private: static struct MSGTABLE_ENTRY const * const DistanceTool::messageEntries
protected: static struct MSGTABLE const DistanceTool::messageTable
};

#endif

