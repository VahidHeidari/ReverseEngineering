#ifndef LETL_CABLES_H_
#define LETL_CABLES_H_

class lETL_Cables
{
public: __thiscall lETL_Cables::lETL_Cables(class lETL_Cables const &)
public: __thiscall lETL_Cables::lETL_Cables(void)
public: virtual __thiscall lETL_Cables::~lETL_Cables(void)
public: class lETL_Cables & __thiscall lETL_Cables::operator=(class lETL_Cables const &)
public: bool __thiscall lETL_Cables::CheckCableShapeIntersection(int,class Graphics::ModelInstance &,struct wsCollisionData &)
public: bool __thiscall lETL_Cables::CheckGroundIntersection(void)
public: int __thiscall lETL_Cables::CheckShapeIntersection(class Graphics::ModelInstance &,bool)
public: static class lLandObject * __cdecl lETL_Cables::CreateObject(void)
public: virtual bool __thiscall lETL_Cables::CableExists(int)
public: virtual int __thiscall lETL_Cables::CableCount(void)
public: virtual struct gBox const & __thiscall lETL_Cables::LocalBox(double)
public: virtual void __thiscall lETL_Cables::AttachPos(bool,int,class Vector3 &)
public: virtual void __thiscall lETL_Cables::ConstructFlatShape(void)
public: virtual void __thiscall lETL_Cables::CreateGShape(void)
public: virtual void __thiscall lETL_Cables::CutCable(int)
public: virtual void __thiscall lETL_Cables::Init(struct wShape *,class cPosition const &,unsigned long,void *)
public: virtual void __thiscall lETL_Cables::Parse(class Graphics::ModelParser &,class Position3 const &,class HeapVector<class Graphics::VolumeEffect *> *)
public: virtual void __thiscall lETL_Cables::ReinitState(void)
public: virtual void __thiscall lETL_Cables::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall lETL_Cables::SetFinishETL(class lETL *)
public: void __thiscall lETL_Cables::SetStartETL(class lETL *)
protected: static void __cdecl lETL_Cables::CreateMaterial(void)
protected: virtual float __thiscall lETL_Cables::WireHeight(int,float)
protected: virtual float __thiscall lETL_Cables::WireLowering(float,float)
protected: virtual void __thiscall lETL_Cables::CreateDynamicData(void)
protected: virtual void __thiscall lETL_Cables::CreateWire(class std::vector<class Vector3,class std::allocator<class Vector3> > &,class Vector3 const &,class Vector3 const &)
const lETL_Cables::`vftable'
const lETL_Cables::`vftable'{for `Graphics::ModelInstance'}
const lETL_Cables::`vftable'{for `viObject'}

private: static class Graphics::Material * lETL_Cables::material
private: static float const lETL_Cables::lowering_factor
private: static int const lETL_Cables::segment_count
};

#endif

