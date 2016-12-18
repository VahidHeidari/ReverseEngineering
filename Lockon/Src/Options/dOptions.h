#ifndef DOPTIONS_H_
#define DOPTIONS_H_

class dOptions
{
public: __thiscall dOptions::dOptions(class dOptions const &)
public: __thiscall dOptions::dOptions(void)
public: class dOptions & __thiscall dOptions::operator=(class dOptions const &)
public: virtual __thiscall dOptions::~dOptions(void)
public: bool __thiscall dOptions::G32bit(void)
public: bool __thiscall dOptions::GAGP(void)
public: bool __thiscall dOptions::GCockpit3D(void)
public: bool __thiscall dOptions::GCockpitIndicationRus(void)
public: bool __thiscall dOptions::GCockpitReflection(void)
public: bool __thiscall dOptions::GFiltering(void)
public: bool __thiscall dOptions::GFullScreen(void)
public: bool __thiscall dOptions::GGouraud(void)
public: bool __thiscall dOptions::GMMX(void)
public: bool __thiscall dOptions::GMMX2(void)
public: bool __thiscall dOptions::GMipmap(void)
public: bool __thiscall dOptions::GNoise(void)
public: bool __thiscall dOptions::GPrimaryDisplayDriver(void)
public: bool __thiscall dOptions::GShadows(void)
public: bool __thiscall dOptions::GSimplifiedHelmetMode(void)
public: bool __thiscall dOptions::GUseGEffects(void)
public: bool __thiscall dOptions::GUseHardware(void)
public: bool __thiscall dOptions::NHiddenFromHost(void)
public: bool __thiscall dOptions::NLoadLocalMission(void)
public: bool __thiscall dOptions::NMaster(void)
public: bool __thiscall dOptions::NNetType(void)
public: bool __thiscall dOptions::NNetwork(void)
public: bool __thiscall dOptions::Read(void)
public: bool __thiscall dOptions::TChimneySmoke(void)const 
public: bool __thiscall dOptions::UIDisableAVI(void)
public: bool __thiscall dOptions::UIMFCVersion(void)
public: bool __thiscall dOptions::UIOpaque(void)
public: bool __thiscall dOptions::UISolidMap(void)
public: bool __thiscall dOptions::Write(void)
public: char * __thiscall dOptions::NName(void)
public: int __thiscall dOptions::TEffectsDensity(void)const 
public: int __thiscall dOptions::TGreeneryDensity(void)const 
public: int __thiscall dOptions::TObjectsDensity(void)const 
public: int __thiscall dOptions::TRoadsRiversDensity(void)const 
public: int __thiscall dOptions::TTextureResolution(void)const 
public: static class whCockpitOptions dOptions::cockpit
public: static void __cdecl dOptions::SetCockpitOptions(struct whCockpitOptions::OptionsData const *)
public: struct doColors __thiscall dOptions::GetColorOptions(void)
public: struct doInput __thiscall dOptions::GetInputOptions(void)
public: struct doInterface __thiscall dOptions::GetInterfaceOptions(void)
public: struct doNetwork __thiscall dOptions::GetNetworkOptions(void)
public: struct doSound __thiscall dOptions::GetSoundOptions(void)
public: struct doTerrain __thiscall dOptions::GetTerrainOptions(void)
public: struct doUnits __thiscall dOptions::GetUnitsOptions(void)
public: unsigned char * __thiscall dOptions::NIP(void)
public: unsigned char __thiscall dOptions::GLibrary(void)
public: unsigned char __thiscall dOptions::GPCITextures(void)
public: unsigned char __thiscall dOptions::GQuality(void)
public: unsigned int __thiscall dOptions::GAngleOfView(void)
public: virtual bool __thiscall dOptions::FullScreen(void)
public: virtual bool __thiscall dOptions::GCockpitMirrors(void)
public: virtual bool __thiscall dOptions::GetCockpitMirrors(void)
public: virtual bool __thiscall dOptions::GetCockpitMouse(void)
public: virtual bool __thiscall dOptions::GetNoEffect(void)
public: virtual bool __thiscall dOptions::Init(void)
public: virtual bool __thiscall dOptions::isFastLoad(void)
public: virtual bool __thiscall dOptions::isFastLoadLand(void)
public: virtual float __thiscall dOptions::GetCockpitAngleOfView(void)
public: virtual int __thiscall dOptions::GetResolutionX(void)
public: virtual int __thiscall dOptions::GetResolutionY(void)
public: virtual int __thiscall dOptions::TDetailsVisibility(void)const 
public: virtual short __thiscall dOptions::GetCockpitMirrorsResolution(void)
public: virtual struct doGraphics __thiscall dOptions::GetGraphicsOptions(void)
public: virtual unsigned char __thiscall dOptions::GResolution(void)
public: virtual unsigned char __thiscall dOptions::GTexturing(void)
public: virtual void __thiscall dOptions::SetCockpitAngleOfView(float)
public: virtual void __thiscall dOptions::SetCockpitMouse(bool)
public: virtual void __thiscall dOptions::SetGraphicsOptions(struct doGraphics)
public: virtual void __thiscall dOptions::SetNoEffect(bool)
public: virtual void __thiscall dOptions::setFastLoad(bool)
public: virtual void __thiscall dOptions::setFastLoadLand(bool)
public: void __thiscall dOptions::Finish(void)
public: void __thiscall dOptions::GAGPset(bool)
public: void __thiscall dOptions::GFullScreenSet(bool)
public: void __thiscall dOptions::GetDefaultColors(struct doColors &)
public: void __thiscall dOptions::SetColorOptions(struct doColors)
public: void __thiscall dOptions::SetInputOptions(struct doInput)
public: void __thiscall dOptions::SetInterfaceOptions(struct doInterface const &)
public: void __thiscall dOptions::SetNetworkOptions(struct doNetwork)
public: void __thiscall dOptions::SetSoundOptions(struct doSound)
public: void __thiscall dOptions::SetTerrainOptions(struct doTerrain const &)
public: void __thiscall dOptions::SetUnitsOptions(struct doUnits)
const dOptions::`vftable'

private: static char * dOptions::magic
private: static int dOptions::version
};

#endif

