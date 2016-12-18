#ifndef PICTUREVIEWER_H_
#define PICTUREVIEWER_H_

class PictureViewer
{
public: __thiscall PictureViewer::PictureViewer(struct PictureViewerParameters const &)
public: virtual __thiscall PictureViewer::~PictureViewer(void)
public: void __thiscall PictureViewer::FillFromFolder(void)
public: void __thiscall PictureViewer::setFolderName(char const *)
public: virtual bool __thiscall PictureViewer::addString(char const *)
public: virtual void __thiscall PictureViewer::setItemCaption(char const *,int,int)
private: bool __thiscall PictureViewer::SetTextureName(class Control *,char const *)
public: void __thiscall PictureViewer::`vbase destructor'(void)
const PictureViewer::`vbtable'{for `ControlWithScrollBar'}
const PictureViewer::`vbtable'{for `UI::Chart'}
const PictureViewer::`vftable'{for `Control'}
const PictureViewer::`vftable'{for `UI::Chart'}
const PictureViewer::`vftable'{for `UI::Element'}
};

#endif
