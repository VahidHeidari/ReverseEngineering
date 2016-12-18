#ifndef TEXFILEHEADER_H_
#define TEXFILEHEADER_H_

namespace TexFileHeader
{

class surface
{
public: bool __thiscall TexFileHeader::surface::SaveLevel(struct IDirect3DSurface8 *,class misc::mmf_write &)
};

class texture
{
public: __thiscall TexFileHeader::texture::texture(void)
public: void __thiscall TexFileHeader::texture::init(struct IDirect3DTexture8 *,char const *,struct tagPALETTEENTRY *,struct TexFileHeader::texture *,class misc::mmf_write &)
public: void __thiscall TexFileHeader::texture::initsurfaces(struct IDirect3DTexture8 *,int,int,class misc::mmf_write &)
};

}		/// namespace TexFileHeader

#endif

