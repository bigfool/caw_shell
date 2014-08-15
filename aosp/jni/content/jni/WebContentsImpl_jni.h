// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/webcontents/WebContentsImpl

#ifndef org_chromium_content_browser_webcontents_WebContentsImpl_JNI
#define org_chromium_content_browser_webcontents_WebContentsImpl_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kWebContentsImplClassPath[] =
    "org/chromium/content/browser/webcontents/WebContentsImpl";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_WebContentsImpl_clazz = NULL;
}  // namespace

namespace content {

// Step 2: method stubs.

static base::subtle::AtomicWord g_WebContentsImpl_create = 0;
static ScopedJavaLocalRef<jobject> Java_WebContentsImpl_create(JNIEnv* env,
    jlong nativeWebContentsAndroid,
    jobject navigationController) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_WebContentsImpl_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_WebContentsImpl_clazz,
      "create",

"("
"J"
"Lorg/chromium/content/browser/NavigationController;"
")"
"Lorg/chromium/content/browser/webcontents/WebContentsImpl;",
      &g_WebContentsImpl_create);

  jobject ret =
    env->CallStaticObjectMethod(g_WebContentsImpl_clazz,
      method_id, nativeWebContentsAndroid, navigationController);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_WebContentsImpl_destroy = 0;
static void Java_WebContentsImpl_destroy(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_WebContentsImpl_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_WebContentsImpl_clazz,
      "destroy",

"("
")"
"V",
      &g_WebContentsImpl_destroy);

  env->CallVoidMethod(obj,
      method_id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_WebContentsImpl_getNativePointer = 0;
static jlong Java_WebContentsImpl_getNativePointer(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_WebContentsImpl_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_WebContentsImpl_clazz,
      "getNativePointer",

"("
")"
"J",
      &g_WebContentsImpl_getNativePointer);

  jlong ret =
    env->CallLongMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_WebContentsImpl_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kWebContentsImplClassPath).obj()));
  return true;
}
}  // namespace content

#endif  // org_chromium_content_browser_webcontents_WebContentsImpl_JNI
