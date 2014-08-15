// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/framehost/NavigationControllerImpl

#ifndef org_chromium_content_browser_framehost_NavigationControllerImpl_JNI
#define org_chromium_content_browser_framehost_NavigationControllerImpl_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kNavigationControllerImplClassPath[] =
    "org/chromium/content/browser/framehost/NavigationControllerImpl";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_NavigationControllerImpl_clazz = NULL;
}  // namespace

namespace content {

// Step 2: method stubs.
static jboolean CanGoBack(JNIEnv* env, jobject obj,
    jlong nativeNavigationControllerAndroid) {
  DCHECK(nativeNavigationControllerAndroid) << "CanGoBack";
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  return native->CanGoBack(env, obj);
}

static jboolean CanGoForward(JNIEnv* env, jobject obj,
    jlong nativeNavigationControllerAndroid) {
  DCHECK(nativeNavigationControllerAndroid) << "CanGoForward";
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  return native->CanGoForward(env, obj);
}

static jboolean CanGoToOffset(JNIEnv* env, jobject obj,
    jlong nativeNavigationControllerAndroid,
    jint offset) {
  DCHECK(nativeNavigationControllerAndroid) << "CanGoToOffset";
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  return native->CanGoToOffset(env, obj, offset);
}

static void GoBack(JNIEnv* env, jobject obj,
    jlong nativeNavigationControllerAndroid) {
  DCHECK(nativeNavigationControllerAndroid) << "GoBack";
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  return native->GoBack(env, obj);
}

static void GoForward(JNIEnv* env, jobject obj,
    jlong nativeNavigationControllerAndroid) {
  DCHECK(nativeNavigationControllerAndroid) << "GoForward";
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  return native->GoForward(env, obj);
}

static void GoToOffset(JNIEnv* env, jobject obj,
    jlong nativeNavigationControllerAndroid,
    jint offset) {
  DCHECK(nativeNavigationControllerAndroid) << "GoToOffset";
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  return native->GoToOffset(env, obj, offset);
}

static void GoToNavigationIndex(JNIEnv* env, jobject obj,
    jlong nativeNavigationControllerAndroid,
    jint index) {
  DCHECK(nativeNavigationControllerAndroid) << "GoToNavigationIndex";
  NavigationControllerAndroid* native =
      reinterpret_cast<NavigationControllerAndroid*>(nativeNavigationControllerAndroid);
  return native->GoToNavigationIndex(env, obj, index);
}

static base::subtle::AtomicWord g_NavigationControllerImpl_create = 0;
static ScopedJavaLocalRef<jobject> Java_NavigationControllerImpl_create(JNIEnv*
    env, jlong nativeNavigationControllerAndroid) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_NavigationControllerImpl_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_NavigationControllerImpl_clazz,
      "create",

"("
"J"
")"
"Lorg/chromium/content/browser/framehost/NavigationControllerImpl;",
      &g_NavigationControllerImpl_create);

  jobject ret =
    env->CallStaticObjectMethod(g_NavigationControllerImpl_clazz,
      method_id, nativeNavigationControllerAndroid);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_NavigationControllerImpl_destroy = 0;
static void Java_NavigationControllerImpl_destroy(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_NavigationControllerImpl_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_NavigationControllerImpl_clazz,
      "destroy",

"("
")"
"V",
      &g_NavigationControllerImpl_destroy);

  env->CallVoidMethod(obj,
      method_id);
  base::android::CheckException(env);

}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_NavigationControllerImpl_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kNavigationControllerImplClassPath).obj()));
  static const JNINativeMethod kMethodsNavigationControllerImpl[] = {
    { "nativeCanGoBack",
"("
"J"
")"
"Z", reinterpret_cast<void*>(CanGoBack) },
    { "nativeCanGoForward",
"("
"J"
")"
"Z", reinterpret_cast<void*>(CanGoForward) },
    { "nativeCanGoToOffset",
"("
"J"
"I"
")"
"Z", reinterpret_cast<void*>(CanGoToOffset) },
    { "nativeGoBack",
"("
"J"
")"
"V", reinterpret_cast<void*>(GoBack) },
    { "nativeGoForward",
"("
"J"
")"
"V", reinterpret_cast<void*>(GoForward) },
    { "nativeGoToOffset",
"("
"J"
"I"
")"
"V", reinterpret_cast<void*>(GoToOffset) },
    { "nativeGoToNavigationIndex",
"("
"J"
"I"
")"
"V", reinterpret_cast<void*>(GoToNavigationIndex) },
  };
  const int kMethodsNavigationControllerImplSize =
      arraysize(kMethodsNavigationControllerImpl);

  if (env->RegisterNatives(g_NavigationControllerImpl_clazz,
                           kMethodsNavigationControllerImpl,
                           kMethodsNavigationControllerImplSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}
}  // namespace content

#endif  // org_chromium_content_browser_framehost_NavigationControllerImpl_JNI
