#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// LoseCollider
struct LoseCollider_t4061475401;
// UnityEngine.Collision2D
struct Collision2D_t452810033;
// UnityEngine.Collider2D
struct Collider2D_t1890038195;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision2D452810033.h"
#include "UnityEngine_UnityEngine_Collider2D1890038195.h"

// System.Void LoseCollider::.ctor()
extern "C"  void LoseCollider__ctor_m509362802 (LoseCollider_t4061475401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoseCollider::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void LoseCollider_OnCollisionEnter2D_m2814238172 (LoseCollider_t4061475401 * __this, Collision2D_t452810033 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoseCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void LoseCollider_OnTriggerEnter2D_m64910150 (LoseCollider_t4061475401 * __this, Collider2D_t1890038195 * ___trigger0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
