#ifndef PICTURESTABLE_H_
#define PICTURESTABLE_H_

class PicturesTable
{
public: __thiscall PicturesTable::PicturesTable(class PicturesTable const &)
public: class PicturesTable & __thiscall PicturesTable::operator=(class PicturesTable const &)
public: class DrawFeature * __thiscall PicturesTable::getFeature(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: class DrawFeature * __thiscall PicturesTable::getFeature(enum ePictureId)
public: class DrawFeature * __thiscall PicturesTable::getFeature(int)
public: int const __thiscall PicturesTable::getId(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static class PicturesTable * __cdecl PicturesTable::instance(void)
public: static double const PicturesTable::dNorm
public: static void __cdecl PicturesTable::deleteInstance(void)
protected: __thiscall PicturesTable::PicturesTable(void)
protected: __thiscall PicturesTable::~PicturesTable(void)

protected: static class PicturesTable * PicturesTable::thePicturesTable
};

#endif

