// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/media/MediaCodecBridge

#ifndef org_chromium_media_MediaCodecBridge_JNI
#define org_chromium_media_MediaCodecBridge_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kCodecInfoClassPath[] =
    "org/chromium/media/MediaCodecBridge$CodecInfo";
const char kDequeueInputResultClassPath[] =
    "org/chromium/media/MediaCodecBridge$DequeueInputResult";
const char kMediaCodecBridgeClassPath[] =
    "org/chromium/media/MediaCodecBridge";
const char kDequeueOutputResultClassPath[] =
    "org/chromium/media/MediaCodecBridge$DequeueOutputResult";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_DequeueOutputResult_clazz = NULL;
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_CodecInfo_clazz = NULL;
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_MediaCodecBridge_clazz = NULL;
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_DequeueInputResult_clazz = NULL;
}  // namespace

namespace media {

// Step 2: method stubs.

static base::subtle::AtomicWord g_DequeueInputResult_status = 0;
static jint Java_DequeueInputResult_status(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DequeueInputResult_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DequeueInputResult_clazz,
      "status",

"("
")"
"I",
      &g_DequeueInputResult_status);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DequeueInputResult_index = 0;
static jint Java_DequeueInputResult_index(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DequeueInputResult_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DequeueInputResult_clazz,
      "index",

"("
")"
"I",
      &g_DequeueInputResult_index);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_CodecInfo_codecType = 0;
static ScopedJavaLocalRef<jstring> Java_CodecInfo_codecType(JNIEnv* env, jobject
    obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_CodecInfo_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_CodecInfo_clazz,
      "codecType",

"("
")"
"Ljava/lang/String;",
      &g_CodecInfo_codecType);

  jstring ret =
    static_cast<jstring>(env->CallObjectMethod(obj,
      method_id));
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_CodecInfo_codecName = 0;
static ScopedJavaLocalRef<jstring> Java_CodecInfo_codecName(JNIEnv* env, jobject
    obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_CodecInfo_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_CodecInfo_clazz,
      "codecName",

"("
")"
"Ljava/lang/String;",
      &g_CodecInfo_codecName);

  jstring ret =
    static_cast<jstring>(env->CallObjectMethod(obj,
      method_id));
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jstring>(env, ret);
}

static base::subtle::AtomicWord g_CodecInfo_direction = 0;
static jint Java_CodecInfo_direction(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_CodecInfo_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_CodecInfo_clazz,
      "direction",

"("
")"
"I",
      &g_CodecInfo_direction);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DequeueOutputResult_status = 0;
static jint Java_DequeueOutputResult_status(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DequeueOutputResult_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DequeueOutputResult_clazz,
      "status",

"("
")"
"I",
      &g_DequeueOutputResult_status);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DequeueOutputResult_index = 0;
static jint Java_DequeueOutputResult_index(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DequeueOutputResult_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DequeueOutputResult_clazz,
      "index",

"("
")"
"I",
      &g_DequeueOutputResult_index);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DequeueOutputResult_flags = 0;
static jint Java_DequeueOutputResult_flags(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DequeueOutputResult_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DequeueOutputResult_clazz,
      "flags",

"("
")"
"I",
      &g_DequeueOutputResult_flags);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DequeueOutputResult_offset = 0;
static jint Java_DequeueOutputResult_offset(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DequeueOutputResult_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DequeueOutputResult_clazz,
      "offset",

"("
")"
"I",
      &g_DequeueOutputResult_offset);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord
    g_DequeueOutputResult_presentationTimeMicroseconds = 0;
static jlong Java_DequeueOutputResult_presentationTimeMicroseconds(JNIEnv* env,
    jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DequeueOutputResult_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DequeueOutputResult_clazz,
      "presentationTimeMicroseconds",

"("
")"
"J",
      &g_DequeueOutputResult_presentationTimeMicroseconds);

  jlong ret =
    env->CallLongMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_DequeueOutputResult_numBytes = 0;
static jint Java_DequeueOutputResult_numBytes(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_DequeueOutputResult_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_DequeueOutputResult_clazz,
      "numBytes",

"("
")"
"I",
      &g_DequeueOutputResult_numBytes);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_getCodecsInfo = 0;
static ScopedJavaLocalRef<jobjectArray>
    Java_MediaCodecBridge_getCodecsInfo(JNIEnv* env) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_MediaCodecBridge_clazz,
      "getCodecsInfo",

"("
")"
"[Lorg/chromium/media/MediaCodecBridge$CodecInfo;",
      &g_MediaCodecBridge_getCodecsInfo);

  jobjectArray ret =
static_cast<jobjectArray>(env->CallStaticObjectMethod(g_MediaCodecBridge_clazz,
      method_id));
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobjectArray>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_create = 0;
static ScopedJavaLocalRef<jobject> Java_MediaCodecBridge_create(JNIEnv* env,
    jstring mime,
    jboolean isSecure,
    jint direction) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_MediaCodecBridge_clazz,
      "create",

"("
"Ljava/lang/String;"
"Z"
"I"
")"
"Lorg/chromium/media/MediaCodecBridge;",
      &g_MediaCodecBridge_create);

  jobject ret =
    env->CallStaticObjectMethod(g_MediaCodecBridge_clazz,
      method_id, mime, isSecure, direction);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_release = 0;
static void Java_MediaCodecBridge_release(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "release",

"("
")"
"V",
      &g_MediaCodecBridge_release);

  env->CallVoidMethod(obj,
      method_id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_MediaCodecBridge_start = 0;
static jboolean Java_MediaCodecBridge_start(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "start",

"("
")"
"Z",
      &g_MediaCodecBridge_start);

  jboolean ret =
    env->CallBooleanMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_dequeueInputBuffer = 0;
static ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridge_dequeueInputBuffer(JNIEnv* env, jobject obj, jlong
    timeoutUs) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "dequeueInputBuffer",

"("
"J"
")"
"Lorg/chromium/media/MediaCodecBridge$DequeueInputResult;",
      &g_MediaCodecBridge_dequeueInputBuffer);

  jobject ret =
    env->CallObjectMethod(obj,
      method_id, timeoutUs);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_flush = 0;
static jint Java_MediaCodecBridge_flush(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "flush",

"("
")"
"I",
      &g_MediaCodecBridge_flush);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_stop = 0;
static void Java_MediaCodecBridge_stop(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "stop",

"("
")"
"V",
      &g_MediaCodecBridge_stop);

  env->CallVoidMethod(obj,
      method_id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_MediaCodecBridge_getOutputHeight = 0;
static jint Java_MediaCodecBridge_getOutputHeight(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "getOutputHeight",

"("
")"
"I",
      &g_MediaCodecBridge_getOutputHeight);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_getOutputWidth = 0;
static jint Java_MediaCodecBridge_getOutputWidth(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "getOutputWidth",

"("
")"
"I",
      &g_MediaCodecBridge_getOutputWidth);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_getInputBuffer = 0;
static ScopedJavaLocalRef<jobject> Java_MediaCodecBridge_getInputBuffer(JNIEnv*
    env, jobject obj, jint index) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "getInputBuffer",

"("
"I"
")"
"Ljava/nio/ByteBuffer;",
      &g_MediaCodecBridge_getInputBuffer);

  jobject ret =
    env->CallObjectMethod(obj,
      method_id, index);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_getOutputBuffer = 0;
static ScopedJavaLocalRef<jobject> Java_MediaCodecBridge_getOutputBuffer(JNIEnv*
    env, jobject obj, jint index) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "getOutputBuffer",

"("
"I"
")"
"Ljava/nio/ByteBuffer;",
      &g_MediaCodecBridge_getOutputBuffer);

  jobject ret =
    env->CallObjectMethod(obj,
      method_id, index);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_getInputBuffersCount = 0;
static jint Java_MediaCodecBridge_getInputBuffersCount(JNIEnv* env, jobject obj)
    {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "getInputBuffersCount",

"("
")"
"I",
      &g_MediaCodecBridge_getInputBuffersCount);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_getOutputBuffersCount = 0;
static jint Java_MediaCodecBridge_getOutputBuffersCount(JNIEnv* env, jobject
    obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "getOutputBuffersCount",

"("
")"
"I",
      &g_MediaCodecBridge_getOutputBuffersCount);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_getOutputBuffersCapacity = 0;
static jint Java_MediaCodecBridge_getOutputBuffersCapacity(JNIEnv* env, jobject
    obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "getOutputBuffersCapacity",

"("
")"
"I",
      &g_MediaCodecBridge_getOutputBuffersCapacity);

  jint ret =
    env->CallIntMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_getOutputBuffers = 0;
static jboolean Java_MediaCodecBridge_getOutputBuffers(JNIEnv* env, jobject obj)
    {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "getOutputBuffers",

"("
")"
"Z",
      &g_MediaCodecBridge_getOutputBuffers);

  jboolean ret =
    env->CallBooleanMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_queueInputBuffer = 0;
static jint Java_MediaCodecBridge_queueInputBuffer(JNIEnv* env, jobject obj,
    jint index,
    jint offset,
    jint size,
    jlong presentationTimeUs,
    jint flags) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "queueInputBuffer",

"("
"I"
"I"
"I"
"J"
"I"
")"
"I",
      &g_MediaCodecBridge_queueInputBuffer);

  jint ret =
    env->CallIntMethod(obj,
      method_id, index, offset, size, presentationTimeUs, flags);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_setVideoBitrate = 0;
static void Java_MediaCodecBridge_setVideoBitrate(JNIEnv* env, jobject obj, jint
    bps) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "setVideoBitrate",

"("
"I"
")"
"V",
      &g_MediaCodecBridge_setVideoBitrate);

  env->CallVoidMethod(obj,
      method_id, bps);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_MediaCodecBridge_requestKeyFrameSoon = 0;
static void Java_MediaCodecBridge_requestKeyFrameSoon(JNIEnv* env, jobject obj)
    {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "requestKeyFrameSoon",

"("
")"
"V",
      &g_MediaCodecBridge_requestKeyFrameSoon);

  env->CallVoidMethod(obj,
      method_id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_MediaCodecBridge_queueSecureInputBuffer = 0;
static jint Java_MediaCodecBridge_queueSecureInputBuffer(JNIEnv* env, jobject
    obj, jint index,
    jint offset,
    jbyteArray iv,
    jbyteArray keyId,
    jintArray numBytesOfClearData,
    jintArray numBytesOfEncryptedData,
    jint numSubSamples,
    jlong presentationTimeUs) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "queueSecureInputBuffer",

"("
"I"
"I"
"[B"
"[B"
"[I"
"[I"
"I"
"J"
")"
"I",
      &g_MediaCodecBridge_queueSecureInputBuffer);

  jint ret =
    env->CallIntMethod(obj,
      method_id, index, offset, iv, keyId, numBytesOfClearData,
          numBytesOfEncryptedData, numSubSamples, presentationTimeUs);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_releaseOutputBuffer = 0;
static void Java_MediaCodecBridge_releaseOutputBuffer(JNIEnv* env, jobject obj,
    jint index,
    jboolean render) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "releaseOutputBuffer",

"("
"I"
"Z"
")"
"V",
      &g_MediaCodecBridge_releaseOutputBuffer);

  env->CallVoidMethod(obj,
      method_id, index, render);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_MediaCodecBridge_dequeueOutputBuffer = 0;
static ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridge_dequeueOutputBuffer(JNIEnv* env, jobject obj, jlong
    timeoutUs) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "dequeueOutputBuffer",

"("
"J"
")"
"Lorg/chromium/media/MediaCodecBridge$DequeueOutputResult;",
      &g_MediaCodecBridge_dequeueOutputBuffer);

  jobject ret =
    env->CallObjectMethod(obj,
      method_id, timeoutUs);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_configureVideo = 0;
static jboolean Java_MediaCodecBridge_configureVideo(JNIEnv* env, jobject obj,
    jobject format,
    jobject surface,
    jobject crypto,
    jint flags) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "configureVideo",

"("
"Landroid/media/MediaFormat;"
"Landroid/view/Surface;"
"Landroid/media/MediaCrypto;"
"I"
")"
"Z",
      &g_MediaCodecBridge_configureVideo);

  jboolean ret =
    env->CallBooleanMethod(obj,
      method_id, format, surface, crypto, flags);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_createAudioFormat = 0;
static ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridge_createAudioFormat(JNIEnv* env, jstring mime,
    jint sampleRate,
    jint channelCount) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_MediaCodecBridge_clazz,
      "createAudioFormat",

"("
"Ljava/lang/String;"
"I"
"I"
")"
"Landroid/media/MediaFormat;",
      &g_MediaCodecBridge_createAudioFormat);

  jobject ret =
    env->CallStaticObjectMethod(g_MediaCodecBridge_clazz,
      method_id, mime, sampleRate, channelCount);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_createVideoDecoderFormat = 0;
static ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridge_createVideoDecoderFormat(JNIEnv* env, jstring mime,
    jint width,
    jint height) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_MediaCodecBridge_clazz,
      "createVideoDecoderFormat",

"("
"Ljava/lang/String;"
"I"
"I"
")"
"Landroid/media/MediaFormat;",
      &g_MediaCodecBridge_createVideoDecoderFormat);

  jobject ret =
    env->CallStaticObjectMethod(g_MediaCodecBridge_clazz,
      method_id, mime, width, height);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_createVideoEncoderFormat = 0;
static ScopedJavaLocalRef<jobject>
    Java_MediaCodecBridge_createVideoEncoderFormat(JNIEnv* env, jstring mime,
    jint width,
    jint height,
    jint bitRate,
    jint frameRate,
    jint iFrameInterval,
    jint colorFormat) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_MediaCodecBridge_clazz,
      "createVideoEncoderFormat",

"("
"Ljava/lang/String;"
"I"
"I"
"I"
"I"
"I"
"I"
")"
"Landroid/media/MediaFormat;",
      &g_MediaCodecBridge_createVideoEncoderFormat);

  jobject ret =
    env->CallStaticObjectMethod(g_MediaCodecBridge_clazz,
      method_id, mime, width, height, bitRate, frameRate, iFrameInterval,
          colorFormat);
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_MediaCodecBridge_setCodecSpecificData = 0;
static void Java_MediaCodecBridge_setCodecSpecificData(JNIEnv* env, jobject
    format,
    jint index,
    jbyteArray bytes) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_MediaCodecBridge_clazz,
      "setCodecSpecificData",

"("
"Landroid/media/MediaFormat;"
"I"
"[B"
")"
"V",
      &g_MediaCodecBridge_setCodecSpecificData);

  env->CallStaticVoidMethod(g_MediaCodecBridge_clazz,
      method_id, format, index, bytes);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_MediaCodecBridge_setFrameHasADTSHeader = 0;
static void Java_MediaCodecBridge_setFrameHasADTSHeader(JNIEnv* env, jobject
    format) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_MediaCodecBridge_clazz,
      "setFrameHasADTSHeader",

"("
"Landroid/media/MediaFormat;"
")"
"V",
      &g_MediaCodecBridge_setFrameHasADTSHeader);

  env->CallStaticVoidMethod(g_MediaCodecBridge_clazz,
      method_id, format);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_MediaCodecBridge_configureAudio = 0;
static jboolean Java_MediaCodecBridge_configureAudio(JNIEnv* env, jobject obj,
    jobject format,
    jobject crypto,
    jint flags,
    jboolean playAudio) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "configureAudio",

"("
"Landroid/media/MediaFormat;"
"Landroid/media/MediaCrypto;"
"I"
"Z"
")"
"Z",
      &g_MediaCodecBridge_configureAudio);

  jboolean ret =
    env->CallBooleanMethod(obj,
      method_id, format, crypto, flags, playAudio);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_MediaCodecBridge_playOutputBuffer = 0;
static void Java_MediaCodecBridge_playOutputBuffer(JNIEnv* env, jobject obj,
    jbyteArray buf) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "playOutputBuffer",

"("
"[B"
")"
"V",
      &g_MediaCodecBridge_playOutputBuffer);

  env->CallVoidMethod(obj,
      method_id, buf);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_MediaCodecBridge_setVolume = 0;
static void Java_MediaCodecBridge_setVolume(JNIEnv* env, jobject obj, jdouble
    volume) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_MediaCodecBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_MediaCodecBridge_clazz,
      "setVolume",

"("
"D"
")"
"V",
      &g_MediaCodecBridge_setVolume);

  env->CallVoidMethod(obj,
      method_id, volume);
  base::android::CheckException(env);

}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_DequeueOutputResult_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kDequeueOutputResultClassPath).obj()));
  g_CodecInfo_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kCodecInfoClassPath).obj()));
  g_MediaCodecBridge_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kMediaCodecBridgeClassPath).obj()));
  g_DequeueInputResult_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kDequeueInputResultClassPath).obj()));
  return true;
}
}  // namespace media

#endif  // org_chromium_media_MediaCodecBridge_JNI
