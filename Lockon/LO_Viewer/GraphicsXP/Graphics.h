#ifndef GRAPHICS_H_
#define GRAPHICS_H_

#include "Common.h"
#include "ConfigParser.h"
#include "gShapeObject.h"
#include "Resource.h"

class gDrawCommand {};
struct kinematicsV {};

namespace Graphics
{

enum AnimInterpolation {};
enum BillboardAxis {};
enum BillboardType {};
enum ModelParsePurpose {};

struct DynamicParam {};
struct SystemDescriptor {};

class RenderParser * immediateParser
class Renderer * renderer

float __cdecl DParamScale(class ModelInstance *,int,float)
int __cdecl FindAllParts(class ModelInstance &,class Vector3 const &,float,class std::vector<float,class std::allocator<float> > &,class std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > &)
float __cdecl FindClosestPart(class ModelInstance &,class Vector3 const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)
bool __cdecl IntersectModel(class ModelInstance &,class ModelInstance &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &,class Vector3 *,class Vector3 *)
bool __cdecl IntersectSegment(class ModelInstance &,class Vector3 const &,class Vector3 const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &,float *,class Vector3 *)

template <>
class Animation<int>
{
	struct Key {};

public: __thiscall Animation<int>(class Animation<int> const &)
public: __thiscall Animation<int>(void)
public: virtual __thiscall ~Animation<int>(void)
public: class Animation<int> & __thiscall operator=(class Animation<int> const &)
public: void __thiscall AddKey(float,enum AnimInterpolation,int)
public: virtual void __thiscall ClearKeys(void)
public: void __thiscall DeleteKey(struct Key *)
public: virtual float __thiscall GetFinish(void)
public: int __thiscall GetMaximum(void)
public: int __thiscall GetMinimum(void)
public: struct Key * __thiscall GetNextKey(float)
public: virtual int __thiscall GetParamIndex(void)
public: struct Key * __thiscall GetPrevKey(float)
public: virtual float __thiscall GetStart(void)
public: int __thiscall GetValue(class HeapVector<struct DynamicParam> const &)
public: int __thiscall GetValue(float)
public: virtual int __thiscall KeyCount(void)
public: virtual void __thiscall SetParamIndex(int)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
protected: int __thiscall Interpolate(struct Key const &,struct Key const &,float)
const Graphics::Animation<int>::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Serializable>'}
const Graphics::Animation<int>::`vftable'{for `Graphics::AnimationBase'}
};

template <>
class Animation<float>
{
	struct Key {};

public: __thiscall Animation<float>(class Animation<float> const &)
public: __thiscall Animation<float>(void)
public: virtual __thiscall ~Animation<float>(void)
public: class Animation<float> & __thiscall operator=(class Animation<float> const &)
public: void __thiscall AddKey(float,enum AnimInterpolation,float)
public: virtual void __thiscall ClearKeys(void)
public: void __thiscall DeleteKey(struct Key *)
public: virtual float __thiscall GetFinish(void)
public: float __thiscall GetMaximum(void)
public: float __thiscall GetMinimum(void)
public: struct Key * __thiscall GetNextKey(float)
public: virtual int __thiscall GetParamIndex(void)
public: struct Key * __thiscall GetPrevKey(float)
public: virtual float __thiscall GetStart(void)
public: float __thiscall GetValue(class HeapVector<struct DynamicParam> const &)
public: float __thiscall GetValue(float)
public: virtual int __thiscall KeyCount(void)
public: virtual void __thiscall SetParamIndex(int)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
protected: float __thiscall Interpolate(struct Key const &,struct Key const &,float)
const Graphics::Animation<float>::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Serializable>'}
const Graphics::Animation<float>::`vftable'{for `Graphics::AnimationBase'}
};

template <>
class Animation<Quaternion>
{
	struct Key {};

public: __thiscall Animation<class Quaternion>(class Animation<class Quaternion> const &)
public: __thiscall Animation<class Quaternion>(void)
public: virtual __thiscall ~Animation<class Quaternion>(void)
public: class Animation<class Quaternion> & __thiscall operator=(class Animation<class Quaternion> const &)
public: void __thiscall AddKey(float,enum AnimInterpolation,class Quaternion)
public: virtual void __thiscall ClearKeys(void)
public: void __thiscall DeleteKey(struct Key *)
public: virtual float __thiscall GetFinish(void)
public: class Quaternion __thiscall GetMaximum(void)
public: class Quaternion __thiscall GetMinimum(void)
public: struct Key * __thiscall GetNextKey(float)
public: virtual int __thiscall GetParamIndex(void)
public: struct Key * __thiscall GetPrevKey(float)
public: virtual float __thiscall GetStart(void)
public: class Quaternion __thiscall GetValue(class HeapVector<struct DynamicParam> const &)
public: class Quaternion __thiscall GetValue(float)
public: virtual int __thiscall KeyCount(void)
public: virtual void __thiscall SetParamIndex(int)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
protected: class Quaternion __thiscall Interpolate(struct Key const &,struct Key const &,float)
const Graphics::Animation<class Quaternion>::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Serializable>'}
const Graphics::Animation<class Quaternion>::`vftable'{for `Graphics::AnimationBase'}
};

template <>
class Animation<Vector3>
{
	struct Key {};

public: __thiscall Animation<class Vector3>(class Animation<class Vector3> const &)
public: __thiscall Animation<class Vector3>(void)
public: virtual __thiscall ~Animation<class Vector3>(void)
public: class Animation<class Vector3> & __thiscall operator=(class Animation<class Vector3> const &)
public: void __thiscall AddKey(float,enum AnimInterpolation,class Vector3)
public: virtual void __thiscall ClearKeys(void)
public: void __thiscall DeleteKey(struct Animation<class Vector3>::Key *)
public: virtual float __thiscall GetFinish(void)
public: class Vector3 __thiscall GetMaximum(void)
public: class Vector3 __thiscall GetMinimum(void)
public: struct Key * __thiscall GetNextKey(float)
public: virtual int __thiscall GetParamIndex(void)
public: struct Key * __thiscall GetPrevKey(float)
public: virtual float __thiscall GetStart(void)
public: class Vector3 __thiscall GetValue(class HeapVector<struct DynamicParam> const &)
public: class Vector3 __thiscall GetValue(float)
public: virtual int __thiscall KeyCount(void)
public: virtual void __thiscall SetParamIndex(int)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
protected: class Vector3 __thiscall Interpolate(struct Key const &,struct Key const &,float)
const Graphics::Animation<class Vector3>::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Serializable>'}
const Graphics::Animation<class Vector3>::`vftable'{for `Graphics::AnimationBase'}
};

class RenderObject
{
public: __thiscall RenderObject(class RenderObject const &)
public: __thiscall RenderObject(void)
public: __thiscall RenderObject(bool)
public: __thiscall ~RenderObject(void)
public: class RenderObject & __thiscall operator=(class RenderObject const &)
public: void __thiscall Prepare(void)
public: static class RenderObject * __cdecl create(bool)
};

class RendererCallback
{
public: __thiscall RendererCallback(class RendererCallback const &)
public: __thiscall RendererCallback(void)
public: virtual __thiscall ~RendererCallback(void)
public: class Graphics::RendererCallback & __thiscall Graphics::RendererCallback::operator=(class Graphics::RendererCallback const &)
public: virtual void __thiscall OnAfterDrawObject(class RenderObject *)
public: virtual void __thiscall OnAfterPresent(void)
public: virtual void __thiscall OnBeforeDrawObject(class RenderObject *)
public: virtual void __thiscall OnBeforePresent(void)
public: virtual void __thiscall OnBeginScene(void)
public: virtual void __thiscall OnClear(void)
public: virtual void __thiscall OnEndFrame(void)
public: virtual void __thiscall OnEndScene(void)
public: virtual void __thiscall OnFreeResources(void)
public: virtual void __thiscall OnGetSystemDescriptor(struct SystemDescriptor &)
public: virtual void __thiscall OnInitialize(class ConfigParser *)
public: virtual void __thiscall OnRetreiveParams(class ConfigParser * &)
public: virtual void __thiscall OnSetCamera(class Camera const &)
public: virtual void __thiscall OnSetParams(class ConfigParser *)
public: virtual void __thiscall OnSetRenderTarget(class Texture *,class Texture *)
public: virtual void __thiscall OnUninitialize(void)
public: virtual void __thiscall OnUpdate(void)
const Graphics::RendererCallback::`vftable'
};

class AnimTransformNode
{
public: __thiscall AnimTransformNode(class AnimTransformNode const &)
public: __thiscall AnimTransformNode(class ModelNode *)
public: virtual __thiscall ~AnimTransformNode(void)
public: class AnimTransformNode & __thiscall operator=(class AnimTransformNode const &)
public: virtual void __thiscall CalculateBox(void)
public: virtual class ModelNode * __thiscall CloneEmpty(void)
public: virtual void __thiscall CopyFrom(class ModelNode *)
public: virtual class Position3 * __thiscall CreateCurTransform(class ModelInstance &,class Position3 const &)
public: void __thiscall DestroyMoveAnim(void)
public: void __thiscall DestroyRotateAnim(void)
public: void __thiscall DestroyScaleAnim(void)
public: void __thiscall DestroyScaleOrientAnim(void)
public: virtual int __thiscall GetMaxParamIndex(void)
public: bool __thiscall isMoveAnimated(void)
public: bool __thiscall isRotateAnimated(void)
public: bool __thiscall isScaleAnimated(void)
public: bool __thiscall isScaleOrientAnimated(void)
public: class Animation<class Quaternion> * __thiscall GetRotateAnim(void)
public: class Animation<class Quaternion> * __thiscall GetScaleOrientAnim(void)
public: class Animation<class Vector3> * __thiscall GetMoveAnim(void)
public: class Animation<class Vector3> * __thiscall GetScaleAnim(void)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall Graphics::AnimTransformNode::`default constructor closure'(void)
const Graphics::AnimTransformNode::`vftable'
};

class DefModel
{
public: __thiscall DefModel(class DefModel const &)
public: __thiscall DefModel(void)
public: virtual __thiscall ~DefModel(void)
public: class DefModel & __thiscall operator=(class DefModel const &)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall ClassName(void)
public: virtual class Model * __thiscall Clone(void)
public: static class Resource * __cdecl Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall FreeToStep(int)
public: virtual class Box const & __thiscall GetBoundingBox(void)
public: virtual class Vector3 const & __thiscall GetCenter(void)
public: virtual class ModelConnector * __thiscall GetConnector(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class ModelConnector * __thiscall GetConnector(int)
public: virtual int __thiscall GetConnectorCount(void)
public: virtual int __thiscall GetDynamicParamCount(void)
public: virtual float __thiscall GetLoadPriority(void)
public: virtual int __thiscall GetLoadStep(void)
public: virtual int __thiscall GetLoadStepCount(void)
public: virtual void __thiscall GetMaterialList(class std::vector<class Graphics::Material *,class std::allocator<class Graphics::Material *> > &)
public: class ModelNode * __thiscall GetModelNodeRoot(void)
public: class ModelNode * __thiscall GetNode(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual float __thiscall GetParamFinish(int)
public: virtual float __thiscall GetParamStart(int)
public: virtual float __thiscall GetRadius(void)
public: class TransformNode * __thiscall GetTransform(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class Box const & __thiscall GetUserBox(void)
public: virtual void __thiscall LoadToStep(int)
public: virtual void __thiscall LoadWithDependents(int)
public: virtual void __thiscall Parse(class ModelInstance &,class ModelParser &,class Position3 const &,class HeapVector<class VolumeEffect *> *)
public: virtual void __thiscall ReplaceMaterial(class Material *,class Material *)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
protected: void __thiscall AddConnector(class Graphics::HelperNode *)
protected: virtual void __thiscall ClearStats(void)
protected: virtual void __thiscall FillStats(class ModelNode *)
protected: virtual void __thiscall FillStatsAnimNode(class AnimTransformNode *)
protected: virtual void __thiscall FillStatsAnimation(class AnimationBase *)
protected: virtual void __thiscall FillStatsGeometry(class GeometryNode *)
protected: virtual void __thiscall FillStatsMultiMatNode(class MultiMaterialNode *)
protected: virtual void __thiscall FillStatsNop(class FastNopNode *)
protected: virtual void __thiscall FillStatsSelector(class SelectorNode *)
protected: virtual void __thiscall FillStatsUserBox(class UserBoxNode *)
protected: class ModelNode * __thiscall FindNode(class ModelNode *,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
const Graphics::DefModel::`vftable'
};

class AnimationBase
{
public: __thiscall AnimationBase(class AnimationBase const &)
public: __thiscall AnimationBase(void)
public: virtual __thiscall ~AnimationBase(void)
public: class AnimationBase & __thiscall operator=(class AnimationBase const &)
const Graphics::AnimationBase::`vftable'
};

class BillboardNode
{
public: __thiscall BillboardNode(class BillboardNode const &)
public: __thiscall BillboardNode(class ModelNode *)
public: virtual __thiscall ~BillboardNode(void)
public: class BillboardNode & __thiscall operator=(class BillboardNode const &)
public: virtual void __thiscall CalculateBox(void)
public: virtual class ModelNode * __thiscall CloneEmpty(void)
public: virtual void __thiscall CopyFrom(class ModelNode *)
public: virtual class Position3 * __thiscall CreateCurTransform(class ModelInstance &,class Position3 const &)
public: enum BillboardAxis __thiscall GetBillboardAxis(void)
public: enum BillboardType __thiscall GetBillboardType(void)
public: virtual bool __thiscall Parse(class ModelInstance *,class ModelParser *,class Position3 const &,class HeapVector<class VolumeEffect *> *)
public: void __thiscall SetBillboardAxis(enum BillboardAxis)
public: void __thiscall SetBillboardType(enum BillboardType)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
protected: virtual void __thiscall CameraTransform(class Position3 &,class Position3 const &)
public: void __thiscall Graphics::BillboardNode::`default constructor closure'(void)
const Graphics::BillboardNode::`vftable'
};

class CMD_Node
{
public: __thiscall CMD_Node(class CMD_Node const &)
public: __thiscall CMD_Node(class ModelNode *)
public: virtual __thiscall ~CMD_Node(void)
public: class CMD_Node & __thiscall operator=(class CMD_Node const &)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __cdecl GetGeometryClass(void)
public: static float __cdecl GetGlossiness(void)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __cdecl GetMaterialClass(void)
public: bool __thiscall LoadFromCMD(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: bool __thiscall SaveToCMD(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static void __cdecl SetForcedColors(class Vector3 *,class Vector3 *,class Vector3 *)
public: static void __cdecl SetGeometryClass(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static void __cdecl SetGlossiness(float)
public: static void __cdecl SetMaterialClass(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
public: static void __cdecl setLandTextureMode(bool)
protected: void __thiscall CheckForCollision(class ModelNode *)
protected: virtual bool __thiscall CreateMaterial(class Material * &,class gDrawCommand *)
protected: void __thiscall CreateSegments(class gShapeObject *)
protected: class ModelNode * __thiscall FindCollisionScene(void)
protected: int __thiscall GetTriangleCount(class Graphics::ModelNode *,int)
protected: virtual class ModelNode * __thiscall ParseCE(class ModelNode *,class gDrawCommand *)
protected: virtual bool __thiscall ParseCMD(class GeometryNode *,class gDrawCommand *)
protected: virtual class ModelNode * __thiscall ParseCeNop(class ModelNode *,struct kinematicsV *)
protected: virtual class ModelNode * __thiscall ParseCeRot(class ModelNode *,struct kinematicsV *)
protected: virtual class ModelNode * __thiscall ParseCeSca(class ModelNode *,struct kinematicsV *)
protected: virtual class ModelNode * __thiscall ParseCeTra(class ModelNode *,struct kinematicsV *)
protected: virtual bool __thiscall ParseGeometry(class GeometryNode *,class gDrawCommand *)
protected: virtual bool __thiscall ParseLD(class LodModelNode *,class gDrawCommand *)
protected: virtual bool __thiscall ParseMaterial(class GeometryNode *,class gDrawCommand *)
protected: virtual bool __thiscall ParseSC(class ModelNode *,class gDrawCommand *)
protected: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > geomClass
protected: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > matClass
public: void __thiscall Graphics::CMD_Node::`default constructor closure'(void)
const Graphics::CMD_Node::`vftable'

protected: static float glossiness
protected: static class Vector3 * Graphics::CMD_Node::c_amb
protected: static class Vector3 * Graphics::CMD_Node::c_diff
protected: static class Vector3 * Graphics::CMD_Node::c_spec
};

class Camera
{
	enum Type {};

public: __thiscall Camera(class Camera const &)
public: __thiscall Camera(enum Type)
public: class Camera & __thiscall operator=(class Camera const &)
public: class ClipVolume * __thiscall getClipVolume(void)const 
public: void __thiscall Graphics::Camera::`default constructor closure'(void)
};

class CustomGeometry
{
public: __thiscall CustomGeometry(class CustomGeometry const &)
public: __thiscall CustomGeometry(void)
public: class CustomGeometry & __thiscall operator=(class CustomGeometry const &)
const Graphics::CustomGeometry::`vftable'
};

class CustomMaterial
{
public: __thiscall CustomMaterial(class CustomMaterial const &)
public: __thiscall CustomMaterial(void)
public: __thiscall ~CustomMaterial(void)
public: class CustomMaterial & __thiscall operator=(class CustomMaterial const &)
public: virtual class Vector3 const & __thiscall GetAmbientColor(void)
public: virtual class Texture * __thiscall GetAmbientMap(void)
public: virtual class Texture * __thiscall GetCubeMap(void)
public: virtual void __thiscall GetDataFrom(class CustomMaterial *)
public: virtual class Vector3 const & __thiscall GetDiffuseColor(void)
public: virtual class Texture * __thiscall GetDiffuseMap(int)
public: virtual class Texture * __thiscall GetGlossMap(void)
public: virtual float __thiscall GetGlossiness(void)
public: virtual bool __thiscall GetLighted(void)
public: virtual __int64 __thiscall GetMaterialCaps(void)
public: virtual class Texture * __thiscall GetNormalMap(void)
public: virtual float __thiscall GetOpacity(void)
public: virtual class Vector3 const & __thiscall GetRadianceColor(void)
public: virtual class Texture * __thiscall GetRadianceMap(void)
public: virtual class Vector3 const & __thiscall GetSpecularColor(void)
public: virtual class Texture * __thiscall GetSpecularColorMap(void)
public: virtual class Texture * __thiscall GetSpecularLevelMap(void)
public: virtual class Texture * __thiscall GetTransparencyMap(void)
public: virtual bool __thiscall GetTwoSided(void)
public: virtual bool __thiscall GetWireframe(void)
public: virtual void __thiscall SetAmbientColor(class Vector3 const &)
public: virtual void __thiscall SetAmbientMap(class Texture *)
public: virtual void __thiscall SetCubeMap(class Texture *)
public: virtual void __thiscall SetDiffuseColor(class Vector3 const &)
public: virtual void __thiscall SetDiffuseMap(int,class Texture *)
public: virtual void __thiscall SetGlossMap(class Texture *)
public: virtual void __thiscall SetGlossiness(float)
public: virtual void __thiscall SetLighted(bool)
public: virtual void __thiscall SetNormalMap(class Texture *)
public: virtual void __thiscall SetOpacity(float)
public: virtual void __thiscall SetRadianceColor(class Vector3 const &)
public: virtual void __thiscall SetRadianceMap(class Texture *)
public: virtual void __thiscall SetSpecularColor(class Vector3 const &)
public: virtual void __thiscall SetSpecularColorMap(class Texture *)
public: virtual void __thiscall SetSpecularLevelMap(class Texture *)
public: virtual void __thiscall SetTransparencyMap(class Texture *)
public: virtual void __thiscall SetTwoSided(bool)
public: virtual void __thiscall SetWireframe(bool)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
const Graphics::CustomMaterial::`vftable'
};

class EffectNode
{
public: __thiscall EffectNode(class EffectNode const &)
public: __thiscall EffectNode(class ModelNode *)
public: virtual __thiscall ~EffectNode(void)
public: class EffectNode & __thiscall operator=(class EffectNode const &)
public: class VolumeEffect * __thiscall CreateEffect(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall GetEffectClass(void)
public: enum EffectTarget __thiscall GetEffectTarget(void)
public: void __thiscall SetEffectClass(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall SetEffectTarget(enum Graphics::EffectTarget)
public: bool __thiscall UpdateEffect(class VolumeEffect *,class ModelInstance &)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall Graphics::EffectNode::`default constructor closure'(void)
const Graphics::EffectNode::`vftable'
};

class FastNopNode
{
public: __thiscall FastNopNode(class FastNopNode const &)
public: __thiscall FastNopNode(class ModelNode *)
public: virtual __thiscall ~FastNopNode(void)
public: class FastNopNode & __thiscall operator=(class FastNopNode const &)
public: virtual class ModelNode * __thiscall CloneEmpty(void)
public: virtual void __thiscall CopyFrom(class ModelNode *)
public: float __thiscall GetEnd(void)
public: virtual int __thiscall GetMaxParamIndex(void)
public: float __thiscall GetStart(void)
public: virtual bool __thiscall Parse(class ModelInstance *,class ModelParser *,class Position3 const &,class HeapVector<class VolumeEffect *> *)
public: void __thiscall SetActiveSegment(float,float,int)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall Graphics::FastNopNode::`default constructor closure'(void)
const Graphics::FastNopNode::`vftable'
};

class FileModelNode
{
public: __thiscall FileModelNode(class FileModelNode const &)
public: __thiscall FileModelNode(class ModelNode *)
public: virtual __thiscall ~FileModelNode(void)
public: class FileModelNode & __thiscall operator=(class FileModelNode const &)
public: void * __thiscall GetDataPointer(void)
public: class ModelHeader * __thiscall GetRenderHeader(void)
public: unsigned int __thiscall GetSerializerPartSize(void)
public: bool __thiscall ReadFromMemory(void *,unsigned int &,unsigned int)
public: bool __thiscall LoadFromFile(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: bool __thiscall SaveToFile(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: bool __thiscall WriteToMemory(void *,unsigned int &,unsigned int)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
protected: virtual void __thiscall LoadData(class ModelNode *)
public: void __thiscall Graphics::FileModelNode::`default constructor closure'(void)
const Graphics::FileModelNode::`vftable'
};

class Fog
{
public: __thiscall Fog(class Fog const &)
public: __thiscall Fog(void)
public: class Fog & __thiscall operator=(class Fog const &)
const Graphics::Fog::`vftable'
};

class Geometry
{
public: __thiscall Geometry(class Geometry const &)
public: __thiscall Geometry(void)
public: virtual __thiscall ~Geometry(void)
public: class Geometry & __thiscall operator=(class Geometry const &)
public: virtual class CustomGeometry * __thiscall QueryCustomGeometry(void)
const Graphics::Geometry::`vftable'
};

class GeometryBank
{
public: __thiscall GeometryBank(class GeometryBank const &)
public: __thiscall GeometryBank(void)
public: class GeometryBank & __thiscall operator=(class GeometryBank const &)
const Graphics::GeometryBank::`vftable'
};

class GeometryNode
{
public: __thiscall GeometryNode(class GeometryNode const &)
public: __thiscall GeometryNode(class ModelNode *)
public: virtual __thiscall ~GeometryNode(void)
public: class GeometryNode & __thiscall operator=(class GeometryNode const &)
public: virtual void __thiscall CalculateBox(void)
public: virtual class ModelNode * __thiscall CloneEmpty(void)
public: virtual void __thiscall CopyFrom(class ModelNode *)
public: virtual void __thiscall GetGeomOffset(unsigned int &,unsigned int &)
public: class Geometry * __thiscall GetGeometry(void)
public: class Material * __thiscall GetMaterial(void)
public: virtual void __thiscall GetMaterialList(class std::vector<class Material *,class std::allocator<class Material *> > &)
public: virtual bool __thiscall Intersect(class ModelInstance *,class IntersectionParser *,class Position3 const &)
public: virtual void __thiscall LoadData(class FileModelNode *)
public: virtual void __thiscall LoadResources(int)
public: virtual bool __thiscall Parse(class ModelInstance *,class ModelParser *,class Position3 const &,class HeapVector<class VolumeEffect *> *)
public: virtual bool __thiscall Render(class ModelInstance *,class RenderParser *,class Position3 const &,class HeapVector<class VolumeEffect *> *)
public: virtual void __thiscall ReplaceMaterial(class Material *,class Material *)
public: virtual void __thiscall SetGeomOffset(unsigned int,unsigned int)
public: void __thiscall SetGeometry(class Geometry *)
public: void __thiscall SetMaterial(class Material *)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall Graphics::GeometryNode::`default constructor closure'(void)
const Graphics::GeometryNode::`vftable'
};

class HelperNode
{
public: __thiscall HelperNode(class HelperNode const &)
public: __thiscall HelperNode(class ModelNode *)
public: virtual __thiscall ~HelperNode(void)
public: class HelperNode & __thiscall operator=(class HelperNode const &)
public: virtual class ModelNode * __thiscall CloneEmpty(void)
public: virtual void __thiscall CopyFrom(class ModelNode *)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall GetConnectorName(void)
public: virtual class Position3 const & __thiscall Graphics::HelperNode::GetConnectorPos(class Graphics::ModelInstance &)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall GetDefaultSubmodel(void)
public: virtual bool __thiscall IsConnectorVisible(class ModelInstance &)
public: virtual bool __thiscall Parse(class ModelInstance *,class ModelParser *,class Position3 const &,class HeapVector<class VolumeEffect *> *)
public: void __thiscall SetSubmodelName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall Graphics::HelperNode::`default constructor closure'(void)
const Graphics::HelperNode::`vftable'{for `Graphics::ModelConnector'}
const Graphics::HelperNode::`vftable'{for `Graphics::TransformNode'}
};

class IMatEditor
{
public: __thiscall IMatEditor(class IMatEditor const &)
public: __thiscall IMatEditor(void)
public: class IMatEditor & __thiscall operator=(class IMatEditor const &)
const Graphics::IMatEditor::`vftable'
};

class IntersectionParser
{
public: __thiscall IntersectionParser(class IntersectionParser const &)
public: __thiscall IntersectionParser(enum ModelParsePurpose)
public: virtual __thiscall ~IntersectionParser(void)
public: class IntersectionParser & __thiscall operator=(class IntersectionParser const &)
public: void __thiscall Graphics::IntersectionParser::`default constructor closure'(void)
const Graphics::IntersectionParser::`vftable'
};

class LOD_Model
{
public: __thiscall LOD_Model(class LOD_Model const &)
public: __thiscall LOD_Model(void)
public: virtual __thiscall ~LOD_Model(void)
public: class LOD_Model & __thiscall operator=(class LOD_Model const &)
public: virtual class Model * __thiscall Clone(void)
public: static class Resource * __cdecl Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall FreeToStep(int)
public: virtual int __thiscall GetLoadStep(void)
public: virtual int __thiscall GetLoadStepCount(void)
public: bool __thiscall LoadModelConfig(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class ModelManager *)
public: virtual void __thiscall LoadToStep(int)
public: virtual void __thiscall Parse(class ModelInstance &,class ModelParser &,class Position3 const &,class HeapVector<class VolumeEffect *> *)
public: void __thiscall SetLodDescriptions(class ConfigParser::iterator const &,class ModelManager *)
protected: class ModelNode * __thiscall CreateNode(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class ModelNode *,class ModelManager *)
protected: void __thiscall ExpandMultiMaterialNode(class MultiMaterialNode *,class std::_Tree<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct std::pair<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const ,struct ModelSkinInfo>,struct std::map<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct ModelSkinInfo,class Graphics::LO				)			/// Not closed properly. I have to add ) for folding.
protected: virtual void __thiscall FillStatsGeometry(class GeometryNode *)
protected: virtual void __thiscall FillStatsMultiMatNode(class MultiMaterialNode *)
protected: bool __thiscall LoadNode(class ModelNode *)
protected: bool __thiscall LoadSkinSet(int,class ConfigParser::iterator)
const Graphics::LOD_Model::`vftable'
};

class Light
{
public: __thiscall Light(class Light const &)
public: __thiscall Light(void)
public: class Light & __thiscall operator=(class Light const &)
const Graphics::Light::`vftable'
};

class LodModelNode
{
public: __thiscall LodModelNode(class LodModelNode const &)
public: __thiscall LodModelNode(class ModelNode *)
public: virtual __thiscall ~LodModelNode(void)
public: class LodModelNode & __thiscall operator=(class LodModelNode const &)
public: virtual class ModelNode * __thiscall CloneEmpty(void)
public: virtual void __thiscall CopyFrom(class ModelNode *)
public: static float __cdecl GetDistanceMultiplier(void)
public: float __thiscall GetLodDistance(int)
public: int __thiscall GetLodLevel(float)
public: virtual bool __thiscall Parse(class ModelInstance *,class ModelParser *,class Position3 const &,class HeapVector<class Graphics::VolumeEffect *> *)
public: static void __cdecl SetDistanceMultiplier(float)
public: void __thiscall SetLodDistance(int,float)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall Graphics::LodModelNode::`default constructor closure'(void)
const Graphics::LodModelNode::`vftable'

protected: static float multSq
};

class Material
{
public: __thiscall Material(class Material const &)
public: __thiscall Material(void)
public: virtual __thiscall ~Material(void)
public: class Material & __thiscall operator=(class Material const &)
public: virtual void __thiscall FinishDrawMaterial(void)
public: virtual void __thiscall FreeToStep(int)
public: unsigned int __thiscall GetFlags(unsigned int)
public: virtual float __thiscall GetLoadPriority(void)
public: virtual int __thiscall GetLoadStep(void)
public: virtual int __thiscall GetLoadStepCount(void)
public: virtual int __thiscall GetTypeMaterial(void)
public: virtual void __thiscall InitDrawMaterial(void)
public: virtual void __thiscall LoadToStep(int)
public: void __thiscall ResetFlags(unsigned int)
public: void __thiscall SetFlags(unsigned int)
public: void __thiscall SetFlags(unsigned int,bool)
public: virtual class CustomMaterial * __thiscall QueryCustomMaterial(void)
public: virtual class IMatEditor * __thiscall QueryMatEditor(void)
const Graphics::Material::`vftable'
};

class Model
{
public: __thiscall Model(class Model const &)
public: __thiscall Model(void)
public: virtual __thiscall ~Model(void)
public: class Model & __thiscall operator=(class Model const &)
public: virtual class Box const & __thiscall GetUserBox(void)
const Graphics::Model::`vftable'
};

class ModelConnector
{
public: __thiscall ModelConnector(class ModelConnector const &)
public: __thiscall ModelConnector(void)
public: class ModelConnector & __thiscall operator=(class ModelConnector const &)
const Graphics::ModelConnector::`vftable'
};

class ModelHeader
{
public: __thiscall ModelHeader(class ModelHeader const &)
public: __thiscall ModelHeader(void)
public: virtual __thiscall ~ModelHeader(void)
public: class ModelHeader & __thiscall operator=(class ModelHeader const &)
const Graphics::ModelHeader::`vftable'
};

class ModelInstance
{
public: __thiscall ModelInstance(class ModelInstance const &)
public: __thiscall ModelInstance(void)
public: class ModelInstance & __thiscall operator=(class ModelInstance const &)
public: virtual void __thiscall OnParseConnector(class ModelConnector *,class ModelParser *,class Position3 const &)
const Graphics::ModelInstance::`vftable'
};

class ModelInstanceImpl
{
public: __thiscall ModelInstanceImpl(class ModelInstanceImpl const &)
public: __thiscall ModelInstanceImpl(class Model *)
public: class ModelInstanceImpl & __thiscall operator=(class ModelInstanceImpl const &)
public: virtual class HeapVector<struct DynamicParam> const & __thiscall GetDrawArguments(void)
public: virtual class Model * __thiscall GetModel(void)
public: virtual class Position3 const & __thiscall GetPosition(void)
public: void __thiscall Graphics::ModelInstanceImpl::`default constructor closure'(void)
const Graphics::ModelInstanceImpl::`vftable'
};

class ModelManager
{
public: __thiscall ModelManager(class ModelManager const &)
public: __thiscall ModelManager(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual __thiscall ~ModelManager(void)
public: class ModelManager & __thiscall operator=(class ModelManager const &)
public: virtual class Resource * __thiscall CreateByName(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall FindFile(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall OnInitialize(class ConfigParser *)
public: virtual bool __thiscall initialize(void)
public: virtual void __thiscall uninitialize(void)
protected: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall FindInPaths(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
protected: class Resource * __thiscall LoadAsLodModel(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall Graphics::ModelManager::`default constructor closure'(void)
const Graphics::ModelManager::`vftable'{for `DefResourceManager'}
const Graphics::ModelManager::`vftable'{for `Graphics::RendererCallback'}
};

class ModelNode
{
public: __thiscall ModelNode(class ModelNode const &)
public: __thiscall ModelNode(class ModelNode *)
public: virtual __thiscall ~ModelNode(void)
public: class ModelNode & __thiscall operator=(class ModelNode const &)
public: virtual void __thiscall CalculateBox(void)
public: void __thiscall ChangeParent(class ModelNode *)
public: virtual class ModelNode * __thiscall CloneEmpty(void)
public: virtual void __thiscall CopyFrom(class ModelNode *)
public: virtual class Box const & __thiscall GetBox(void)
public: class ModelNode * __thiscall GetChild(int)
public: int __thiscall GetChildrenCount(void)
public: enum ModelParsePurpose __thiscall GetChildrenPurposes(void)
public: virtual void __thiscall GetMaterialList(class std::vector<class Material *,class std::allocator<class Material *> > &)
public: virtual int __thiscall GetMaxParamIndex(void)
public: enum ModelParsePurpose __thiscall GetNodePurpose(void)
public: class ModelNode * __thiscall GetParent(void)
public: int __thiscall GetParentIndex(void)
public: class ModelNode * __thiscall GetRoot(void)
public: void __thiscall KillChildren(void)
public: virtual void __thiscall LoadResources(int)
public: virtual bool __thiscall Parse(class ModelInstance *,class ModelParser *,class Position3 const &,class HeapVector<class VolumeEffect *> *)
public: virtual void __thiscall ReplaceMaterial(class Material *,class Material *)
public: void __thiscall ResetPurpose(enum ModelParsePurpose)
public: void __thiscall SetName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall SetNodePurposes(enum ModelParsePurpose)
public: void __thiscall UpdatePurpose(void)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::ModelNode::GetName(void)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
private: int __thiscall AddChild(class ModelNode *)
private: void __thiscall RemoveChild(class ModelNode *)
public: void __thiscall Graphics::ModelNode::`default constructor closure'(void)
const Graphics::ModelNode::`vftable'
};

class ModelParser
{
public: __thiscall ModelParser(class ModelParser const &)
public: __thiscall ModelParser(enum ModelParsePurpose)
public: virtual __thiscall ~ModelParser(void)
public: class ModelParser & __thiscall operator=(class ModelParser const &)
public: enum Graphics::ModelParsePurpose __thiscall Purpose(void)
const Graphics::ModelParser::`vftable'
};

class MultiMaterialNode
{
public: __thiscall MultiMaterialNode(class MultiMaterialNode const &)
public: __thiscall MultiMaterialNode(class ModelNode *)
public: virtual __thiscall ~MultiMaterialNode(void)
public: class MultiMaterialNode & __thiscall operator=(class MultiMaterialNode const &)
public: class Material * __thiscall GetMaterial(int)
public: int __thiscall GetMaterialCount(void)
public: virtual void __thiscall LoadResources(int)
public: virtual bool __thiscall Render(class ModelInstance *,class RenderParser *,class Position3 const &,class HeapVector<class VolumeEffect *> *)
public: void __thiscall SetMaterial(int,class Material *)
public: class Animation<int> & __thiscall GetSelector(void)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall Graphics::MultiMaterialNode::`default constructor closure'(void)
const Graphics::MultiMaterialNode::`vftable'
};

class RenderFont
{
public: __thiscall RenderFont(class RenderFont const &)
public: __thiscall RenderFont(void)
public: virtual __thiscall ~RenderFont(void)
public: class RenderFont & __thiscall operator=(class RenderFont const &)
const Graphics::RenderFont::`vftable'
};

class RenderParser
{
public: __thiscall RenderParser(class RenderParser const &)
public: __thiscall RenderParser(void)
public: virtual __thiscall ~RenderParser(void)
public: class RenderParser & __thiscall operator=(class RenderParser const &)
const Graphics::RenderParser::`vftable'
};

class RenderText
{
public: __thiscall RenderText(class RenderText const &)
public: __thiscall RenderText(void)
public: __thiscall ~RenderText(void)
public: class RenderText & __thiscall operator=(class RenderText const &)
};

class Renderer
{
public: __thiscall Renderer(class Renderer const &)
public: __thiscall Renderer(void)
public: virtual __thiscall ~Renderer(void)
public: class Renderer & __thiscall operator=(class Renderer const &)
const Graphics::Renderer::`vftable'
};

class SegmentNode
{
public: __thiscall SegmentNode(class SegmentNode const &)
public: __thiscall SegmentNode(class ModelNode *)
public: virtual __thiscall ~SegmentNode(void)
public: class SegmentNode & __thiscall operator=(class SegmentNode const &)
public: virtual void __thiscall CopyFrom(class ModelNode *)
public: virtual class ModelNode * __thiscall CloneEmpty(void)
public: class Vector3 const & __thiscall GetA(void)
public: class Vector3 const & __thiscall GetB(void)
public: virtual bool __thiscall Parse(class ModelInstance *,class ModelParser *,class Position3 const &,class HeapVector<class VolumeEffect *> *)
public: void __thiscall SetA(class Vector3 const &)
public: void __thiscall SetB(class Vector3 const &)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall Graphics::SegmentNode::`default constructor closure'(void)
const Graphics::SegmentNode::`vftable'
};

class SegmentParser
{
public: __thiscall SegmentParser(class SegmentParser const &)
public: __thiscall SegmentParser(enum ModelParsePurpose)
public: virtual __thiscall ~SegmentParser(void)
public: class SegmentParser & __thiscall operator=(class SegmentParser const &)
public: void __thiscall Graphics::SegmentParser::`default constructor closure'(void)
const Graphics::SegmentParser::`vftable'
};

class SelectorNode
{
public: __thiscall SelectorNode(class SelectorNode const &)
public: __thiscall SelectorNode(class ModelNode *)
public: virtual __thiscall ~SelectorNode(void)
public: class SelectorNode & __thiscall operator=(class SelectorNode const &)
public: virtual class ModelNode * __thiscall CloneEmpty(void)
public: virtual void __thiscall CopyFrom(class ModelNode *)
public: virtual int __thiscall GetMaxParamIndex(void)
public: bool __thiscall GetUseAll(void)
public: virtual bool __thiscall Parse(class ModelInstance *,class ModelParser *,class Position3 const &,class HeapVector<class VolumeEffect *> *)
public: void __thiscall SetUseAll(bool)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
public: class Animation<int> & __thiscall GetSelector(void)
public: void __thiscall Graphics::SelectorNode::`default constructor closure'(void)
const Graphics::SelectorNode::`vftable'
};

class Texture
{
public: __thiscall Texture(class Texture const &)
public: __thiscall Texture(void)
public: virtual __thiscall ~Texture(void)
public: class Texture & __thiscall operator=(class Texture const &)
const Graphics::Texture::`vftable'
};

class TransformNode
{
public: __thiscall TransformNode(class TransformNode const &)
public: __thiscall TransformNode(class ModelNode *)
public: virtual __thiscall ~TransformNode(void)
public: class TransformNode & __thiscall operator=(class TransformNode const &)
public: virtual void __thiscall CalculateBox(void)
public: virtual class ModelNode * __thiscall CloneEmpty(void)
public: virtual void __thiscall CopyFrom(class ModelNode *)
public: virtual class Position3 * __thiscall CreateCurTransform(class ModelInstance &,class Position3 const &)
public: virtual class Position3 const & __thiscall GetFullTransform(class ModelInstance &)
public: class Position3 const & __thiscall GetStaticTransform(void)
public: void __thiscall SetStaticTransform(class Position3 const &)
public: class TransformNode * __thiscall UpdateParentTransform(void)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
public: virtual bool __thiscall Parse(class ModelInstance *,class ModelParser *,class Position3 const &,class HeapVector<class VolumeEffect *> *)
public: void __thiscall Graphics::TransformNode::`default constructor closure'(void)
const Graphics::TransformNode::`vftable'
};

class TypedResourceManager
{
public: __thiscall TypedResourceManager(class TypedResourceManager const &)
public: __thiscall TypedResourceManager(void)
public: virtual __thiscall ~TypedResourceManager(void)
public: class TypedResourceManager & __thiscall operator=(class TypedResourceManager const &)
const TypedResourceManager::`vftable'
};

class UserBoxNode
{
public: __thiscall UserBoxNode(class UserBoxNode const &)
public: __thiscall UserBoxNode(class ModelNode *)
public: virtual __thiscall ~UserBoxNode(void)
public: class UserBoxNode & __thiscall operator=(class UserBoxNode const &)
public: virtual class ModelNode * __thiscall CloneEmpty(void)
public: virtual void __thiscall CopyFrom(class ModelNode *)
public: class Box const & __thiscall GetUserBox(void)
public: void __thiscall SetUserBox(class Box const &)
public: virtual void __thiscall serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall Graphics::UserBoxNode::`default constructor closure'(void)
const Graphics::UserBoxNode::`vftable'
};

class VolumeEffect
{
public: __thiscall VolumeEffect(class VolumeEffect const &)
public: __thiscall VolumeEffect(void)
public: virtual __thiscall ~VolumeEffect(void)
public: class VolumeEffect & __thiscall operator=(class VolumeEffect const &)
public: virtual class Light * __thiscall QueryLightInterface(void)
public: virtual class Fog * __thiscall QueryFogInterface(void)
const Graphics::VolumeEffect::`vftable'
};

}		/// Graphics

#endif

