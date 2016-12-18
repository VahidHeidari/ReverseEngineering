#ifndef GRAPHICS_H_
#define GRAPHICS_H_

namespace Graphics
{

class MapRenderObject
{
public: __thiscall Graphics::MapRenderObject::MapRenderObject(bool,bool)
public: __thiscall Graphics::MapRenderObject::MapRenderObject(class Graphics::MapRenderObject const &)
public: __thiscall Graphics::MapRenderObject::MapRenderObject(void)
public: virtual __thiscall Graphics::MapRenderObject::~MapRenderObject(void)
public: class Graphics::MapRenderObject & __thiscall Graphics::MapRenderObject::operator=(class Graphics::MapRenderObject const &)
public: virtual void __thiscall Graphics::MapRenderObject::CreateMaterial(int,class Graphics::Color const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall Graphics::MapRenderObject::Draw(void)
public: virtual void __thiscall Graphics::MapRenderObject::Update(struct Graphics::MapRenderObject::MapRobjData &)
const Graphics::MapRenderObject::`vftable'
};

}		/// namespace Graphics

#endif

