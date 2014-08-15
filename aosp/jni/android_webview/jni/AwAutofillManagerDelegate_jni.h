// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/android_webview/AwAutofillManagerDelegate

#ifndef org_chromium_android_webview_AwAutofillManagerDelegate_JNI
#define org_chromium_android_webview_AwAutofillManagerDelegate_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kAwAutofillManagerDelegateClassPath[] =
    "org/chromium/android_webview/AwAutofillManagerDelegate";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_AwAutofillManagerDelegate_clazz = NULL;
}  // namespace

namespace android_webview {

// Step 2: method stubs.
static void SuggestionSelected(JNIEnv* env, jobject obj,
    jlong nativeAwAutofillManagerDelegate,
    jint position) {
  DCHECK(nativeAwAutofillManagerDelegate) << "SuggestionSelected";
  AwAutofillManagerDelegate* native =
      reinterpret_cast<AwAutofillManagerDelegate*>(nativeAwAutofillManagerDelegate);
  return native->SuggestionSelected(env, obj, position);
}

static base::subtle::AtomicWord g_AwAutofillManagerDelegate_create = 0;
static ScopedJavaLocalRef<jobject> Java_AwAutofillManagerDelegate_create(JNIEnv*
    env, jlong nativeDelegate) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwAutofillManagerDelegate_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_AwAutofillManagerDelegate_clazz,
      "create",

"("
"J"
")"
"Lorg/chromium/android_webview/AwAutofillManagerDelegate;",
      &g_AwAutofillManagerDelegate_create);

  jobject ret =
    env->CallStaticObjectMethod(g_AwAutofillManagerDelegate_clazz,
      method_id, nativeDelegate);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_AwAutofillManagerDelegate_showAutofillPopup =
    0;
static void Java_AwAutofillManagerDelegate_showAutofillPopup(JNIEnv* env,
    jobject obj, jfloat x,
    jfloat y,
    jfloat width,
    jfloat height,
    jobjectArray suggestions) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwAutofillManagerDelegate_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwAutofillManagerDelegate_clazz,
      "showAutofillPopup",

"("
"F"
"F"
"F"
"F"
"[Lorg/chromium/ui/autofill/AutofillSuggestion;"
")"
"V",
      &g_AwAutofillManagerDelegate_showAutofillPopup);

  env->CallVoidMethod(obj,
      method_id, x, y, width, height, suggestions);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwAutofillManagerDelegate_hideAutofillPopup =
    0;
static void Java_AwAutofillManagerDelegate_hideAutofillPopup(JNIEnv* env,
    jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwAutofillManagerDelegate_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwAutofillManagerDelegate_clazz,
      "hideAutofillPopup",

"("
")"
"V",
      &g_AwAutofillManagerDelegate_hideAutofillPopup);

  env->CallVoidMethod(obj,
      method_id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord
    g_AwAutofillManagerDelegate_createAutofillSuggestionArray = 0;
static ScopedJavaLocalRef<jobjectArray>
    Java_AwAutofillManagerDelegate_createAutofillSuggestionArray(JNIEnv* env,
    jint size) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwAutofillManagerDelegate_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_AwAutofillManagerDelegate_clazz,
      "createAutofillSuggestionArray",

"("
"I"
")"
"[Lorg/chromium/ui/autofill/AutofillSuggestion;",
      &g_AwAutofillManagerDelegate_createAutofillSuggestionArray);

  jobjectArray ret =
static_cast<jobjectArray>(env->CallStaticObjectMethod(g_AwAutofillManagerDelegate_clazz,
      method_id, size));
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobjectArray>(env, ret);
}

static base::subtle::AtomicWord
    g_AwAutofillManagerDelegate_addToAutofillSuggestionArray = 0;
static void Java_AwAutofillManagerDelegate_addToAutofillSuggestionArray(JNIEnv*
    env, jobjectArray array,
    jint index,
    jstring name,
    jstring label,
    jint uniqueId) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwAutofillManagerDelegate_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_AwAutofillManagerDelegate_clazz,
      "addToAutofillSuggestionArray",

"("
"[Lorg/chromium/ui/autofill/AutofillSuggestion;"
"I"
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
")"
"V",
      &g_AwAutofillManagerDelegate_addToAutofillSuggestionArray);

  env->CallStaticVoidMethod(g_AwAutofillManagerDelegate_clazz,
      method_id, array, index, name, label, uniqueId);
  base::android::CheckException(env);

}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_AwAutofillManagerDelegate_clazz =
      reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kAwAutofillManagerDelegateClassPath).obj()));
  static const JNINativeMethod kMethodsAwAutofillManagerDelegate[] = {
    { "nativeSuggestionSelected",
"("
"J"
"I"
")"
"V", reinterpret_cast<void*>(SuggestionSelected) },
  };
  const int kMethodsAwAutofillManagerDelegateSize =
      arraysize(kMethodsAwAutofillManagerDelegate);

  if (env->RegisterNatives(g_AwAutofillManagerDelegate_clazz,
                           kMethodsAwAutofillManagerDelegate,
                           kMethodsAwAutofillManagerDelegateSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}
}  // namespace android_webview

#endif  // org_chromium_android_webview_AwAutofillManagerDelegate_JNI
