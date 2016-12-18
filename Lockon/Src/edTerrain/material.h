#ifndef MATERIAL_H_
#define MATERIAL_H_

namespace material
{

struct MaterialAlias
{
	struct RealMaterial
	{
	public: struct material::MaterialAlias::RealMaterial & __thiscall material::MaterialAlias::RealMaterial::operator=(struct material::MaterialAlias::RealMaterial const &)
	public: __thiscall material::MaterialAlias::RealMaterial::RealMaterial(struct material::MaterialAlias::RealMaterial const &)
	public: __thiscall material::MaterialAlias::RealMaterial::RealMaterial(void)
	public: __thiscall material::MaterialAlias::RealMaterial::~RealMaterial(void)
	public: bool __thiscall material::MaterialAlias::RealMaterial::BuildGeometryString(struct material::Material *,void *,char *,long)
	public: bool __thiscall material::MaterialAlias::RealMaterial::BuildMaterialString(struct material::Material *,char *,long)
	public: bool __thiscall material::MaterialAlias::RealMaterial::FromString(char const *,class misc::mmf_write &,char *,class misc::vector<struct material::MaterialAlias::RealMaterial::ParameterPosition> &)
	public: bool __thiscall material::MaterialAlias::RealMaterial::ToString(char *,long,char *,class misc::vector<struct material::MaterialAlias::RealMaterial::ParameterPosition> &)
	protected: bool __thiscall material::MaterialAlias::RealMaterial::BuildString(struct material::Material *,char *,long,char *,class misc::vector<struct material::MaterialAlias::RealMaterial::ParameterPosition> &)
	};

	struct MaxParamSource
	{
	public: struct material::MaterialAlias::MaxParamSource & __thiscall material::MaterialAlias::MaxParamSource::operator=(struct material::MaterialAlias::MaxParamSource const &)
	};

public: __thiscall material::MaterialAlias::MaterialAlias(struct material::MaterialAlias const &)
public: __thiscall material::MaterialAlias::MaterialAlias(void)
public: __thiscall material::MaterialAlias::~MaterialAlias(void)
public: struct material::MaterialAlias & __thiscall material::MaterialAlias::operator=(struct material::MaterialAlias const &)
};

struct Material
{
public: __thiscall material::Material::Material(char *,char *)
public: __thiscall material::Material::Material(struct material::Material const &)
public: __thiscall material::Material::Material(void)
public: __thiscall material::Material::~Material(void)
public: struct material::Material & __thiscall material::Material::operator=(struct material::Material const &)
public: bool __thiscall material::Material::operator!=(struct material::Material const &)const 
public: bool __thiscall material::Material::operator<(struct material::Material const &)const 
public: bool __thiscall material::Material::operator==(struct material::Material const &)const 
public: int __thiscall material::Material::Parameter::ToString(char *,long)
public: void __thiscall material::Material::CopyFrom(struct material::Material const &,class misc::mmf_write &)
public: void __thiscall material::Material::setMat(char const *)
public: void __thiscall material::Material::setSem(char const *)
};

struct MaterialAliasFile
{
public: __thiscall material::MaterialAliasFile::MaterialAliasFile(struct material::MaterialAliasFile const &)
public: __thiscall material::MaterialAliasFile::MaterialAliasFile(void)
public: __thiscall material::MaterialAliasFile::~MaterialAliasFile(void)
public: struct material::MaterialAliasFile & __thiscall material::MaterialAliasFile::operator=(struct material::MaterialAliasFile const &)
public: static struct material::MaterialAliasFile * __cdecl material::MaterialAliasFile::Open(char const *,class misc::mmf &)
public: struct material::MaterialAlias * __thiscall material::MaterialAliasFile::getAlias(char *)
};

}		/// material

#endif

