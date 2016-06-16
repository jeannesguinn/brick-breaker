#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LevelManager
struct LevelManager_t2278695849;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoseCollider
struct  LoseCollider_t4061475401  : public MonoBehaviour_t3012272455
{
public:
	// LevelManager LoseCollider::levelManager
	LevelManager_t2278695849 * ___levelManager_2;

public:
	inline static int32_t get_offset_of_levelManager_2() { return static_cast<int32_t>(offsetof(LoseCollider_t4061475401, ___levelManager_2)); }
	inline LevelManager_t2278695849 * get_levelManager_2() const { return ___levelManager_2; }
	inline LevelManager_t2278695849 ** get_address_of_levelManager_2() { return &___levelManager_2; }
	inline void set_levelManager_2(LevelManager_t2278695849 * value)
	{
		___levelManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
