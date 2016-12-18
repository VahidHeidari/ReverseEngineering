#ifndef PICTUREVIEWERPARAMETERS_H_
#define PICTUREVIEWERPARAMETERS_H_

class PictureViewerParameters
{
public: __thiscall PictureViewerParameters::PictureViewerParameters(int)
public: __thiscall PictureViewerParameters::PictureViewerParameters(struct PictureViewerParameters const &)
public: virtual __thiscall PictureViewerParameters::~PictureViewerParameters(void)
public: struct PictureViewerParameters & __thiscall PictureViewerParameters::operator=(struct PictureViewerParameters const &)
public: static class ResourceKeeper<struct PictureViewerParameters> & __cdecl PictureViewerParameters::resourceKeeper(void)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __cdecl PictureViewerParameters::defaultResourceFile(void)
public: virtual void __thiscall PictureViewerParameters::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall PictureViewerParameters::read(char const *,int)
public: void __thiscall PictureViewerParameters::`default constructor closure'(void)
const PictureViewerParameters::`vftable'
};

#endif
