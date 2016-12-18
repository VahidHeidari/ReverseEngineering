#ifndef ACCELERATETABLE_H_
#define ACCELERATETABLE_H_

class AccelerateTable
{
public: class AccelerateTable & __thiscall AccelerateTable::operator=(class AccelerateTable const &)
public: static void __cdecl AccelerateTable::attach(struct HotKey const &,int,class Control *)
public: static void __cdecl AccelerateTable::clear(void)
public: static void __cdecl AccelerateTable::detach(class Control const *)
public: static void __cdecl AccelerateTable::detach(struct HotKey const &)
public: static void __cdecl AccelerateTable::make(int,int)
private: static bool __cdecl AccelerateTable::detachOne(class Control const *)

private: static class std::map<struct HotKey,struct CommandAndHandler,struct std::less<struct HotKey>,class std::allocator<struct CommandAndHandler> > AccelerateTable::m_Table
};

#endif
