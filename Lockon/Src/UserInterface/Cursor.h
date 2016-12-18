#ifndef CURSOR_H_
#define CURSOR_H_

class Cursor
{
public: class Cursor & __thiscall Cursor::operator=(class Cursor const &)
public: static bool __cdecl Cursor::isVisible(void)
public: static class TPoint<float> __cdecl Cursor::getPosition(void)
public: static int __cdecl Cursor::getCursor(void)
public: static int __cdecl Cursor::getStoredCursor(void)
public: static int __cdecl Cursor::restoreCursor(void)
public: static int __cdecl Cursor::setAndStoreCursor(int)
public: static int __cdecl Cursor::setCursor(int)
public: static int __cdecl Cursor::storeCursor(int)
public: static void __cdecl Cursor::hide(void)
public: static void __cdecl Cursor::initCursor(struct HWND__ *,int)
public: static void __cdecl Cursor::setPosition(class TPoint<float> const &)
public: static void __cdecl Cursor::show(bool)

protected: static bool Cursor::m_IsVisible
protected: static int Cursor::m_Shape
protected: static int Cursor::m_StoredShape
protected: static struct HICON__ * Cursor::m_Cursor
protected: static struct HINSTANCE__ * Cursor::m_DllHandle
protected: static struct HWND__ * Cursor::m_MainWnd
};

#endif
