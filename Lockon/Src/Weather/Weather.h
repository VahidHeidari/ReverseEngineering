#ifndef WEATHER_H_
#define WEATHER_H_

`string'

namespace Weather
{

class CloudMaterialAndGeometry
{
public: __thiscall Weather::CloudMaterialAndGeometry::CloudMaterialAndGeometry(class Weather::CloudMaterialAndGeometry const &)
public: __thiscall Weather::CloudMaterialAndGeometry::CloudMaterialAndGeometry(class Weather::CumulusCloud *)
public: virtual __thiscall Weather::CloudMaterialAndGeometry::~CloudMaterialAndGeometry(void)
public: class Weather::CloudMaterialAndGeometry & __thiscall Weather::CloudMaterialAndGeometry::operator=(class Weather::CloudMaterialAndGeometry const &)
public: static class Weather::CloudMaterialAndGeometry * __cdecl Weather::CloudMaterialAndGeometry::create(class Weather::CumulusCloud *)
public: virtual bool __thiscall Weather::CloudMaterialAndGeometry::IntersectSegment(class Vector3 const &,class Vector3 const &,class HeapVector<struct Graphics::DynamicParam> const &,float *,class Vector3 *)
public: virtual class Box const & __thiscall Weather::CloudMaterialAndGeometry::GetBoundingBox(void)
public: virtual class Graphics::Texture * __thiscall Weather::CloudMaterialAndGeometry::GetTexture(int)
public: virtual class Vector3 const & __thiscall Weather::CloudMaterialAndGeometry::GetCenter(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Weather::CloudMaterialAndGeometry::ClassName(void)
public: virtual float __thiscall Weather::CloudMaterialAndGeometry::GetLoadPriority(void)
public: virtual float __thiscall Weather::CloudMaterialAndGeometry::GetRadius(void)
public: virtual int __thiscall Weather::CloudMaterialAndGeometry::GetLoadStep(void)
public: virtual int __thiscall Weather::CloudMaterialAndGeometry::GetLoadStepCount(void)
public: virtual int __thiscall Weather::CloudMaterialAndGeometry::GetTextureCount(void)
public: virtual unsigned int __thiscall Weather::CloudMaterialAndGeometry::GetKey(void)
public: virtual unsigned int __thiscall Weather::CloudMaterialAndGeometry::GetPolygonCount(void)
public: virtual void __thiscall Weather::CloudMaterialAndGeometry::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Weather::CloudMaterialAndGeometry::FreeToStep(int)
public: virtual void __thiscall Weather::CloudMaterialAndGeometry::LoadData(void *,unsigned int,class Graphics::ModelHeader *)
public: virtual void __thiscall Weather::CloudMaterialAndGeometry::LoadToStep(int)
const Weather::CloudMaterialAndGeometry::`vbtable'
const Weather::CloudMaterialAndGeometry::`vftable'{for `Graphics::Geometry'}
const Weather::CloudMaterialAndGeometry::`vftable'{for `Graphics::Material'}
public: void __thiscall Weather::CloudMaterialAndGeometry::`vbase destructor'(void)
`public: virtual class Vector3 const & __thiscall Weather::CloudMaterialAndGeometry::GetCenter(void)'::`2'::`local static guard'{2}'
`public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Weather::CloudMaterialAndGeometry::ClassName(void)'::`2'::`local static guard'{2}'
class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > `public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Weather::CloudMaterialAndGeometry::ClassName(void)'::`2'::className
class Vector3 `public: virtual class Vector3 const & __thiscall Weather::CloudMaterialAndGeometry::GetCenter(void)'::`2'::center
};

class CumulusCloud
{
public: __thiscall Weather::CumulusCloud::CumulusCloud(class Weather::CumulusCloud const &)
public: __thiscall Weather::CumulusCloud::CumulusCloud(struct Weather::CloudSettings *)
public: __thiscall Weather::CumulusCloud::CumulusCloud(void)
public: virtual __thiscall Weather::CumulusCloud::~CumulusCloud(void)
public: class Weather::CumulusCloud & __thiscall Weather::CumulusCloud::operator=(class Weather::CumulusCloud const &)
public: bool __thiscall Weather::CumulusCloud::getVisible(void)
public: class Box const & __thiscall Weather::CumulusCloud::getBox(void)
public: float __thiscall Weather::CumulusCloud::getRadiusBoundBox(void)
public: int __thiscall Weather::CumulusCloud::changeCurrentSortCellBuffer(void)
public: int __thiscall Weather::CumulusCloud::initTextures(void)
public: int __thiscall Weather::CumulusCloud::lightingProcess(struct D3DXVECTOR3 const *,struct D3DXCOLOR const *)
public: int __thiscall Weather::CumulusCloud::prepareTextureCloud(void)
public: int __thiscall Weather::CumulusCloud::renderCumulusCloudInTexture(int)
public: int __thiscall Weather::CumulusCloud::renderProcess(void)
public: int __thiscall Weather::CumulusCloud::volumeRendering(void)
public: static bool __cdecl Weather::CumulusCloud::compareFuncDistance(struct Weather::CellNew2 *,struct Weather::CellNew2 *)
public: static bool __cdecl Weather::CumulusCloud::sortArrayClouds(class Weather::CumulusCloud *,class Weather::CumulusCloud *)
public: static class Weather::CumulusCloud * __cdecl Weather::CumulusCloud::create(struct Weather::CloudSettings *)
public: static int __cdecl Weather::CumulusCloud::initCloudSettings(void)
public: static int __cdecl Weather::CumulusCloud::initialize(int)
public: static int __cdecl Weather::CumulusCloud::pointerCellSortFromSunNew2(void const *,void const *)
public: static int __cdecl Weather::CumulusCloud::pointerCellSortNew2(void const *,void const *)
public: static int __cdecl Weather::CumulusCloud::setRequiredTextureStage(void)
public: static int __cdecl Weather::CumulusCloud::sortArrayHelpers(void const *,void const *)
public: static int __cdecl Weather::CumulusCloud::uninitialize(void)
public: static void __cdecl Weather::CumulusCloud::setCamera(class Position3 const *)
public: static void __cdecl Weather::CumulusCloud::setCamera(class cPosition *)
public: static void __cdecl Weather::CumulusCloud::setCamera(struct D3DXMATRIX *)
public: static void __cdecl Weather::CumulusCloud::setEyePosLocal(struct D3DXVECTOR3 *)
public: struct D3DXMATRIX * __thiscall Weather::CumulusCloud::getPosition(void)
public: struct D3DXVECTOR3 __thiscall Weather::CumulusCloud::getVectorPosition(void)
public: virtual void __thiscall Weather::CumulusCloud::OnUpdate(void)
public: void __thiscall Weather::CumulusCloud::checkOnFrustumCamera(struct D3DXPLANE const *)
public: void __thiscall Weather::CumulusCloud::draw(struct D3DXVECTOR3 *)
public: void __thiscall Weather::CumulusCloud::move(struct D3DXVECTOR3 const *)
public: void __thiscall Weather::CumulusCloud::newPosition(struct D3DXVECTOR3 const *)
public: void __thiscall Weather::CumulusCloud::prepareDraw(struct _D3DLIGHT8 &)
public: void __thiscall Weather::CumulusCloud::recalculateLighting(struct D3DXVECTOR3 const *,struct D3DXCOLOR const *)
private: int __thiscall Weather::CumulusCloud::calculateAverageIntensity(struct _D3DLOCKED_RECT const *,float,float,struct tagRECT const *,struct D3DXCOLOR *)
private: int __thiscall Weather::CumulusCloud::calculateRectangle(struct Weather::CellNew2 const *,unsigned int,unsigned int,float,struct tagRECT *,int)
private: int __thiscall Weather::CumulusCloud::calculateVBForAddLight(struct D3DXCOLOR const *,struct D3DXVECTOR3 const *,float)
private: int __thiscall Weather::CumulusCloud::cutRect(struct tagRECT *)
private: int __thiscall Weather::CumulusCloud::fillSortCellBuffers(void)
private: int __thiscall Weather::CumulusCloud::init(struct Weather::CloudSettings *)
private: int __thiscall Weather::CumulusCloud::initCellSettings(float)
private: int __thiscall Weather::CumulusCloud::initCellSettings2(void)
private: int __thiscall Weather::CumulusCloud::initStartCellSettings(void)
private: int __thiscall Weather::CumulusCloud::renderHeadInCloud(void)
private: int __thiscall Weather::CumulusCloud::renderTextureHeadInCloud(void)
private: int __thiscall Weather::CumulusCloud::simulationProcess(unsigned int,float)
private: int __thiscall Weather::CumulusCloud::sortIndexFromSun(struct D3DXVECTOR3 const *)
private: static class std::vector<struct Weather::CloudSettings *,class std::allocator<struct Weather::CloudSettings *> > Weather::CumulusCloud::settingsForClouds
private: void __thiscall Weather::CumulusCloud::initGBox(void)
const Weather::CumulusCloud::`vftable'

private: static bool Weather::CumulusCloud::initialized
private: static class Graphics::DXRenderer * Weather::CumulusCloud::dxrend
private: static float Weather::CumulusCloud::coefficientDPlane
private: static float Weather::CumulusCloud::dCofPlaneSun
private: static int Weather::CumulusCloud::minNumberMipMap
private: static int Weather::CumulusCloud::numLevelMipMap
private: static struct D3DXCOLOR Weather::CumulusCloud::sunColor
private: static struct D3DXMATRIX * Weather::CumulusCloud::matPosEye
private: static struct D3DXVECTOR3 Weather::CumulusCloud::lightDirRot
private: static struct D3DXVECTOR3 Weather::CumulusCloud::normal
private: static struct D3DXVECTOR3 Weather::CumulusCloud::posEyaLocal
private: static struct IDirect3DDevice8 * Weather::CumulusCloud::m_pd3dDevice
private: static struct IDirect3DIndexBuffer8 * Weather::CumulusCloud::m_pIBImpostorForAddLight
private: static struct IDirect3DSurface8 * Weather::CumulusCloud::pImageCopy
private: static struct IDirect3DSurface8 * Weather::CumulusCloud::pRenderPrevisionHelper
private: static struct IDirect3DSurface8 * Weather::CumulusCloud::pSurfaceHelper
private: static struct IDirect3DSurface8 * Weather::CumulusCloud::pZBufferHelper
private: static struct IDirect3DTexture8 * * Weather::CumulusCloud::pParticleTextureForRendering
private: static struct IDirect3DTexture8 * Weather::CumulusCloud::pLightingCalcTexture
private: static struct IDirect3DTexture8 * Weather::CumulusCloud::pParticleTextureForLighting
private: static struct IDirect3DTexture8 * Weather::CumulusCloud::pTextureCloudForHeadInCloud
private: static struct IDirect3DVertexBuffer8 * Weather::CumulusCloud::m_pVBImpostor
private: static struct IDirect3DVertexBuffer8 * Weather::CumulusCloud::m_pVBImpostorForAddLight
private: static struct IDirect3DVertexBuffer8 * Weather::CumulusCloud::m_pVBImpostorNoTransform
private: static struct Weather::GlobalCloudSettings * Weather::CumulusCloud::globalCloudSettings
private: static struct _D3DMATERIAL8 Weather::CumulusCloud::material
};

class CloudSettings
{
public: __thiscall Weather::CloudSettings::CloudSettings(struct Weather::CloudSettings const &)
public: __thiscall Weather::CloudSettings::CloudSettings(void)
public: __thiscall Weather::CloudSettings::~CloudSettings(void)
public: struct Weather::CloudSettings & __thiscall Weather::CloudSettings::operator=(struct Weather::CloudSettings const &)
public: int __thiscall Weather::CloudSettings::initFromFile(char const *)
};

}		/// namespace Weather

#endif

