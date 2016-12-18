#ifndef CONTROLMANAGER_H_
#define CONTROLMANAGER_H_

class ControlManager
{
public: __thiscall ControlManager::ControlManager(class ControlManager const &)
public: __thiscall ControlManager::ControlManager(void)
public: virtual __thiscall ControlManager::~ControlManager(void)
public: class ControlManager & __thiscall ControlManager::operator=(class ControlManager const &)
Public: virtual class Control * __thiscall ControlManager::unregisterControlAsChild(class Control *)
Public: virtual void __thiscall ControlManager::updatePaintCoordinates(void)
public: bool __thiscall ControlManager::isFinished(void)
public: bool __thiscall ControlManager::isInputEnabled(void)
public: bool __thiscall ControlManager::isLButtonPressed(void)const 
public: class Control * __thiscall ControlManager::getActive(void)
public: class Control * __thiscall ControlManager::getHasKbrdFocus(void)const 
public: class Control * __thiscall ControlManager::getModal(void)const 
public: class Control * __thiscall ControlManager::getMouseCapture(void)const 
public: class Control * __thiscall ControlManager::getMousePointing(void)const 
public: class Dialog * __thiscall ControlManager::getOwnerOfActive(void)
public: class Dialog const * __thiscall ControlManager::findPrecreatedDialog(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)const 
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall ControlManager::localize(char const *)
public: class std::map<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class Dialog *,struct StringWithoutCaseLess,class std::allocator<class Dialog *> > const & __thiscall ControlManager::getPrecreatedDialogs(void)const 
public: virtual class TPoint<float> __thiscall ControlManager::getScreenSize(void)
public: virtual class UI::Element * __thiscall ControlManager::create(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class UI::Element *,int)
public: virtual int __thiscall ControlManager::registerControlAsChild(class Control *)
public: virtual void __thiscall ControlManager::beginFrame(void)
public: virtual void __thiscall ControlManager::destroy(class UI::Element *)
public: virtual void __thiscall ControlManager::endFrame(void)
public: virtual void __thiscall ControlManager::finish(void)
public: void __thiscall ControlManager::ChangeHasKbrdFocus(class Control *)
public: void __thiscall ControlManager::addPrecreatedDialog(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall ControlManager::closeControl(class Control *)
public: void __thiscall ControlManager::deletePrecreatedDialog(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall ControlManager::draw(void)
public: void __thiscall ControlManager::enableInput(bool)
public: void __thiscall ControlManager::interceptMessages(int,int,int)
public: void __thiscall ControlManager::precreateDialogsList(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)
public: void __thiscall ControlManager::setActive(class Control *)
public: void __thiscall ControlManager::setHasKbrdFocus(class Control *)
public: void __thiscall ControlManager::setInflateCoeffs(float,float)
public: void __thiscall ControlManager::setModal(class Control *)
public: void __thiscall ControlManager::setMouseCapture(class Control *)
public: void __thiscall ControlManager::setMousePointing(class Control *)
public: void __thiscall ControlManager::setResolution(float,float)
public: void __thiscall ControlManager::sortIncomingMail(void)
public: void __thiscall ControlManager::start(struct HWND__ *)
protected: bool __thiscall ControlManager::IsActivatingMessage(int)
protected: void __thiscall ControlManager::finalRelease(void)
protected: void __thiscall ControlManager::onWindowPosChanged(void)
public: void __thiscall ControlManager::`vbase destructor'(void)
const ControlManager::`vbtable'{for `Control'}
const ControlManager::`vbtable'{for `UI::Manager'}
const ControlManager::`vftable'{for `Control'}
const ControlManager::`vftable'{for `UI::Element'}
const ControlManager::`vftable'{for `UI::Manager'}
};

class ControlManager * globalControlManager

#endif
