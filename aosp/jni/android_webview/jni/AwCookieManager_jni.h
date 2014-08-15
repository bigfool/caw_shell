// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/android_webview/AwCookieManager

#ifndef org_chromium_android_webview_AwCookieManager_JNI
#define org_chromium_android_webview_AwCookieManager_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kAwCookieManagerClassPath[] =
    "org/chromium/android_webview/AwCookieManager";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_AwCookieManager_clazz = NULL;
}  // namespace

namespace android_webview {

static void SetAcceptCookie(JNIEnv* env, jobject obj,
    jboolean accept);

static jboolean AcceptCookie(JNIEnv* env, jobject obj);

static void SetCookie(JNIEnv* env, jobject obj,
    jstring url,
    jstring value);

static jstring GetCookie(JNIEnv* env, jobject obj,
    jstring url);

static void RemoveSessionCookie(JNIEnv* env, jobject obj);

static void RemoveAllCookie(JNIEnv* env, jobject obj);

static void RemoveExpiredCookie(JNIEnv* env, jobject obj);

static void FlushCookieStore(JNIEnv* env, jobject obj);

static jboolean HasCookies(JNIEnv* env, jobject obj);

static jboolean AllowFileSchemeCookies(JNIEnv* env, jobject obj);

static void SetAcceptFileSchemeCookies(JNIEnv* env, jobject obj,
    jboolean accept);

// Step 2: method stubs.

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_AwCookieManager_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kAwCookieManagerClassPath).obj()));
  static const JNINativeMethod kMethodsAwCookieManager[] = {
    { "nativeSetAcceptCookie",
"("
"Z"
")"
"V", reinterpret_cast<void*>(SetAcceptCookie) },
    { "nativeAcceptCookie",
"("
")"
"Z", reinterpret_cast<void*>(AcceptCookie) },
    { "nativeSetCookie",
"("
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V", reinterpret_cast<void*>(SetCookie) },
    { "nativeGetCookie",
"("
"Ljava/lang/String;"
")"
"Ljava/lang/String;", reinterpret_cast<void*>(GetCookie) },
    { "nativeRemoveSessionCookie",
"("
")"
"V", reinterpret_cast<void*>(RemoveSessionCookie) },
    { "nativeRemoveAllCookie",
"("
")"
"V", reinterpret_cast<void*>(RemoveAllCookie) },
    { "nativeRemoveExpiredCookie",
"("
")"
"V", reinterpret_cast<void*>(RemoveExpiredCookie) },
    { "nativeFlushCookieStore",
"("
")"
"V", reinterpret_cast<void*>(FlushCookieStore) },
    { "nativeHasCookies",
"("
")"
"Z", reinterpret_cast<void*>(HasCookies) },
    { "nativeAllowFileSchemeCookies",
"("
")"
"Z", reinterpret_cast<void*>(AllowFileSchemeCookies) },
    { "nativeSetAcceptFileSchemeCookies",
"("
"Z"
")"
"V", reinterpret_cast<void*>(SetAcceptFileSchemeCookies) },
  };
  const int kMethodsAwCookieManagerSize = arraysize(kMethodsAwCookieManager);

  if (env->RegisterNatives(g_AwCookieManager_clazz,
                           kMethodsAwCookieManager,
                           kMethodsAwCookieManagerSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}
}  // namespace android_webview

#endif  // org_chromium_android_webview_AwCookieManager_JNI
