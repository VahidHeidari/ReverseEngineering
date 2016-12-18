#ifndef ASYNCNET_H_
#define ASYNCNET_H_

class AsyncNet
{
public: __thiscall AsyncNet::AsyncNet(class AsyncNet const &)
public: __thiscall AsyncNet::AsyncNet(void)
public: virtual __thiscall AsyncNet::~AsyncNet(void)
public: class AsyncNet & __thiscall AsyncNet::operator=(class AsyncNet const &)
public: static void __cdecl AsyncNet::chat(void)
public: static void __cdecl AsyncNet::shutdown(void)
public: static void __cdecl AsyncNet::startClient(char const *,char const *)
public: static void __cdecl AsyncNet::startServer(char const *,int)
public: static void __cdecl AsyncNet::startup(class ISimControl *)
public: static void __cdecl AsyncNet::work(void)
const AsyncNet::`vftable'
};

class AsyncNet * globalAsyncNet

#endif

