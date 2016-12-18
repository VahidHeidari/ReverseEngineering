#ifndef STATIC_H_
#define STATIC_H_

class Static
{
public: __thiscall Static::Static(int,float,float,float,float)
public: __thiscall Static::Static(struct StaticParameters const &)
public: virtual __thiscall Static::~Static(void)
public: bool __thiscall Static::getAutoStyle(void)
public: bool __thiscall Static::getIsActive(void)const 
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Static::getFontType(void)
public: float __thiscall Static::getFontPSize(void)
public: float __thiscall Static::getFontSize(void)
public: int __thiscall Static::getCaptionAlignment(void)const 
public: int __thiscall Static::getFont(void)const 
public: int __thiscall Static::getTextLength(void)
public: int __thiscall Static::getTextPixelLength(void)
public: unsigned int __thiscall Static::getFontFlags(void)
public: virtual bool __thiscall Static::canAcceptPoint(class TPoint<float> const &)const 
public: virtual bool __thiscall Static::getState(void)const 
public: virtual bool __thiscall Static::setState(bool)
public: virtual char const * __thiscall Static::getCaption(void)const 
public: virtual float __thiscall Static::getFullHeight(void)
public: virtual float __thiscall Static::getFullWidth(void)
public: virtual int __thiscall Static::findFace(void)
public: virtual unsigned long __thiscall Static::getFontColor(int)const 
public: virtual void __thiscall Static::AdjustmentSize(int,bool)
public: virtual void __thiscall Static::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall Static::arrange(struct StaticParameters const &)
public: virtual void __thiscall Static::fitPCaption(void)
public: virtual void __thiscall Static::fitVisibleArea(float,float,float,float)
public: virtual void __thiscall Static::setCaption(char const *)
public: virtual void __thiscall Static::setCoordinates(float,float,float,float)
public: virtual void __thiscall Static::setFace(int,bool)
public: virtual void __thiscall Static::setFontColor(unsigned long)
public: virtual void __thiscall Static::setNumberOfFaces(int)
public: virtual void __thiscall Static::setStateFontColor(int,unsigned int)
public: virtual void __thiscall Static::shift(float,float)
public: void __thiscall Static::calculateAutoSizeCoords(float &,float &,float &,float &)
public: void __thiscall Static::changeActivatedState(bool)
public: void __thiscall Static::changePressedState(bool,bool)
public: void __thiscall Static::getFontParams(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &,float &,unsigned int &)
public: void __thiscall Static::onSetFocus(class Control *)
public: void __thiscall Static::selfInflate(void)
public: void __thiscall Static::setActivationColor(int,int,int,int)
public: void __thiscall Static::setActivationColor(unsigned int)
public: void __thiscall Static::setAutoStyle(bool)
public: void __thiscall Static::setBold(bool)
public: void __thiscall Static::setCaption(char const *,int)
public: void __thiscall Static::setCaptionAlignment(int)
public: void __thiscall Static::setFont(int)
public: void __thiscall Static::setFontFlags(unsigned int)
public: void __thiscall Static::setFontParams(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,float,unsigned int)
public: void __thiscall Static::setFontSize(float)
public: void __thiscall Static::setFontType(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)
public: void __thiscall Static::setIsActive(bool)
public: void __thiscall Static::setItalic(bool)
public: void __thiscall Static::setStrikeOut(bool)
public: void __thiscall Static::setUnderlined(bool)
Protected: void __thiscall Static::updateSelfBorders(void)
Protected: virtual void __thiscall Static::updateBorders(void)
protected: virtual struct MSGTABLE const * __thiscall Static::getMessageTable(void)const 
protected: virtual void __thiscall Static::calculateCaptionParameters(void)
protected: virtual void __thiscall Static::inflateSelf(void)
protected: virtual void __thiscall Static::onActivate(int,class Control *)
protected: virtual void __thiscall Static::onLButtonDblclk(int,int,int)
protected: virtual void __thiscall Static::onLButtonDown(int,int,int)
protected: virtual void __thiscall Static::onMove(int,int)
protected: virtual void __thiscall Static::onPaint(void)
protected: virtual void __thiscall Static::onStyleChanging(bool,int)
protected: virtual void __thiscall Static::setOrder(bool,int)
protected: virtual void __thiscall Static::showCursor(void)
protected: void __thiscall Static::calculateFontPSize(void)
protected: void __thiscall Static::init(void)
protected: void __thiscall Static::onClose(void)
protected: void __thiscall Static::onKeyDown(int,int)
protected: void __thiscall Static::onKillFocus(class Control *)
protected: void __thiscall Static::onLButtonUp(int,int,int)
protected: void __thiscall Static::onMouseWheel(short,short,int,int)
protected: void __thiscall Static::onSize(void)
protected: void __thiscall Static::raiseEvent(int)
protected: void __thiscall Static::setActivationVertices(void)
private: void __thiscall Static::thisArrange(struct StaticParameters const &)
public: void __thiscall Static::`vbase destructor'(void)
const Static::`vbtable'{for `ControlWithVisibleAreas'}
const Static::`vbtable'{for `UI::Button'}
const Static::`vbtable'{for `UI::Switch'}
const Static::`vftable'{for `Control'}
const Static::`vftable'{for `UI::Element'}
const Static::`vftable'{for `UI::Switch'}

protected: static struct MSGTABLE const Static::messageTable
private: static struct MSGTABLE_ENTRY const * const Static::messageEntries
};

#endif
