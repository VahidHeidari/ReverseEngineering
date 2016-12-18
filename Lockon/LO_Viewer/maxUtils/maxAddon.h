#ifndef MAXADDON_H_
#define MAXADDON_H_

namespace maxAddon
{

class Dialog
{
public: __thiscall maxAddon::Dialog::Dialog(class maxAddon::Dialog const &)
public: __thiscall maxAddon::Dialog::Dialog(unsigned int)
public: virtual __thiscall maxAddon::Dialog::~Dialog(void)
public: class maxAddon::Dialog & __thiscall maxAddon::Dialog::operator=(class maxAddon::Dialog const &)
public: bool __thiscall maxAddon::Dialog::init(class Interface *,struct HINSTANCE__ *)
public: bool __thiscall maxAddon::Dialog::isInitialized(void)
public: int __thiscall maxAddon::Dialog::doModal(void)
public: virtual int __stdcall maxAddon::Dialog::callBack(struct HWND__ *,unsigned int,unsigned int,long)
public: void __thiscall maxAddon::Dialog::reset(void)
private: int __stdcall maxAddon::Dialog::DialogCallBack(struct HWND__ *,unsigned int,unsigned int,long)
private: static int __stdcall maxAddon::Dialog::dialogProc(struct HWND__ *,unsigned int,unsigned int,long)
const maxAddon::Dialog::`vftable'
};

}		/// namespace maxAddon

#endif

