#ifndef MAPDRAW_H_
#define MAPDRAW_H_

class MapDraw
{
public: __thiscall MapDraw::MapDraw(void)
public: __thiscall MapDraw::~MapDraw(void)
public: class MapDraw & __thiscall MapDraw::operator=(class MapDraw const &)
public: bool __thiscall MapDraw::getObjectCenter(class MapObj const *,class E3::Vector &)
public: class std::list<struct drawList,class std::allocator<struct drawList> > * __thiscall MapDraw::getObjList(void)
public: class std::multimap<int,class Graphics::MapRenderObject *,struct std::less<int>,class std::allocator<class Graphics::MapRenderObject *> > * __thiscall MapDraw::getRobjList(void)
public: double __thiscall MapDraw::distanceToObject(class E3::Vector const &,class MapObj const *,class E3::Vector *)
public: double const __thiscall MapDraw::getDrawScale(void)
public: void __thiscall MapDraw::beginDraw(struct IDirect3DDevice8 *,float)
public: void __thiscall MapDraw::draw(class DrawFeature const *)
public: void __thiscall MapDraw::drawObject(class MapS::Rect const &,class MapObj *,class ObjFilter *)
public: void __thiscall MapDraw::endDraw(struct IDirect3DDevice8 *)
public: void __thiscall MapDraw::getObjectOffset(class MapObj const *,class E3::Vector &)
public: void __thiscall MapDraw::setObjList(class std::list<struct drawList,class std::allocator<struct drawList> > *)
public: void __thiscall MapDraw::setRobjList(class std::multimap<int,class Graphics::MapRenderObject *,struct std::less<int>,class std::allocator<class Graphics::MapRenderObject *> > *)
public: void __thiscall MapDraw::updateObjectGeometry(class MapObj *)
public: void __thiscall MapDraw::updateObjectPos(class MapObj *)
protected: double __thiscall MapDraw::distanceToFeature(class E3::Vector const &,class DrawFeature const *,class E3::Vector *)
protected: double __thiscall MapDraw::distanceToFeatureVector(class E3::Vector const &,class FeatureVector const *,class E3::Vector *)
protected: void __thiscall MapDraw::draw(class FeatureVector const *)
};

#endif

