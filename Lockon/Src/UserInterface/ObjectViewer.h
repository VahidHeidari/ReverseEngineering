#ifndef OBJECTVIEWER_H_
#define OBJECTVIEWER_H_

class ObjectViewer
{
public: __thiscall ObjectViewer::ObjectViewer(class ObjectViewer const &)
public: __thiscall ObjectViewer::ObjectViewer(struct ObjectViewerParameters const &)
public: virtual __thiscall ObjectViewer::~ObjectViewer(void)
public: class ObjectViewer & __thiscall ObjectViewer::operator=(class ObjectViewer const &)
Public: bool __thiscall ObjectViewer::zoomBackward(void)
Public: bool __thiscall ObjectViewer::zoomForward(void)
Public: bool __thiscall ObjectViewer::zoomIn(void)
Public: bool __thiscall ObjectViewer::zoomModeOff(bool)
Public: bool __thiscall ObjectViewer::zoomModeOn(bool)
Public: bool __thiscall ObjectViewer::zoomOut(void)
public: bool __thiscall ObjectViewer::removeShape(unsigned int)
public: bool __thiscall ObjectViewer::setDefaultZoom(void)
public: float __thiscall ObjectViewer::getMinDistanceCoef(void)const 
public: static class Graphics::Model * __cdecl ObjectViewer::createShape(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static void __cdecl ObjectViewer::deleteShape(class Graphics::Model *)
public: unsigned int __thiscall ObjectViewer::addShape(class Graphics::Model *,class Position3 &)
public: void __thiscall ObjectViewer::arrange(struct ObjectViewerParameters const &)
public: void __thiscall ObjectViewer::reset(void)
public: void __thiscall ObjectViewer::rotateX(float)
public: void __thiscall ObjectViewer::rotateY(float)
public: void __thiscall ObjectViewer::setMinDistanceCoef(float)
public: void __thiscall ObjectViewer::setMode(enum ObjectViewer::ViewMode)
public: void __thiscall ObjectViewer::setShapeArgument(unsigned int,unsigned int,float)
Protected: virtual void __thiscall ObjectViewer::updateSelfPaintCoordinates(void)
protected: virtual struct MSGTABLE const * __thiscall ObjectViewer::getMessageTable(void)const 
protected: virtual void __thiscall ObjectViewer::onCreate(void)
protected: virtual void __thiscall ObjectViewer::onLButtonDown(int,int,int)
protected: virtual void __thiscall ObjectViewer::onMouseMove(int,int,int)
protected: virtual void __thiscall ObjectViewer::onPaint(void)
protected: void __thiscall ObjectViewer::onClose(void)
protected: void __thiscall ObjectViewer::onLButtonUp(int,int,int)
protected: void __thiscall ObjectViewer::onMouseWheel(short,short,int,int)
protected: void __thiscall ObjectViewer::setRectangle(void)
private: struct D3DXMATRIX & __thiscall ObjectViewer::positionTod3dMatrix(class Position3 &,struct D3DXMATRIX &)
private: bool __thiscall ObjectViewer::checkForRestrictions(class Position3 &)
private: class Box __thiscall ObjectViewer::getBox(class Graphics::Model *)
private: class Position3 & __thiscall ObjectViewer::d3dMatrixToPosition(struct D3DXMATRIX &,class Position3 &)
private: void __thiscall ObjectViewer::moveCamera(float,float,int)
private: void __thiscall ObjectViewer::thisArrange(struct ObjectViewerParameters const &)
Private: void __thiscall ObjectViewer::zoom(float)
public: void __thiscall ObjectViewer::`vbase destructor'(void)
const ObjectViewer::`vbtable'
const ObjectViewer::`vftable'{for `Control'}
const ObjectViewer::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const ObjectViewer::messageTable
private: static struct MSGTABLE_ENTRY const * const ObjectViewer::messageEntries
};

#endif
