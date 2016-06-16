#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// LevelManager
struct LevelManager_t2278695849;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t503173063;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Brick
struct  Brick_t64452641  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioClip Brick::thud
	AudioClip_t3714538611 * ___thud_2;
	// System.Int32 Brick::timesHit
	int32_t ___timesHit_3;
	// LevelManager Brick::levelManager
	LevelManager_t2278695849 * ___levelManager_4;
	// UnityEngine.Sprite[] Brick::hitSprites
	SpriteU5BU5D_t503173063* ___hitSprites_5;
	// UnityEngine.GameObject Brick::smoke
	GameObject_t4012695102 * ___smoke_7;
	// System.Boolean Brick::isBreakable
	bool ___isBreakable_8;

public:
	inline static int32_t get_offset_of_thud_2() { return static_cast<int32_t>(offsetof(Brick_t64452641, ___thud_2)); }
	inline AudioClip_t3714538611 * get_thud_2() const { return ___thud_2; }
	inline AudioClip_t3714538611 ** get_address_of_thud_2() { return &___thud_2; }
	inline void set_thud_2(AudioClip_t3714538611 * value)
	{
		___thud_2 = value;
		Il2CppCodeGenWriteBarrier(&___thud_2, value);
	}

	inline static int32_t get_offset_of_timesHit_3() { return static_cast<int32_t>(offsetof(Brick_t64452641, ___timesHit_3)); }
	inline int32_t get_timesHit_3() const { return ___timesHit_3; }
	inline int32_t* get_address_of_timesHit_3() { return &___timesHit_3; }
	inline void set_timesHit_3(int32_t value)
	{
		___timesHit_3 = value;
	}

	inline static int32_t get_offset_of_levelManager_4() { return static_cast<int32_t>(offsetof(Brick_t64452641, ___levelManager_4)); }
	inline LevelManager_t2278695849 * get_levelManager_4() const { return ___levelManager_4; }
	inline LevelManager_t2278695849 ** get_address_of_levelManager_4() { return &___levelManager_4; }
	inline void set_levelManager_4(LevelManager_t2278695849 * value)
	{
		___levelManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___levelManager_4, value);
	}

	inline static int32_t get_offset_of_hitSprites_5() { return static_cast<int32_t>(offsetof(Brick_t64452641, ___hitSprites_5)); }
	inline SpriteU5BU5D_t503173063* get_hitSprites_5() const { return ___hitSprites_5; }
	inline SpriteU5BU5D_t503173063** get_address_of_hitSprites_5() { return &___hitSprites_5; }
	inline void set_hitSprites_5(SpriteU5BU5D_t503173063* value)
	{
		___hitSprites_5 = value;
		Il2CppCodeGenWriteBarrier(&___hitSprites_5, value);
	}

	inline static int32_t get_offset_of_smoke_7() { return static_cast<int32_t>(offsetof(Brick_t64452641, ___smoke_7)); }
	inline GameObject_t4012695102 * get_smoke_7() const { return ___smoke_7; }
	inline GameObject_t4012695102 ** get_address_of_smoke_7() { return &___smoke_7; }
	inline void set_smoke_7(GameObject_t4012695102 * value)
	{
		___smoke_7 = value;
		Il2CppCodeGenWriteBarrier(&___smoke_7, value);
	}

	inline static int32_t get_offset_of_isBreakable_8() { return static_cast<int32_t>(offsetof(Brick_t64452641, ___isBreakable_8)); }
	inline bool get_isBreakable_8() const { return ___isBreakable_8; }
	inline bool* get_address_of_isBreakable_8() { return &___isBreakable_8; }
	inline void set_isBreakable_8(bool value)
	{
		___isBreakable_8 = value;
	}
};

struct Brick_t64452641_StaticFields
{
public:
	// System.Int32 Brick::breakableCount
	int32_t ___breakableCount_6;

public:
	inline static int32_t get_offset_of_breakableCount_6() { return static_cast<int32_t>(offsetof(Brick_t64452641_StaticFields, ___breakableCount_6)); }
	inline int32_t get_breakableCount_6() const { return ___breakableCount_6; }
	inline int32_t* get_address_of_breakableCount_6() { return &___breakableCount_6; }
	inline void set_breakableCount_6(int32_t value)
	{
		___breakableCount_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
