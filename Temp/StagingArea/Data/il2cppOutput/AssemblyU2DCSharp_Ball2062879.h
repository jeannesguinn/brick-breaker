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
// Paddle
struct Paddle_t2382992266;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ball
struct  Ball_t2062879  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioClip Ball::boing
	AudioClip_t3714538611 * ___boing_2;
	// Paddle Ball::paddle
	Paddle_t2382992266 * ___paddle_3;
	// System.Boolean Ball::hasStarted
	bool ___hasStarted_4;
	// UnityEngine.Vector3 Ball::PaddleToBallVector
	Vector3_t3525329789  ___PaddleToBallVector_5;

public:
	inline static int32_t get_offset_of_boing_2() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___boing_2)); }
	inline AudioClip_t3714538611 * get_boing_2() const { return ___boing_2; }
	inline AudioClip_t3714538611 ** get_address_of_boing_2() { return &___boing_2; }
	inline void set_boing_2(AudioClip_t3714538611 * value)
	{
		___boing_2 = value;
		Il2CppCodeGenWriteBarrier(&___boing_2, value);
	}

	inline static int32_t get_offset_of_paddle_3() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___paddle_3)); }
	inline Paddle_t2382992266 * get_paddle_3() const { return ___paddle_3; }
	inline Paddle_t2382992266 ** get_address_of_paddle_3() { return &___paddle_3; }
	inline void set_paddle_3(Paddle_t2382992266 * value)
	{
		___paddle_3 = value;
		Il2CppCodeGenWriteBarrier(&___paddle_3, value);
	}

	inline static int32_t get_offset_of_hasStarted_4() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___hasStarted_4)); }
	inline bool get_hasStarted_4() const { return ___hasStarted_4; }
	inline bool* get_address_of_hasStarted_4() { return &___hasStarted_4; }
	inline void set_hasStarted_4(bool value)
	{
		___hasStarted_4 = value;
	}

	inline static int32_t get_offset_of_PaddleToBallVector_5() { return static_cast<int32_t>(offsetof(Ball_t2062879, ___PaddleToBallVector_5)); }
	inline Vector3_t3525329789  get_PaddleToBallVector_5() const { return ___PaddleToBallVector_5; }
	inline Vector3_t3525329789 * get_address_of_PaddleToBallVector_5() { return &___PaddleToBallVector_5; }
	inline void set_PaddleToBallVector_5(Vector3_t3525329789  value)
	{
		___PaddleToBallVector_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
