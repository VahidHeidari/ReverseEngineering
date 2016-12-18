#ifndef WEXPLOSIONMANAGER_H_
#define WEXPLOSIONMANAGER_H_

#include "ExplosinInfo.h"

class wExplosionManager
{
	class Explosion
	{
	public: virtual void __thiscall wExplosionManager::Explosion(class E3::Vector const &,class E3::Vector const &,float,enum ExplosionType,unsigned long,enum ExplosionEnv,unsigned long,unsigned int,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)
	public: virtual void __thiscall wExplosionManager::Explosion(struct ExplosionInfo &)
	};

public: __thiscall wExplosionManager::wExplosionManager(class wExplosionManager const &)
public: __thiscall wExplosionManager::wExplosionManager(void)
public: virtual __thiscall wExplosionManager::~wExplosionManager(void)
public: class wExplosionManager & __thiscall wExplosionManager::operator=(class wExplosionManager const &)
const wExplosionManager::`vftable'
};

#endif

