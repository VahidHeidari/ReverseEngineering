#ifndef DLGMAP_H_
#define DLGMAP_H_

class DlgMap
{
public: __thiscall DlgMap::DlgMap(char const *)
public: __thiscall DlgMap::DlgMap(class DlgMap const &)
public: virtual __thiscall DlgMap::~DlgMap(void)
public: class DlgMap & __thiscall DlgMap::operator=(class DlgMap const &)
public: bool const __thiscall DlgMap::isDragMode(void)const 
public: class IMixDrawMap * __thiscall DlgMap::getIMixDrawMap(void)
public: int __thiscall DlgMap::getCursor(void)
public: void __thiscall DlgMap::restoreMapPosFromCurrMiss(void)
public: void __thiscall DlgMap::setCursor(int)
public: void __thiscall DlgMap::setDragMode(bool)
public: void __thiscall DlgMap::setMapProcessor(class MapProcessor *)
public: void __thiscall DlgMap::setNextWindow(void)
public: void __thiscall DlgMap::setPrevWindow(void)
public: void __thiscall DlgMap::windowSizeChangedMessage(void)
public: void __thiscall DlgMap::zoom100(void)
public: void __thiscall DlgMap::zoomIn(void)
public: void __thiscall DlgMap::zoomOut(void)
protected: virtual struct MSGTABLE const * __thiscall DlgMap::getMessageTable(void)const 
protected: virtual void __thiscall DlgMap::onActivate(int,class Control *)
protected: virtual void __thiscall DlgMap::onCreate(void)
protected: virtual void __thiscall DlgMap::onLButtonDblclk(int,int,int)
protected: virtual void __thiscall DlgMap::onLButtonDown(int,int,int)
protected: virtual void __thiscall DlgMap::onMouseMove(int,int,int)
protected: virtual void __thiscall DlgMap::onPaint(void)
protected: void __thiscall DlgMap::onLButtonUp(int,int,int)
protected: void __thiscall DlgMap::onMouseWheel(short,short,int,int)
protected: void __thiscall DlgMap::onRButtonDown(int,int,int)
protected: void __thiscall DlgMap::onWindowSet(struct DlgMap::Rect &,bool)
protected: void __thiscall DlgMap::saveMapPosition(struct DlgMap::Rect &)
protected: void __thiscall DlgMap::showCursor(int)
public: void __thiscall DlgMap::`vbase destructor'(void)
const DlgMap::`vbtable'
const DlgMap::`vftable'
const DlgMap::`vftable'{for `Control'}
const DlgMap::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const DlgMap::messageTable
private: static struct MSGTABLE_ENTRY const * const DlgMap::messageEntries
};

#endif

