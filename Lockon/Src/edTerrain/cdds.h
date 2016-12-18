#ifndef CDDS_H_
#define CDDS_H_

namespace cdds
{

class File
{
public: __thiscall cdds::File::File(struct cdds::File const &)
public: __thiscall cdds::File::File(void)
public: __thiscall cdds::File::~File(void)
public: struct cdds::File & __thiscall cdds::File::operator=(struct cdds::File const &)
public: static struct cdds::File * __cdecl cdds::File::Open(char const *,class misc::mmf &)
public: struct cdds::Item * __thiscall cdds::File::GetTexture(char const *,int)
public: struct cdds::Item * __thiscall cdds::File::GetTexture(int,int)
};

class Item
{
public: __thiscall cdds::Item::Item(char const *,int,bool)
public: __thiscall cdds::Item::Item(struct cdds::Item const &)
public: __thiscall cdds::Item::Item(void)
public: struct cdds::Item & __thiscall cdds::Item::operator=(struct cdds::Item const &)
};

class Surface
{
public: __thiscall cdds::Surface::Surface(struct cdds::Surface const &)
public: __thiscall cdds::Surface::Surface(void)
public: struct cdds::Surface & __thiscall cdds::Surface::operator=(struct cdds::Surface const &)
public: bool __thiscall cdds::Surface::SaveLevel(struct IDirect3DSurface8 *,class misc::mmf_write &)
public: char * __thiscall cdds::Surface::getData(void)
};

class Texture
{
public: __thiscall cdds::Texture::Texture(struct IDirect3DTexture8 *,long,class misc::mmf_write &)
public: __thiscall cdds::Texture::Texture(struct cdds::Texture const &)
public: __thiscall cdds::Texture::~Texture(void)
public: struct cdds::Texture & __thiscall cdds::Texture::operator=(struct cdds::Texture const &)
public: int __thiscall cdds::Texture::size(void)
public: struct cdds::Surface * __thiscall cdds::Texture::surface(int)
};

}		/// namespace cdds

#endif

