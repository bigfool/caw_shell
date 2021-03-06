// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/PathService

#ifndef org_chromium_base_PathService_JNI
#define org_chromium_base_PathService_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kPathServiceClassPath[] =
    "org/chromium/base/PathService";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_PathService_clazz = NULL;
}  // namespace

namespace base {
namespace android {

static void Override(JNIEnv* env, jclass clazz,
    jint what,
    jstring path);

// Step 2: method stubs.

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_PathService_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kPathServiceClassPath).obj()));
  static const JNINativeMethod kMethodsPathService[] = {
    { "nativeOverride",
"("
"I"
"Ljava/lang/String;"
")"
"V", reinterpret_cast<void*>(Override) },
  };
  const int kMethodsPathServiceSize = arraysize(kMethodsPathService);

  if (env->RegisterNatives(g_PathService_clazz,
                           kMethodsPathService,
                           kMethodsPathServiceSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}
}  // namespace android
}  // namespace base

#endif  // org_chromium_base_PathService_JNI
