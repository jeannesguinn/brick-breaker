﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UnityException
struct UnityException_t3148635335;
// System.String
struct String_t;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void UnityEngine.UnityException::.ctor()
extern "C"  void UnityException__ctor_m1176480467 (UnityException_t3148635335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String)
extern "C"  void UnityException__ctor_m743662351 (UnityException_t3148635335 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UnityException::.ctor(System.String,System.Exception)
extern "C"  void UnityException__ctor_m2780758535 (UnityException_t3148635335 * __this, String_t* ___message0, Exception_t1967233988 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
