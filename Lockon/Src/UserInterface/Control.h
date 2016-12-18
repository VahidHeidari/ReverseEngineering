#ifndef CONTROL_H_
#define CONTROL_H_

class Control
{
public: __thiscall Control::Control(class Control const &)
public: __thiscall Control::Control(int,float,float,float,float)
public: __thiscall Control::Control(struct ControlParameters const &)
public: class Control & __thiscall Control::operator=(class Control const &)
public: bool __thiscall Control::belong(class Control const *)const 
public: bool __thiscall Control::getAcceptMouse(void)const 
public: bool __thiscall Control::getAlphaChannelPresence(void)const 
public: bool __thiscall Control::getBorderThickness(void)const 
public: bool __thiscall Control::getTextureFilterPresence(void)const 
public: bool __thiscall Control::hasChild(class Control *)const 
public: bool __thiscall Control::hasChildren(void)const 
public: bool __thiscall Control::hasFocus(void)const 
public: bool __thiscall Control::isInStyle(int)const 
public: bool __thiscall Control::isVisible(void)
public: bool __thiscall Control::setTexture(char const *)
public: char const * __thiscall Control::getControlType(void)const 
public: class Control * __thiscall Control::findChildByCoord(class TPoint<float> const &,bool)
public: class Control * __thiscall Control::getChild(int)const 
public: class Control * __thiscall Control::getParent(void)const 
public: class Dialog * __thiscall Control::getOwnerDialog(void)
public: class TPoint<float> __thiscall Control::getLTPoint(void)const 
public: class TPoint<float> __thiscall Control::getPLTPoint(void)const 
public: class TPoint<float> __thiscall Control::getPRBPoint(void)const 
public: class TPoint<float> __thiscall Control::getRBPoint(void)const 
public: class TPoint<float> const & __thiscall Control::getInflateCoeffs(void)const 
public: class TPoint<float> const & __thiscall Control::getInverseInflateCoeffs(void)const 
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall Control::getTexture(void)const 
public: class std::list<class Control *,class std::allocator<class Control *> >::iterator __thiscall Control::addToPaintList(class Control *)
public: class std::list<class Control *,class std::allocator<class Control *> >::iterator __thiscall Control::getPaintListPosition(void)
public: class std::list<class Control *,class std::allocator<class Control *> >::iterator __thiscall Control::paintListEnd(void)
public: float __thiscall Control::fInflateIX(float,int)
public: float __thiscall Control::fInflateIY(float,int)
public: float __thiscall Control::fInflateX(float,int)
public: float __thiscall Control::fInflateY(float,int)
public: float __thiscall Control::getHeight(void)const 
public: float __thiscall Control::getPHeight(void)const 
public: float __thiscall Control::getPWidth(void)const 
public: float __thiscall Control::getWidth(void)const 
public: float __thiscall Control::inflateIX(float,int)
public: float __thiscall Control::inflateIY(float,int)
public: float __thiscall Control::inflateValue(float,float,int)
public: float __thiscall Control::inflateX(float,int)
public: float __thiscall Control::inflateY(float,int)
public: int __thiscall Control::getBorderShape(void)
public: int __thiscall Control::getLayer(void)
public: int __thiscall Control::getMaxWidth(void)
public: int __thiscall Control::getMostLeftPoint(void)const 
public: int __thiscall Control::getMostRightPoint(void)const 
public: int __thiscall Control::getNumberOfVertices(void)const 
public: int __thiscall Control::getOriginPos(void)
public: int __thiscall Control::getStyle(void)const 
public: int __thiscall Control::getTag(void)const 
public: int __thiscall Control::getTextureIndex(void)const 
public: int __thiscall Control::setBorderShape(int,unsigned long)
public: static class Control * __cdecl Control::create(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &,char const *,char const *,int)
public: static class ControlManager * __cdecl Control::getControlManager(void)
public: static int __cdecl Control::getStyle(enum UI::Element::Flag)
public: struct _USERINTERFACEVERTEX * __thiscall Control::getBorder(int)
public: struct _USERINTERFACEVERTEX * __thiscall Control::getVertices(void)
public: unsigned long __thiscall Control::getColor(void)const 
public: virtual bool __thiscall Control::canAcceptPoint(class TPoint<float> const &)const 
public: virtual bool __thiscall Control::getFlag(enum UI::Element::Flag)const 
public: virtual class Control * __thiscall Control::unregisterControlAsChild(class Control *,bool)
public: virtual class Control * __thiscall Control::unregisterControlAsChild(int,bool)
public: virtual class UI::Element * __thiscall Control::child(int)const 
public: virtual class UI::Element * __thiscall Control::parent(void)const 
public: virtual int __thiscall Control::findFace(void)
public: virtual int __thiscall Control::getFace(void)const 
public: virtual int __thiscall Control::getRefFace(void)const 
public: virtual int __thiscall Control::id(void)const 
public: virtual int __thiscall Control::registerControlAsChild(class Control *)
public: virtual unsigned int __thiscall Control::getNumberOfFaces(void)
public: virtual void __thiscall Control::activate(void)
public: virtual void __thiscall Control::fitByParent(class Control *)
public: virtual void __thiscall Control::inflate(void)
public: virtual void __thiscall Control::processMessage(struct Message *)
public: virtual void __thiscall Control::setBorderThickness(bool)
public: virtual void __thiscall Control::setCoordinates(float,float,float,float)
public: virtual void __thiscall Control::setFace(int,bool)
public: virtual void __thiscall Control::setFaceTexCoords(int,class TPoint<float> const &)
public: virtual void __thiscall Control::setFlag(enum UI::Element::Flag,bool)
public: virtual void __thiscall Control::setNumberOfFaces(int)
public: virtual void __thiscall Control::setProfile(char const *)
public: virtual void __thiscall Control::setRefFace(int)
public: virtual void __thiscall Control::shift(float,float)
public: virtual void __thiscall Control::unfitByParent(class Control *)
public: void __thiscall Control::arrange(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall Control::arrange(struct ControlParameters const &)
public: void __thiscall Control::changeStyle(int,bool)
public: void __thiscall Control::clearChildrenList(bool)
public: void __thiscall Control::getTextureCoordinates(float &,float &,float &,float &)
public: void __thiscall Control::makeChildBottomMost(class Control *)
public: void __thiscall Control::makeChildBottomMost(int)
public: void __thiscall Control::makeChildTopMost(class Control *)
public: void __thiscall Control::makeChildTopMost(int)
public: void __thiscall Control::postMessage(int,int,int)
public: void __thiscall Control::processMessages(void)
public: void __thiscall Control::sendCommandToParent(int)
public: void __thiscall Control::sendMessage(int,int,int)
public: void __thiscall Control::sendMessageToAllChildren(int,int,int)
public: void __thiscall Control::setAcceptMouse(bool)
public: void __thiscall Control::setAlphaChannelPresence(bool)
public: void __thiscall Control::setColor(int,int,int,int)
public: void __thiscall Control::setColor(unsigned long)
public: void __thiscall Control::setHint(char const *)
public: void __thiscall Control::setInitialTag(void)
public: void __thiscall Control::setLayer(int)
public: void __thiscall Control::setOrigin(class TPoint<float> const &,int)
public: void __thiscall Control::setOrigin(float,float,int)
public: void __thiscall Control::setOriginPos(int)
public: void __thiscall Control::setParameters(struct ControlParameters const &)
public: void __thiscall Control::setSize(class TPoint<float> const &)
public: void __thiscall Control::setSize(float,float)
public: void __thiscall Control::setStyle(int)
public: void __thiscall Control::setTag(int)
public: void __thiscall Control::setTextureColor(int,int,int,int)
public: void __thiscall Control::setTextureColor(unsigned long)
public: void __thiscall Control::setTextureCoordinates(float,float,float,float)
public: void __thiscall Control::setTextureFilterPresence(bool)
public: void __thiscall Control::setVisible(bool)
public: void __thiscall Control::setXSize(float)
public: void __thiscall Control::setYSize(float)
public: void __thiscall Control::shiftBorder(float,float)
protected: virtual __thiscall Control::~Control(void)
Protected: virtual void __thiscall Control::updateBorders(void)
Protected: virtual void __thiscall Control::updatePaintCoordinates(void)
Protected: virtual void __thiscall Control::updateSelfPaintCoordinates(void)
Protected: void __thiscall Control::updateSelfBorders(void)
protected: class std::list<class Control *,class std::allocator<class Control *> >::iterator __thiscall Control::setPaintListPosition(class std::list<class Control *,class std::allocator<class Control *> >::iterator)
protected: static class TPoint<float> Control::inflateCoeffs
protected: static class TPoint<float> Control::inverseInflateCoeffs
protected: virtual class Control * __thiscall Control::findChildByCoordAskChildren(class TPoint<float> const &,bool)
protected: virtual struct MSGTABLE const * __thiscall Control::getMessageTable(void)const 
protected: virtual void __thiscall Control::DoPaint(void)
protected: virtual void __thiscall Control::inflateChildren(void)
protected: virtual void __thiscall Control::inflateSelf(void)
protected: virtual void __thiscall Control::onActivate(int,class Control *)
protected: virtual void __thiscall Control::onCreate(void)
protected: virtual void __thiscall Control::onLButtonDblclk(int,int,int)
protected: virtual void __thiscall Control::onLButtonDown(int,int,int)
protected: virtual void __thiscall Control::onMouseMove(int,int,int)
protected: virtual void __thiscall Control::onMove(int,int)
protected: virtual void __thiscall Control::onPaint(void)
protected: virtual void __thiscall Control::onStyleChanging(bool,int)
protected: virtual void __thiscall Control::paintChildren(void)
protected: virtual void __thiscall Control::showCursor(void)
protected: void __thiscall Control::clearPtrs(void)
protected: void __thiscall Control::init(void)
protected: void __thiscall Control::setParent(class Control *)
protected: void __thiscall Control::thisArrange(struct ControlParameters const &)
private: struct MSGTABLE_ENTRY const * __thiscall Control::findMessageEntry(struct MSGTABLE_ENTRY const *,int,int,int)
private: virtual void __thiscall Control::decreaseDialogCounter(void)
private: virtual void __thiscall Control::increaseDialogCounter(void)
private: void __thiscall Control::dispatchMessage(class Control *,struct Message *,struct MSGTABLE_ENTRY const *)
public: void __thiscall Control::`vbase destructor'(void)
const Control::`vbtable'
const Control::`vftable'{for `Control'}
const Control::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const Control::messageTable
private: static struct MSGTABLE_ENTRY const * const Control::messageEntries
};

#endif
