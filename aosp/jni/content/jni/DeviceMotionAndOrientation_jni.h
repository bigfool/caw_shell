// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/content/browser/DeviceMotionAndOrientation

#ifndef org_chromium_content_browser_DeviceMotionAndOrientation_JNI
#define org_chromium_content_browser_DeviceMotionAndOrientation_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kDeviceMotionAndOrientationClassPath[] =
    "org/chromium/content/browser/DeviceMotionAndOrientation";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_DeviceMotionAndOrientation_clazz = NULL;
}  // namespace

namespace content {

// Step 2: method stubs.
static void GotOrientation(JNIEnv* env, jobject obj,
    jlong nativeDataFetcherImplAndroid,
    jdouble alpha,
    jdouble beta,
    jdouble gamma) {
  DCHECK(nativeDataFetcherImplAndroid) << "GotOrientation";
  DataFetcherImplAndroid* native =
      reinterpret_cast<DataFetcherImplAndroid*>(nativeDataFetcherImplAndroid);
  return native->GotOrientation(env, obj, alpha, beta, gamma);
}

static void GotAcceleration(JNIEnv* env, jobject obj,
    jlong nativeDataFetcherImplAndroid,
    jdouble x,
    jdouble y,
    jdouble z) {
  DCHECK(nativeDataFetcherImplAndroid) << "GotAcceleration";
  DataFetcherImplAndroid* native =
      reinterpret_cast<DataFetcherImplAndroid*>(nativeDataFetcherImplAndroid);
  return native->GotAcceleration(env, obj, x, y, z);
}

static void GotAccelerationIncludingGravity(JNIEnv* env, jobject obj,
    jlong nativeDataFetcherImplAndroid,
    jdouble x,
    jdouble y,
    jdouble z) {
  DCHECK(nativeDataFetcherImplAndroid) << "GotAccelerationIncludingGravity";
  DataFetcherImplAndroid* native =
      reinterpret_cast<DataFetcherImplAndroid*>(nativeDataFetcherImplAndroid);
  return native->GotAccelerationIncludingGravity(env, obj, x, y, z);
}

static void GotRotationRate(JNIEnv* env, jobject obj,
    jlong nativeDataFetcherImplAndroid,
    jdouble alpha,
    jdouble beta,
    jdouble gamma) {
  DCHECK(nativeDataFetcherImplAndroid) << "GotRotationRate";
  DataFetcherImplAndroid* native =
      reinterpret_cast<DataFetcherImplAndroid*>(nativeDataFetcherImplAndroid);
  return native->GotRotationRate(env, obj, alpha, beta, gamma);
}

static base::subtle::AtomicWord g_DeviceMotionAndOrientation_start = 0;
static jboolean Java_DeviceMotionAndOrientation_start(JNIEnv* env, jobject obj,
    jlong nativePtr,
    jint eventType,
    jint rateInMilliseconds) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DeviceMotionAndOrientation_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DeviceMotionAndOrientation_clazz,
      "start",

"("
"J"
"I"
"I"
")"
"Z",
      &g_DeviceMotionAndOrientation_start);

  jboolean ret =
    env->CallBooleanMethod(obj,
      method_id, nativePtr, eventType, rateInMilliseconds);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_DeviceMotionAndOrientation_getNumberActiveDeviceMotionSensors = 0;
static jint
    Java_DeviceMotionAndOrientation_getNumberActiveDeviceMotionSensors(JNIEnv*
    env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DeviceMotionAndOrientation_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DeviceMotionAndOrientation_clazz,
      "getNumberActiveDeviceMotionSensors",

"("
")"
"I",
      &g_DeviceMotionAndOrientation_getNumberActiveDeviceMotionSensors);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DeviceMotionAndOrientation_stop = 0;
static void Java_DeviceMotionAndOrientation_stop(JNIEnv* env, jobject obj, jint
    eventType) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DeviceMotionAndOrientation_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DeviceMotionAndOrientation_clazz,
      "stop",

"("
"I"
")"
"V",
      &g_DeviceMotionAndOrientation_stop);

  env->CallVoidMethod(obj,
      method_id, eventType);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_DeviceMotionAndOrientation_getInstance = 0;
static ScopedJavaLocalRef<jobject>
    Java_DeviceMotionAndOrientation_getInstance(JNIEnv* env) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DeviceMotionAndOrientation_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_DeviceMotionAndOrientation_clazz,
      "getInstance",

"("
")"
"Lorg/chromium/content/browser/DeviceMotionAndOrientation;",
      &g_DeviceMotionAndOrientation_getInstance);

  jobject ret =
    env->CallStaticObjectMethod(g_DeviceMotionAndOrientation_clazz,
      method_id);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_DeviceMotionAndOrientation_clazz =
      reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env,
          kDeviceMotionAndOrientationClassPath).obj()));
  static const JNINativeMethod kMethodsDeviceMotionAndOrientation[] = {
    { "nativeGotOrientation",
"("
"J"
"D"
"D"
"D"
")"
"V", reinterpret_cast<void*>(GotOrientation) },
    { "nativeGotAcceleration",
"("
"J"
"D"
"D"
"D"
")"
"V", reinterpret_cast<void*>(GotAcceleration) },
    { "nativeGotAccelerationIncludingGravity",
"("
"J"
"D"
"D"
"D"
")"
"V", reinterpret_cast<void*>(GotAccelerationIncludingGravity) },
    { "nativeGotRotationRate",
"("
"J"
"D"
"D"
"D"
")"
"V", reinterpret_cast<void*>(GotRotationRate) },
  };
  const int kMethodsDeviceMotionAndOrientationSize =
      arraysize(kMethodsDeviceMotionAndOrientation);

  if (env->RegisterNatives(g_DeviceMotionAndOrientation_clazz,
                           kMethodsDeviceMotionAndOrientation,
                           kMethodsDeviceMotionAndOrientationSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}
}  // namespace content

#endif  // org_chromium_content_browser_DeviceMotionAndOrientation_JNI
