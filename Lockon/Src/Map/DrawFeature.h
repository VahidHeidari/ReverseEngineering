#ifndef DRAWFEATURE_H_
#define DRAWFEATURE_H_

class DrawFeature
{
public: __thiscall DrawFeature::DrawFeature(class DrawFeature const &)
public: __thiscall DrawFeature::DrawFeature(void)
public: class DrawFeature & __thiscall DrawFeature::operator=(class DrawFeature const &)
public: bool __thiscall DrawFeature::isNameEq(char const *)
public: bool __thiscall DrawFeature::isNameEq(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: char const * __thiscall DrawFeature::getName(void)
public: class MapS::Rect const & __thiscall DrawFeature::getBoundRect(void)
public: static char const * __cdecl DrawFeature::addTableName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static char const * __cdecl DrawFeature::getTableName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static int const __cdecl DrawFeature::getClassType(void)
public: virtual bool __thiscall DrawFeature::calcDistance(class E3::Vector const &,class DrawingState *,struct DrawFeature::DistInfo &)
public: virtual bool __thiscall DrawFeature::isVisibleIn(class MapS::Rect const &)
public: virtual bool const __thiscall DrawFeature::isDerived(int)
public: virtual int const __thiscall DrawFeature::getType(void)
public: virtual void __thiscall DrawFeature::draw(class DrawingState *)
public: void __thiscall DrawFeature::setName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
protected: virtual __thiscall DrawFeature::~DrawFeature(void)
protected: static class std::set<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > DrawFeature::NameTable
protected: static void __cdecl DrawFeature::unrefDelete(class DrawFeature *)
const DrawFeature::`vftable'

protected: static int const DrawFeature::type
};

#endif

