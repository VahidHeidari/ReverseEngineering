#ifndef LOMSCENE_H_
#define LOMSCENE_H_

#include "Graphics.h"
#include "Vector3.h"

class LOMGeometry
{
	struct Normal
	{
	public: __thiscall Normal(float,float,float)
	public: __thiscall Normal(float * const)
	public: __thiscall Normal(void)
	public: struct Normal & __thiscall operator=(struct Normal const &)
	};

	struct Position
	{
	public: __thiscall Position(float,float,float)
	public: __thiscall Position(float * const)
	public: __thiscall Position(void)
	public: struct Position & __thiscall operator=(struct Position const &)
	};

	struct TexCoord
	{
	public: __thiscall TexCoord(float,float)
	public: __thiscall TexCoord(float * const)
	public: __thiscall TexCoord(void)
	public: struct TexCoord & __thiscall operator=(struct TexCoord const &)
	};

public: __thiscall LOMGeometry(class LOMGeometry const &)
public: __thiscall LOMGeometry(void)
public: virtual __thiscall ~LOMGeometry(void)
public: class LOMGeometry & __thiscall operator=(class LOMGeometry const &)
public: void __thiscall addIndex(unsigned short)
public: void __thiscall addNormal(struct Normal &)
public: void __thiscall addPos(struct Position &)
public: void __thiscall addS(struct Position &)
public: void __thiscall addSxT(struct Position &)
public: void __thiscall addT(struct Position &)
public: void __thiscall addTCoord(int,struct TexCoord &)
protected: bool __thiscall buildBounding(class Vector3 &,class Vector3 &,class Vector3 &,float &)
protected: bool __thiscall createData(void)
public: virtual enum LOMData::Data __thiscall dataType(void)
public: virtual void * __thiscall getData(void)
public: unsigned long & __thiscall getFlags(void)
public: class Geometry const * __thiscall getGeometry(void)
public: class Material const * __thiscall getMaterial(void)
public: virtual class Graphics::ModelNode * __thiscall getModelNode(void)
public: virtual unsigned int __thiscall getSize(void)
public: class std::vector<unsigned short,class std::allocator<unsigned short> > const & __thiscall indexArray(void)
public: class std::vector<struct Normal,class std::allocator<struct Normal> > const & __thiscall normalArray(void)
public: class std::vector<struct Position,class std::allocator<struct Position> > const & __thiscall positionArray(void)
public: enum PrimitiveType & __thiscall primType(void)
public: class std::vector<struct Position,class std::allocator<struct Position> > const & __thiscall sArray(void)
public: void __thiscall setGeometry(class Graphics::Geometry *)
public: void __thiscall setIndex(int,unsigned short)
public: void __thiscall setMaterial(class Graphics::Material *)
public: void __thiscall setNormal(int,struct Normal &)
public: virtual void __thiscall setOffset(unsigned int)
public: void __thiscall setPos(int,struct Position &)
public: void __thiscall setS(int,struct Position &)
public: void __thiscall setSxT(int,struct Position &)
public: void __thiscall setT(int,struct Position &)
public: void __thiscall setTCoord(int,int,struct TexCoord &)
public: class std::vector<struct Position,class std::allocator<struct Position> > const & __thiscall sxtArray(void)
public: class std::vector<struct Position,class std::allocator<struct Position> > const & __thiscall tArray(void)
public: class std::vector<class std::map<int,struct TexCoord,struct std::less<int>,class std::allocator<struct TexCoord> >,class std::allocator<class std::map<int,struct TexCoord,struct std::less<int>,class std::allocator<struct TexCoord> > > > const & __thiscall tcoordsArray(void)
public: virtual bool __thiscall update(class misc::CoreObject *)
const LOMGeometry::`vftable'
};

class LOMAnimTransform
{
public: __thiscall LOMAnimTransform(class LOMAnimTransform const &)
public: __thiscall LOMAnimTransform(void)
public: virtual __thiscall ~LOMAnimTransform(void)
public: class LOMAnimTransform & __thiscall operator=(class LOMAnimTransform const &)
public: virtual class Graphics::ModelNode * __thiscall getModelNode(void)
public: virtual enum LOMObject::Type __thiscall type(void)
const LOMAnimTransform::`vftable'{for `Graphics::AnimTransformNode'}
const LOMAnimTransform::`vftable'{for `LOMObject'}
};

class LOMObject
{
	enum Type {};

public: __thiscall LOMObject(class LOMObject const &)
public: __thiscall LOMObject(void)
public: virtual __thiscall ~LOMObject(void)
public: class LOMObject & __thiscall operator=(class LOMObject const &)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall getName(void)
public: void __thiscall setName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual enum Type __thiscall type(void)
public: virtual bool __thiscall update(class misc::CoreObject *)
const LOMObject::`vftable'
};

class LOMBillboardTransform
{
public: __thiscall LOMBillboardTransform(class LOMBillboardTransform const &)
public: __thiscall LOMBillboardTransform(void)
public: virtual __thiscall ~LOMBillboardTransform(void)
public: class LOMBillboardTransform & __thiscall operator=(class LOMBillboardTransform const &)
public: virtual class Graphics::ModelNode * __thiscall getModelNode(void)
public: virtual enum LOMObject::Type __thiscall type(void)
const LOMBillboardTransform::`vftable'{for `Graphics::BillboardNode'}
const LOMBillboardTransform::`vftable'{for `LOMObject'}
};

class LOMData
{
public: __thiscall LOMData(class LOMData const &)
public: __thiscall LOMData(void)
public: virtual __thiscall ~LOMData(void)
public: class LOMData & __thiscall operator=(class LOMData const &)
public: virtual enum Data __thiscall dataType(void)
public: virtual void __thiscall setOffset(unsigned int)
public: virtual enum LOMObject::Type __thiscall type(void)
const LOMData::`vftable'
};

class LOMHelper
{
public: __thiscall LOMHelper(class LOMHelper const &)
public: __thiscall LOMHelper(void)
public: virtual __thiscall ~LOMHelper(void)
public: class LOMHelper & __thiscall operator=(class LOMHelper const &)
public: virtual class Graphics::ModelNode * __thiscall getModelNode(void)
public: virtual enum LOMObject::Type __thiscall type(void)
const LOMHelper::`vftable'
const LOMHelper::`vftable'{for `Graphics::ModelConnector'}
const LOMHelper::`vftable'{for `Graphics::TransformNode'}
};

class LOMLod
{
public: __thiscall LOMLod(class LOMLod const &)
public: __thiscall LOMLod(void)
public: virtual __thiscall ~LOMLod(void)
public: class LOMLod & __thiscall operator=(class LOMLod const &)
public: virtual class Graphics::ModelNode * __thiscall getModelNode(void)
public: virtual enum LOMObject::Type __thiscall type(void)
public: virtual bool __thiscall update(class misc::CoreObject *)
const LOMLod::`vftable'{for `LOMObject'}
const LOMLod::`vftable'{for `Graphics::LodModelNode'}
};

class LOMModelNode
{
public: __thiscall LOMModelNode(class LOMModelNode const &)
public: __thiscall LOMModelNode(void)
public: virtual __thiscall ~LOMModelNode(void)
public: class LOMModelNode & __thiscall operator=(class LOMModelNode const &)
public: virtual class Graphics::ModelNode * __thiscall getModelNode(void)
public: virtual enum LOMObject::Type __thiscall type(void)
const LOMModelNode::`vftable'{for `LOMObject'}
const LOMModelNode::`vftable'{for `Graphics::ModelNode'}
};

class LOMMultiMaterialGeometry
{
public: __thiscall LOMMultiMaterialGeometry(class LOMMultiMaterialGeometry const &)
public: __thiscall LOMMultiMaterialGeometry(void)
public: virtual __thiscall ~LOMMultiMaterialGeometry(void)
public: class LOMMultiMaterialGeometry & __thiscall operator=(class LOMMultiMaterialGeometry const &)
public: void __thiscall addMaterial(class Graphics::Material *)
public: virtual enum LOMData::Data __thiscall dataType(void)
public: class Graphics::Material const * __thiscall getMaterial(int)
public: virtual class Graphics::ModelNode * __thiscall getModelNode(void)
public: class std::vector<class Graphics::Material *,class std::allocator<class Graphics::Material *> > const & __thiscall mats(void)
public: void __thiscall setMaterial(int,class Graphics::Material *)
public: virtual void __thiscall setOffset(unsigned int)
public: virtual bool __thiscall update(class misc::CoreObject *)
const LOMMultiMaterialGeometry::`vftable'
};

class LOMRoot
{
public: __thiscall LOMRoot(class LOMRoot const &)
public: __thiscall LOMRoot(void)
public: virtual __thiscall ~LOMRoot(void)
public: class LOMRoot & __thiscall operator=(class LOMRoot const &)
public: virtual class Graphics::ModelNode * __thiscall getModelNode(void)
public: virtual enum LOMObject::Type __thiscall type(void)
public: virtual bool __thiscall update(class misc::CoreObject *)
const LOMRoot::`vftable'
};

class LOMScene
{
public: __thiscall LOMScene(class LOMScene const &)
public: __thiscall LOMScene(void)
public: virtual __thiscall ~LOMScene(void)
public: class LOMScene & __thiscall operator=(class LOMScene const &)
protected: virtual class misc::CoreObject * __thiscall createRootObject(void)
public: virtual void __thiscall reset(void)
protected: void __thiscall resetLocal(void)
public: bool __thiscall save(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
const LOMScene::`vftable'
};

class LOMSegment
{
public: __thiscall LOMSegment(class LOMSegment const &)
public: __thiscall LOMSegment(void)
public: virtual __thiscall ~LOMSegment(void)
public: class LOMSegment & __thiscall operator=(class LOMSegment const &)
public: virtual class Graphics::ModelNode * __thiscall getModelNode(void)
public: virtual enum LOMObject::Type __thiscall type(void)
const LOMSegment::`vftable'{for `LOMObject'}
const LOMSegment::`vftable'{for `Graphics::SegmentNode'}
};

class LOMSelector
{
public: __thiscall LOMSelector(class LOMSelector const &)
public: __thiscall LOMSelector(void)
public: virtual __thiscall ~LOMSelector(void)
public: class LOMSelector & __thiscall operator=(class LOMSelector const &)
public: virtual class Graphics::ModelNode * __thiscall getModelNode(void)
public: virtual enum LOMObject::Type __thiscall type(void)
const LOMSelector::`vftable'{for `LOMObject'}
const LOMSelector::`vftable'{for `Graphics::SelectorNode'}
};

class LOMTransform
{
public: __thiscall LOMTransform(class LOMTransform const &)
public: __thiscall LOMTransform(void)
public: virtual __thiscall ~LOMTransform(void)
public: class LOMTransform & __thiscall operator=(class LOMTransform const &)
public: virtual class Graphics::ModelNode * __thiscall getModelNode(void)
public: virtual enum LOMObject::Type __thiscall type(void)
const LOMTransform::`vftable'{for `LOMObject'}
const LOMTransform::`vftable'{for `Graphics::TransformNode'}
};

class LOMUserBox
{
public: __thiscall LOMUserBox(class LOMUserBox const &)
public: __thiscall LOMUserBox(void)
public: virtual __thiscall ~LOMUserBox(void)
public: class LOMUserBox & __thiscall operator=(class LOMUserBox const &)
public: virtual class Graphics::ModelNode * __thiscall getModelNode(void)
const LOMUserBox::`vftable'{for `LOMObject'}
const LOMUserBox::`vftable'{for `Graphics::UserBoxNode'}
};

#endif

