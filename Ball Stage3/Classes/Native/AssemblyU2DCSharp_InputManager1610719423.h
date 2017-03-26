#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InputManager
struct  InputManager_t1610719423  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 InputManager::slideStartPosition
	Vector2_t2243707579  ___slideStartPosition_2;
	// UnityEngine.Vector2 InputManager::prevPosition
	Vector2_t2243707579  ___prevPosition_3;
	// UnityEngine.Vector2 InputManager::delta
	Vector2_t2243707579  ___delta_4;
	// System.Boolean InputManager::moved
	bool ___moved_5;

public:
	inline static int32_t get_offset_of_slideStartPosition_2() { return static_cast<int32_t>(offsetof(InputManager_t1610719423, ___slideStartPosition_2)); }
	inline Vector2_t2243707579  get_slideStartPosition_2() const { return ___slideStartPosition_2; }
	inline Vector2_t2243707579 * get_address_of_slideStartPosition_2() { return &___slideStartPosition_2; }
	inline void set_slideStartPosition_2(Vector2_t2243707579  value)
	{
		___slideStartPosition_2 = value;
	}

	inline static int32_t get_offset_of_prevPosition_3() { return static_cast<int32_t>(offsetof(InputManager_t1610719423, ___prevPosition_3)); }
	inline Vector2_t2243707579  get_prevPosition_3() const { return ___prevPosition_3; }
	inline Vector2_t2243707579 * get_address_of_prevPosition_3() { return &___prevPosition_3; }
	inline void set_prevPosition_3(Vector2_t2243707579  value)
	{
		___prevPosition_3 = value;
	}

	inline static int32_t get_offset_of_delta_4() { return static_cast<int32_t>(offsetof(InputManager_t1610719423, ___delta_4)); }
	inline Vector2_t2243707579  get_delta_4() const { return ___delta_4; }
	inline Vector2_t2243707579 * get_address_of_delta_4() { return &___delta_4; }
	inline void set_delta_4(Vector2_t2243707579  value)
	{
		___delta_4 = value;
	}

	inline static int32_t get_offset_of_moved_5() { return static_cast<int32_t>(offsetof(InputManager_t1610719423, ___moved_5)); }
	inline bool get_moved_5() const { return ___moved_5; }
	inline bool* get_address_of_moved_5() { return &___moved_5; }
	inline void set_moved_5(bool value)
	{
		___moved_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
