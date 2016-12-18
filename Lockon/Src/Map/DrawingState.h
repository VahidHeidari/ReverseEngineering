#ifndef DRAWINGSTATE_H_
#define DRAWINGSTATE_H_

class DrawingState
{
public: __thiscall DrawingState::DrawingState(class DrawingState const &)
public: __thiscall DrawingState::DrawingState(struct IDirect3DDevice8 *,unsigned long,float)
public: __thiscall DrawingState::~DrawingState(void)
public: bool __thiscall DrawingState::canSetDrawShapeObject(void)
public: bool const __thiscall DrawingState::getScreenScale(void)const 
public: bool const __thiscall DrawingState::isOk(void)const 
public: bool const __thiscall DrawingState::isScaleUsed(void)const 
public: class ColorFeature const * __thiscall DrawingState::getColor(void)const 
public: class MapObj * __thiscall DrawingState::getMapObj(void)
public: class MapS::Rect __thiscall DrawingState::endBound(void)
public: class MapS::Rect const & __thiscall DrawingState::getBound(void)
public: class MapTextureInfo const * __thiscall DrawingState::getMapTextureInfo(void)const 
public: class cPosition * __thiscall DrawingState::buildTransform(void)const 
public: class cPosition const & __thiscall DrawingState::getPostition(void)const 
public: class gShapeObject * __thiscall DrawingState::getDrawShapeObject(void)
public: class gShapeObject * __thiscall DrawingState::setDrawShapeObject(class gShapeObject *)
public: class std::list<class Graphics::MapRenderObject *,class std::allocator<class Graphics::MapRenderObject *> > * __thiscall DrawingState::getRobjList(void)
public: class std::list<class gShapeObject *,class std::allocator<class gShapeObject *> > * __thiscall DrawingState::getShapeList(void)
public: enum DrawingState::Status const __thiscall DrawingState::getStatus(void)const 
public: float const __thiscall DrawingState::getLineWidth(void)const 
public: float const __thiscall DrawingState::getScale(void)const 
public: struct IDirect3DDevice8 * __thiscall DrawingState::getDevice(void)
public: void __thiscall DrawingState::InitState(void)
public: void __thiscall DrawingState::RestoreInitalState(void)
public: void __thiscall DrawingState::addRect(class MapS::Rect const &)
public: void __thiscall DrawingState::addTransform(class cPosition &)
public: void __thiscall DrawingState::setColor(class ColorFeature const &)
public: void __thiscall DrawingState::setLineWidth(float)
public: void __thiscall DrawingState::setMapObj(class MapObj *)
public: void __thiscall DrawingState::setMapTextureInfo(class MapTextureInfo *)
public: void __thiscall DrawingState::setRobjList(class std::list<class Graphics::MapRenderObject *,class std::allocator<class Graphics::MapRenderObject *> > *)
public: void __thiscall DrawingState::setScale(float)
public: void __thiscall DrawingState::setScaleUsed(void)
public: void __thiscall DrawingState::setScreenScale(bool)
public: void __thiscall DrawingState::setShapeList(class std::list<class gShapeObject *,class std::allocator<class gShapeObject *> > *)
public: void __thiscall DrawingState::setStatus(enum DrawingState::Status)
public: void __thiscall DrawingState::startBound(void)
protected: void __thiscall DrawingState::setInitialSettings(void)
};

#endif

