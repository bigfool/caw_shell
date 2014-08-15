// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/net/X509Util

#ifndef org_chromium_net_X509Util_JNI
#define org_chromium_net_X509Util_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kX509UtilClassPath[] = "org/chromium/net/X509Util";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_X509Util_clazz = NULL;
}  // namespace

namespace net {

static void NotifyKeyChainChanged(JNIEnv* env, jclass clazz);

static jobject GetApplicationContext(JNIEnv* env, jclass clazz);

// Step 2: method stubs.

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_X509Util_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kX509UtilClassPath).obj()));
  static const JNINativeMethod kMethodsX509Util[] = {
    { "nativeNotifyKeyChainChanged",
"("
")"
"V", reinterpret_cast<void*>(NotifyKeyChainChanged) },
    { "nativeGetApplicationContext",
"("
")"
"Landroid/content/Context;", reinterpret_cast<void*>(GetApplicationContext) },
  };
  const int kMethodsX509UtilSize = arraysize(kMethodsX509Util);

  if (env->RegisterNatives(g_X509Util_clazz,
                           kMethodsX509Util,
                           kMethodsX509UtilSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}
}  // namespace net

#endif  // org_chromium_net_X509Util_JNI
