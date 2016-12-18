#ifndef DRAWPRIMITIVE_H_
#define DRAWPRIMITIVE_H_

class DrawPrimitive
{
public: __thiscall DrawPrimitive::DrawPrimitive(bool)
public: __thiscall DrawPrimitive::DrawPrimitive(class DrawPrimitive const &)
public: __thiscall DrawPrimitive::~DrawPrimitive(void)
public: class DrawPrimitive & __thiscall DrawPrimitive::operator=(class DrawPrimitive const &)
public: class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall DrawPrimitive::GetPoints(void)
public: class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall DrawPrimitive::GetTexCoords(void)
public: void __thiscall DrawPrimitive::CreateBox(int,int,int,int)
public: void __thiscall DrawPrimitive::CreateCircle(int,int,int,int)
public: void __thiscall DrawPrimitive::CreateLines(class std::vector<class Vector3,class std::allocator<class Vector3> > const &)
public: void __thiscall DrawPrimitive::Draw(void)
public: void __thiscall DrawPrimitive::Load(void)
public: void __thiscall DrawPrimitive::Rotate(float,float,float)
public: void __thiscall DrawPrimitive::SetColor(class Graphics::Color const &)
public: void __thiscall DrawPrimitive::SetColor(float,float,float,float)
public: void __thiscall DrawPrimitive::SetTexCoords(float,float,float,float)
public: void __thiscall DrawPrimitive::SetTexture(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall DrawPrimitive::`default constructor closure'(void)
};

#endif
