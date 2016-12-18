#ifndef MA_H_
#define MA_H_

namespace ma
{

class MaxCamera
{
public: __thiscall ma::MaxCamera::MaxCamera(class ma::MaxCamera const &)
public: __thiscall ma::MaxCamera::MaxCamera(void)
public: virtual __thiscall ma::MaxCamera::~MaxCamera(void)
public: class ma::MaxCamera & __thiscall ma::MaxCamera::operator=(class ma::MaxCamera const &)
public: static bool __cdecl ma::MaxCamera::isValid(class INode *)
public: virtual bool __thiscall ma::MaxCamera::init(class INode *)
public: virtual enum ma::MaxObject::Type __thiscall ma::MaxCamera::type(void)
public: virtual void __thiscall ma::MaxCamera::reset(void)
const ma::MaxCamera::`vftable'
};

class MaxHelper
{
public: __thiscall ma::MaxHelper::MaxHelper(class ma::MaxHelper const &)
public: __thiscall ma::MaxHelper::MaxHelper(void)
public: virtual __thiscall ma::MaxHelper::~MaxHelper(void)
public: class ma::MaxHelper & __thiscall ma::MaxHelper::operator=(class ma::MaxHelper const &)
public: enum ma::MaxHelper::HelperType __thiscall ma::MaxHelper::helperType(void)
public: static bool __cdecl ma::MaxHelper::isValid(class INode *)
public: virtual bool __thiscall ma::MaxHelper::init(class INode *)
public: virtual enum ma::MaxObject::Type __thiscall ma::MaxHelper::type(void)
public: virtual void __thiscall ma::MaxHelper::reset(void)
const ma::MaxHelper::`vftable'
};

class MaxLight
{
public: __thiscall ma::MaxLight::MaxLight(class ma::MaxLight const &)
public: __thiscall ma::MaxLight::MaxLight(void)
public: virtual __thiscall ma::MaxLight::~MaxLight(void)
public: class ma::MaxLight & __thiscall ma::MaxLight::operator=(class ma::MaxLight const &)
public: class ma::LightData & __thiscall ma::MaxLight::getData(void)
public: static bool __cdecl ma::MaxLight::isValid(class INode *)
public: virtual bool __thiscall ma::MaxLight::init(class INode *)
public: virtual enum ma::MaxObject::Type __thiscall ma::MaxLight::type(void)
public: virtual void __thiscall ma::MaxLight::reset(void)
const ma::MaxLight::`vftable'
};

class MaxMesh
{
public: __thiscall ma::MaxMesh::MaxMesh(class ma::MaxMesh const &)
public: __thiscall ma::MaxMesh::MaxMesh(void)
public: virtual __thiscall ma::MaxMesh::~MaxMesh(void)
public: class ma::MaxMesh & __thiscall ma::MaxMesh::operator=(class ma::MaxMesh const &)
public: class Mesh * & __thiscall ma::MaxMesh::getSmoothData(void)
public: class ma::MeshData & __thiscall ma::MaxMesh::getData(void)
public: static bool __cdecl ma::MaxMesh::isValid(class INode *)
public: virtual bool __thiscall ma::MaxMesh::init(class INode *)
public: virtual enum ma::MaxObject::Type __thiscall ma::MaxMesh::type(void)
public: virtual void __thiscall ma::MaxMesh::reset(void)
const ma::MaxMesh::`vftable'
};

class MaxObject
{
public: __thiscall ma::MaxObject::MaxObject(class ma::MaxObject const &)
public: __thiscall ma::MaxObject::MaxObject(void)
public: virtual __thiscall ma::MaxObject::~MaxObject(void)
public: class ma::MaxObject & __thiscall ma::MaxObject::operator=(class ma::MaxObject const &)
public: class INode * __thiscall ma::MaxObject::getINode(void)
public: class Matrix3 & __thiscall ma::MaxObject::getLocalTM(void)
public: class Matrix3 & __thiscall ma::MaxObject::getNodeTM(void)
public: class Matrix3 & __thiscall ma::MaxObject::getWorldTM(void)
public: class Matrix3 __thiscall ma::MaxObject::getLocalTM(int)
public: class ma::AnimData & __thiscall ma::MaxObject::getAnimation(void)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __thiscall ma::MaxObject::getName(void)
public: static class ma::MaxObject * __cdecl ma::MaxObject::create(class INode *,bool)
public: virtual bool __thiscall ma::MaxObject::init(class INode *)
public: virtual enum ma::MaxObject::Type __thiscall ma::MaxObject::type(void)
public: virtual void __thiscall ma::MaxObject::reset(void)
private: bool __thiscall ma::MaxObject::calculateLocalTM(void)
private: bool __thiscall ma::MaxObject::calculateWorldTM(void)
const ma::MaxObject::`vftable'
};

class MaxScene
{
public: __thiscall ma::MaxScene::MaxScene(class ma::MaxScene const &)
public: __thiscall ma::MaxScene::MaxScene(void)
public: virtual __thiscall ma::MaxScene::~MaxScene(void)
public: class ma::MaxScene & __thiscall ma::MaxScene::operator=(class ma::MaxScene const &)
public: bool __thiscall ma::MaxScene::init(class Interface *,bool)
public: class ma::MaxObject * __thiscall ma::MaxScene::createObject(class INode *)
public: virtual void __thiscall ma::MaxScene::reset(void)
private: bool __thiscall ma::MaxScene::preCreate(void)
private: virtual class misc::CoreObject * __thiscall ma::MaxScene::createRootObject(void)
private: void __thiscall ma::MaxScene::addNode(class INode *,class misc::Node *)
const ma::MaxScene::`vftable'
};

class MaxSpline
{
public: __thiscall ma::MaxSpline::MaxSpline(class ma::MaxSpline const &)
public: __thiscall ma::MaxSpline::MaxSpline(void)
public: virtual __thiscall ma::MaxSpline::~MaxSpline(void)
public: class ma::MaxSpline & __thiscall ma::MaxSpline::operator=(class ma::MaxSpline const &)
public: class ma::SplineShapeData & __thiscall ma::MaxSpline::getData(void)
public: static bool __cdecl ma::MaxSpline::isValid(class INode *)
public: virtual bool __thiscall ma::MaxSpline::init(class INode *)
public: virtual enum ma::MaxObject::Type __thiscall ma::MaxSpline::type(void)
public: virtual void __thiscall ma::MaxSpline::reset(void)
const ma::MaxSpline::`vftable'
};


}		/// namespace ma

#endif

