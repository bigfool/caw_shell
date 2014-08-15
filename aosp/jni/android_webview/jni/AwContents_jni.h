// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/android_webview/AwContents

#ifndef org_chromium_android_webview_AwContents_JNI
#define org_chromium_android_webview_AwContents_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kAwContentsClassPath[] =
    "org/chromium/android_webview/AwContents";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_AwContents_clazz = NULL;
}  // namespace

namespace android_webview {

static jlong Init(JNIEnv* env, jclass clazz,
    jobject browserContext);

static void SetAwDrawSWFunctionTable(JNIEnv* env, jclass clazz,
    jint functionTablePointer);

static void SetAwDrawGLFunctionTable(JNIEnv* env, jclass clazz,
    jint functionTablePointer);

static jint GetAwDrawGLFunction(JNIEnv* env, jclass clazz);

static jint GetNativeInstanceCount(JNIEnv* env, jclass clazz);

static void SetShouldDownloadFavicons(JNIEnv* env, jclass clazz);

// Step 2: method stubs.
static void Destroy(JNIEnv* env, jobject obj,
    jlong nativeAwContents) {
  DCHECK(nativeAwContents) << "Destroy";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->Destroy(env, obj);
}

static void SetJavaPeers(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jobject awContents,
    jobject webViewWebContentsDelegate,
    jobject contentsClientBridge,
    jobject ioThreadClient,
    jobject navigationInterceptionDelegate) {
  DCHECK(nativeAwContents) << "SetJavaPeers";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->SetJavaPeers(env, obj, awContents, webViewWebContentsDelegate,
      contentsClientBridge, ioThreadClient, navigationInterceptionDelegate);
}

static jint GetWebContents(JNIEnv* env, jobject obj,
    jlong nativeAwContents) {
  DCHECK(nativeAwContents) << "GetWebContents";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->GetWebContents(env, obj);
}

static void DocumentHasImages(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jobject message) {
  DCHECK(nativeAwContents) << "DocumentHasImages";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->DocumentHasImages(env, obj, message);
}

static void GenerateMHTML(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jstring path,
    jobject callback) {
  DCHECK(nativeAwContents) << "GenerateMHTML";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->GenerateMHTML(env, obj, path, callback);
}

static void AddVisitedLinks(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jobjectArray visitedLinks) {
  DCHECK(nativeAwContents) << "AddVisitedLinks";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->AddVisitedLinks(env, obj, visitedLinks);
}

static jboolean OnDraw(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jobject canvas,
    jboolean isHardwareAccelerated,
    jint scrollX,
    jint scrollY,
    jint clipLeft,
    jint clipTop,
    jint clipRight,
    jint clipBottom) {
  DCHECK(nativeAwContents) << "OnDraw";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->OnDraw(env, obj, canvas, isHardwareAccelerated, scrollX,
      scrollY, clipLeft, clipTop, clipRight, clipBottom);
}

static void SetGlobalVisibleRect(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jint visibleLeft,
    jint visibleTop,
    jint visibleRight,
    jint visibleBottom) {
  DCHECK(nativeAwContents) << "SetGlobalVisibleRect";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->SetGlobalVisibleRect(env, obj, visibleLeft, visibleTop,
      visibleRight, visibleBottom);
}

static void FindAllAsync(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jstring searchString) {
  DCHECK(nativeAwContents) << "FindAllAsync";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->FindAllAsync(env, obj, searchString);
}

static void FindNext(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jboolean forward) {
  DCHECK(nativeAwContents) << "FindNext";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->FindNext(env, obj, forward);
}

static void ClearMatches(JNIEnv* env, jobject obj,
    jlong nativeAwContents) {
  DCHECK(nativeAwContents) << "ClearMatches";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->ClearMatches(env, obj);
}

static void ClearCache(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jboolean includeDiskFiles) {
  DCHECK(nativeAwContents) << "ClearCache";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->ClearCache(env, obj, includeDiskFiles);
}

static jbyteArray GetCertificate(JNIEnv* env, jobject obj,
    jlong nativeAwContents) {
  DCHECK(nativeAwContents) << "GetCertificate";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->GetCertificate(env, obj).Release();
}

static void RequestNewHitTestDataAt(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jint x,
    jint y) {
  DCHECK(nativeAwContents) << "RequestNewHitTestDataAt";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->RequestNewHitTestDataAt(env, obj, x, y);
}

static void UpdateLastHitTestData(JNIEnv* env, jobject obj,
    jlong nativeAwContents) {
  DCHECK(nativeAwContents) << "UpdateLastHitTestData";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->UpdateLastHitTestData(env, obj);
}

static void OnSizeChanged(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jint w,
    jint h,
    jint ow,
    jint oh) {
  DCHECK(nativeAwContents) << "OnSizeChanged";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->OnSizeChanged(env, obj, w, h, ow, oh);
}

static void ScrollTo(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jint x,
    jint y) {
  DCHECK(nativeAwContents) << "ScrollTo";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->ScrollTo(env, obj, x, y);
}

static void SetViewVisibility(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jboolean visible) {
  DCHECK(nativeAwContents) << "SetViewVisibility";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->SetViewVisibility(env, obj, visible);
}

static void SetWindowVisibility(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jboolean visible) {
  DCHECK(nativeAwContents) << "SetWindowVisibility";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->SetWindowVisibility(env, obj, visible);
}

static void SetIsPaused(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jboolean paused) {
  DCHECK(nativeAwContents) << "SetIsPaused";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->SetIsPaused(env, obj, paused);
}

static void OnAttachedToWindow(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jint w,
    jint h) {
  DCHECK(nativeAwContents) << "OnAttachedToWindow";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->OnAttachedToWindow(env, obj, w, h);
}

static void OnDetachedFromWindow(JNIEnv* env, jobject obj,
    jlong nativeAwContents) {
  DCHECK(nativeAwContents) << "OnDetachedFromWindow";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->OnDetachedFromWindow(env, obj);
}

static void SetDipScale(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jfloat dipScale) {
  DCHECK(nativeAwContents) << "SetDipScale";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->SetDipScale(env, obj, dipScale);
}

static void SetFixedLayoutSize(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jint widthDip,
    jint heightDip) {
  DCHECK(nativeAwContents) << "SetFixedLayoutSize";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->SetFixedLayoutSize(env, obj, widthDip, heightDip);
}

static jbyteArray GetOpaqueState(JNIEnv* env, jobject obj,
    jlong nativeAwContents) {
  DCHECK(nativeAwContents) << "GetOpaqueState";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->GetOpaqueState(env, obj).Release();
}

static jboolean RestoreFromOpaqueState(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jbyteArray state) {
  DCHECK(nativeAwContents) << "RestoreFromOpaqueState";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->RestoreFromOpaqueState(env, obj, state);
}

static jint ReleasePopupAwContents(JNIEnv* env, jobject obj,
    jlong nativeAwContents) {
  DCHECK(nativeAwContents) << "ReleasePopupAwContents";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->ReleasePopupAwContents(env, obj);
}

static void FocusFirstNode(JNIEnv* env, jobject obj,
    jlong nativeAwContents) {
  DCHECK(nativeAwContents) << "FocusFirstNode";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->FocusFirstNode(env, obj);
}

static void SetBackgroundColor(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jint color) {
  DCHECK(nativeAwContents) << "SetBackgroundColor";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->SetBackgroundColor(env, obj, color);
}

static jint GetAwDrawGLViewContext(JNIEnv* env, jobject obj,
    jlong nativeAwContents) {
  DCHECK(nativeAwContents) << "GetAwDrawGLViewContext";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->GetAwDrawGLViewContext(env, obj);
}

static jlong CapturePicture(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jint width,
    jint height) {
  DCHECK(nativeAwContents) << "CapturePicture";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->CapturePicture(env, obj, width, height);
}

static void EnableOnNewPicture(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jboolean enabled) {
  DCHECK(nativeAwContents) << "EnableOnNewPicture";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->EnableOnNewPicture(env, obj, enabled);
}

static void SetExtraHeadersForUrl(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jstring url,
    jstring extraHeaders) {
  DCHECK(nativeAwContents) << "SetExtraHeadersForUrl";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->SetExtraHeadersForUrl(env, obj, url, extraHeaders);
}

static void InvokeGeolocationCallback(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jboolean value,
    jstring requestingFrame) {
  DCHECK(nativeAwContents) << "InvokeGeolocationCallback";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->InvokeGeolocationCallback(env, obj, value, requestingFrame);
}

static void SetJsOnlineProperty(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jboolean networkUp) {
  DCHECK(nativeAwContents) << "SetJsOnlineProperty";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->SetJsOnlineProperty(env, obj, networkUp);
}

static void TrimMemory(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jint level) {
  DCHECK(nativeAwContents) << "TrimMemory";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->TrimMemory(env, obj, level);
}

static void CreatePdfExporter(JNIEnv* env, jobject obj,
    jlong nativeAwContents,
    jobject awPdfExporter) {
  DCHECK(nativeAwContents) << "CreatePdfExporter";
  AwContents* native = reinterpret_cast<AwContents*>(nativeAwContents);
  return native->CreatePdfExporter(env, obj, awPdfExporter);
}

static base::subtle::AtomicWord g_AwContents_updateGlobalVisibleRect = 0;
static void Java_AwContents_updateGlobalVisibleRect(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "updateGlobalVisibleRect",

"("
")"
"V",
      &g_AwContents_updateGlobalVisibleRect);

  env->CallVoidMethod(obj,
      method_id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_onDocumentHasImagesResponse = 0;
static void Java_AwContents_onDocumentHasImagesResponse(JNIEnv* env, jboolean
    result,
    jobject message) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_AwContents_clazz,
      "onDocumentHasImagesResponse",

"("
"Z"
"Landroid/os/Message;"
")"
"V",
      &g_AwContents_onDocumentHasImagesResponse);

  env->CallStaticVoidMethod(g_AwContents_clazz,
      method_id, result, message);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_onReceivedTouchIconUrl = 0;
static void Java_AwContents_onReceivedTouchIconUrl(JNIEnv* env, jobject obj,
    jstring url,
    jboolean precomposed) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "onReceivedTouchIconUrl",

"("
"Ljava/lang/String;"
"Z"
")"
"V",
      &g_AwContents_onReceivedTouchIconUrl);

  env->CallVoidMethod(obj,
      method_id, url, precomposed);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_onReceivedIcon = 0;
static void Java_AwContents_onReceivedIcon(JNIEnv* env, jobject obj, jobject
    bitmap) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "onReceivedIcon",

"("
"Landroid/graphics/Bitmap;"
")"
"V",
      &g_AwContents_onReceivedIcon);

  env->CallVoidMethod(obj,
      method_id, bitmap);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_generateMHTMLCallback = 0;
static void Java_AwContents_generateMHTMLCallback(JNIEnv* env, jstring path,
    jlong size,
    jobject callback) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_AwContents_clazz,
      "generateMHTMLCallback",

"("
"Ljava/lang/String;"
"J"
"Lcom/uc/webkit/ValueCallback;"
")"
"V",
      &g_AwContents_generateMHTMLCallback);

  env->CallStaticVoidMethod(g_AwContents_clazz,
      method_id, path, size, callback);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_onReceivedHttpAuthRequest = 0;
static void Java_AwContents_onReceivedHttpAuthRequest(JNIEnv* env, jobject obj,
    jobject handler,
    jstring host,
    jstring realm) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "onReceivedHttpAuthRequest",

"("
"Lorg/chromium/android_webview/AwHttpAuthHandler;"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V",
      &g_AwContents_onReceivedHttpAuthRequest);

  env->CallVoidMethod(obj,
      method_id, handler, host, realm);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_onGeolocationPermissionsShowPrompt
    = 0;
static void Java_AwContents_onGeolocationPermissionsShowPrompt(JNIEnv* env,
    jobject obj, jstring origin) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "onGeolocationPermissionsShowPrompt",

"("
"Ljava/lang/String;"
")"
"V",
      &g_AwContents_onGeolocationPermissionsShowPrompt);

  env->CallVoidMethod(obj,
      method_id, origin);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_onGeolocationPermissionsHidePrompt
    = 0;
static void Java_AwContents_onGeolocationPermissionsHidePrompt(JNIEnv* env,
    jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "onGeolocationPermissionsHidePrompt",

"("
")"
"V",
      &g_AwContents_onGeolocationPermissionsHidePrompt);

  env->CallVoidMethod(obj,
      method_id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_onFindResultReceived = 0;
static void Java_AwContents_onFindResultReceived(JNIEnv* env, jobject obj, jint
    activeMatchOrdinal,
    jint numberOfMatches,
    jboolean isDoneCounting) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "onFindResultReceived",

"("
"I"
"I"
"Z"
")"
"V",
      &g_AwContents_onFindResultReceived);

  env->CallVoidMethod(obj,
      method_id, activeMatchOrdinal, numberOfMatches, isDoneCounting);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_onNewPicture = 0;
static void Java_AwContents_onNewPicture(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "onNewPicture",

"("
")"
"V",
      &g_AwContents_onNewPicture);

  env->CallVoidMethod(obj,
      method_id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_updateHitTestData = 0;
static void Java_AwContents_updateHitTestData(JNIEnv* env, jobject obj, jint
    type,
    jstring extra,
    jstring href,
    jstring anchorText,
    jstring imgSrc) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "updateHitTestData",

"("
"I"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V",
      &g_AwContents_updateHitTestData);

  env->CallVoidMethod(obj,
      method_id, type, extra, href, anchorText, imgSrc);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_requestDrawGL = 0;
static jboolean Java_AwContents_requestDrawGL(JNIEnv* env, jobject obj, jobject
    canvas) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "requestDrawGL",

"("
"Landroid/graphics/Canvas;"
")"
"Z",
      &g_AwContents_requestDrawGL);

  jboolean ret =
    env->CallBooleanMethod(obj,
      method_id, canvas);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_AwContents_postInvalidateOnAnimation = 0;
static void Java_AwContents_postInvalidateOnAnimation(JNIEnv* env, jobject obj)
    {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "postInvalidateOnAnimation",

"("
")"
"V",
      &g_AwContents_postInvalidateOnAnimation);

  env->CallVoidMethod(obj,
      method_id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_getLocationOnScreen = 0;
static ScopedJavaLocalRef<jintArray> Java_AwContents_getLocationOnScreen(JNIEnv*
    env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "getLocationOnScreen",

"("
")"
"[I",
      &g_AwContents_getLocationOnScreen);

  jintArray ret =
    static_cast<jintArray>(env->CallObjectMethod(obj,
      method_id));
  base::android::CheckException(env);
  return ScopedJavaLocalRef<jintArray>(env, ret);
}

static base::subtle::AtomicWord g_AwContents_onWebLayoutPageScaleFactorChanged =
    0;
static void Java_AwContents_onWebLayoutPageScaleFactorChanged(JNIEnv* env,
    jobject obj, jfloat webLayoutPageScaleFactor) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "onWebLayoutPageScaleFactorChanged",

"("
"F"
")"
"V",
      &g_AwContents_onWebLayoutPageScaleFactorChanged);

  env->CallVoidMethod(obj,
      method_id, webLayoutPageScaleFactor);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_onWebLayoutContentsSizeChanged = 0;
static void Java_AwContents_onWebLayoutContentsSizeChanged(JNIEnv* env, jobject
    obj, jint widthCss,
    jint heightCss) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "onWebLayoutContentsSizeChanged",

"("
"I"
"I"
")"
"V",
      &g_AwContents_onWebLayoutContentsSizeChanged);

  env->CallVoidMethod(obj,
      method_id, widthCss, heightCss);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_setMaxContainerViewScrollOffset =
    0;
static void Java_AwContents_setMaxContainerViewScrollOffset(JNIEnv* env, jobject
    obj, jint maxX,
    jint maxY) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "setMaxContainerViewScrollOffset",

"("
"I"
"I"
")"
"V",
      &g_AwContents_setMaxContainerViewScrollOffset);

  env->CallVoidMethod(obj,
      method_id, maxX, maxY);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_scrollContainerViewTo = 0;
static void Java_AwContents_scrollContainerViewTo(JNIEnv* env, jobject obj, jint
    x,
    jint y) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "scrollContainerViewTo",

"("
"I"
"I"
")"
"V",
      &g_AwContents_scrollContainerViewTo);

  env->CallVoidMethod(obj,
      method_id, x, y);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_isFlingActive = 0;
static jboolean Java_AwContents_isFlingActive(JNIEnv* env, jobject obj) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "isFlingActive",

"("
")"
"Z",
      &g_AwContents_isFlingActive);

  jboolean ret =
    env->CallBooleanMethod(obj,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_AwContents_setContentsSize = 0;
static void Java_AwContents_setContentsSize(JNIEnv* env, jobject obj, jint
    widthDip,
    jint heightDip) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "setContentsSize",

"("
"I"
"I"
")"
"V",
      &g_AwContents_setContentsSize);

  env->CallVoidMethod(obj,
      method_id, widthDip, heightDip);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_setPageScaleFactor = 0;
static void Java_AwContents_setPageScaleFactor(JNIEnv* env, jobject obj, jfloat
    pageScaleFactor) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "setPageScaleFactor",

"("
"F"
")"
"V",
      &g_AwContents_setPageScaleFactor);

  env->CallVoidMethod(obj,
      method_id, pageScaleFactor);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_setAwAutofillManagerDelegate = 0;
static void Java_AwContents_setAwAutofillManagerDelegate(JNIEnv* env, jobject
    obj, jobject delegate) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "setAwAutofillManagerDelegate",

"("
"Lorg/chromium/android_webview/AwAutofillManagerDelegate;"
")"
"V",
      &g_AwContents_setAwAutofillManagerDelegate);

  env->CallVoidMethod(obj,
      method_id, delegate);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContents_didOverscroll = 0;
static void Java_AwContents_didOverscroll(JNIEnv* env, jobject obj, jint deltaX,
    jint deltaY) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContents_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContents_clazz,
      "didOverscroll",

"("
"I"
"I"
")"
"V",
      &g_AwContents_didOverscroll);

  env->CallVoidMethod(obj,
      method_id, deltaX, deltaY);
  base::android::CheckException(env);

}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_AwContents_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kAwContentsClassPath).obj()));
  static const JNINativeMethod kMethodsAwContents[] = {
    { "nativeInit",
"("
"Lorg/chromium/android_webview/AwBrowserContext;"
")"
"J", reinterpret_cast<void*>(Init) },
    { "nativeDestroy",
"("
"J"
")"
"V", reinterpret_cast<void*>(Destroy) },
    { "nativeSetAwDrawSWFunctionTable",
"("
"I"
")"
"V", reinterpret_cast<void*>(SetAwDrawSWFunctionTable) },
    { "nativeSetAwDrawGLFunctionTable",
"("
"I"
")"
"V", reinterpret_cast<void*>(SetAwDrawGLFunctionTable) },
    { "nativeGetAwDrawGLFunction",
"("
")"
"I", reinterpret_cast<void*>(GetAwDrawGLFunction) },
    { "nativeGetNativeInstanceCount",
"("
")"
"I", reinterpret_cast<void*>(GetNativeInstanceCount) },
    { "nativeSetShouldDownloadFavicons",
"("
")"
"V", reinterpret_cast<void*>(SetShouldDownloadFavicons) },
    { "nativeSetJavaPeers",
"("
"J"
"Lorg/chromium/android_webview/AwContents;"
"Lorg/chromium/android_webview/AwWebContentsDelegate;"
"Lorg/chromium/android_webview/AwContentsClientBridge;"
"Lorg/chromium/android_webview/AwContentsIoThreadClient;"
"Lorg/chromium/components/navigation_interception/InterceptNavigationDelegate;"
")"
"V", reinterpret_cast<void*>(SetJavaPeers) },
    { "nativeGetWebContents",
"("
"J"
")"
"I", reinterpret_cast<void*>(GetWebContents) },
    { "nativeDocumentHasImages",
"("
"J"
"Landroid/os/Message;"
")"
"V", reinterpret_cast<void*>(DocumentHasImages) },
    { "nativeGenerateMHTML",
"("
"J"
"Ljava/lang/String;"
"Lcom/uc/webkit/ValueCallback;"
")"
"V", reinterpret_cast<void*>(GenerateMHTML) },
    { "nativeAddVisitedLinks",
"("
"J"
"[Ljava/lang/String;"
")"
"V", reinterpret_cast<void*>(AddVisitedLinks) },
    { "nativeOnDraw",
"("
"J"
"Landroid/graphics/Canvas;"
"Z"
"I"
"I"
"I"
"I"
"I"
"I"
")"
"Z", reinterpret_cast<void*>(OnDraw) },
    { "nativeSetGlobalVisibleRect",
"("
"J"
"I"
"I"
"I"
"I"
")"
"V", reinterpret_cast<void*>(SetGlobalVisibleRect) },
    { "nativeFindAllAsync",
"("
"J"
"Ljava/lang/String;"
")"
"V", reinterpret_cast<void*>(FindAllAsync) },
    { "nativeFindNext",
"("
"J"
"Z"
")"
"V", reinterpret_cast<void*>(FindNext) },
    { "nativeClearMatches",
"("
"J"
")"
"V", reinterpret_cast<void*>(ClearMatches) },
    { "nativeClearCache",
"("
"J"
"Z"
")"
"V", reinterpret_cast<void*>(ClearCache) },
    { "nativeGetCertificate",
"("
"J"
")"
"[B", reinterpret_cast<void*>(GetCertificate) },
    { "nativeRequestNewHitTestDataAt",
"("
"J"
"I"
"I"
")"
"V", reinterpret_cast<void*>(RequestNewHitTestDataAt) },
    { "nativeUpdateLastHitTestData",
"("
"J"
")"
"V", reinterpret_cast<void*>(UpdateLastHitTestData) },
    { "nativeOnSizeChanged",
"("
"J"
"I"
"I"
"I"
"I"
")"
"V", reinterpret_cast<void*>(OnSizeChanged) },
    { "nativeScrollTo",
"("
"J"
"I"
"I"
")"
"V", reinterpret_cast<void*>(ScrollTo) },
    { "nativeSetViewVisibility",
"("
"J"
"Z"
")"
"V", reinterpret_cast<void*>(SetViewVisibility) },
    { "nativeSetWindowVisibility",
"("
"J"
"Z"
")"
"V", reinterpret_cast<void*>(SetWindowVisibility) },
    { "nativeSetIsPaused",
"("
"J"
"Z"
")"
"V", reinterpret_cast<void*>(SetIsPaused) },
    { "nativeOnAttachedToWindow",
"("
"J"
"I"
"I"
")"
"V", reinterpret_cast<void*>(OnAttachedToWindow) },
    { "nativeOnDetachedFromWindow",
"("
"J"
")"
"V", reinterpret_cast<void*>(OnDetachedFromWindow) },
    { "nativeSetDipScale",
"("
"J"
"F"
")"
"V", reinterpret_cast<void*>(SetDipScale) },
    { "nativeSetFixedLayoutSize",
"("
"J"
"I"
"I"
")"
"V", reinterpret_cast<void*>(SetFixedLayoutSize) },
    { "nativeGetOpaqueState",
"("
"J"
")"
"[B", reinterpret_cast<void*>(GetOpaqueState) },
    { "nativeRestoreFromOpaqueState",
"("
"J"
"[B"
")"
"Z", reinterpret_cast<void*>(RestoreFromOpaqueState) },
    { "nativeReleasePopupAwContents",
"("
"J"
")"
"I", reinterpret_cast<void*>(ReleasePopupAwContents) },
    { "nativeFocusFirstNode",
"("
"J"
")"
"V", reinterpret_cast<void*>(FocusFirstNode) },
    { "nativeSetBackgroundColor",
"("
"J"
"I"
")"
"V", reinterpret_cast<void*>(SetBackgroundColor) },
    { "nativeGetAwDrawGLViewContext",
"("
"J"
")"
"I", reinterpret_cast<void*>(GetAwDrawGLViewContext) },
    { "nativeCapturePicture",
"("
"J"
"I"
"I"
")"
"J", reinterpret_cast<void*>(CapturePicture) },
    { "nativeEnableOnNewPicture",
"("
"J"
"Z"
")"
"V", reinterpret_cast<void*>(EnableOnNewPicture) },
    { "nativeSetExtraHeadersForUrl",
"("
"J"
"Ljava/lang/String;"
"Ljava/lang/String;"
")"
"V", reinterpret_cast<void*>(SetExtraHeadersForUrl) },
    { "nativeInvokeGeolocationCallback",
"("
"J"
"Z"
"Ljava/lang/String;"
")"
"V", reinterpret_cast<void*>(InvokeGeolocationCallback) },
    { "nativeSetJsOnlineProperty",
"("
"J"
"Z"
")"
"V", reinterpret_cast<void*>(SetJsOnlineProperty) },
    { "nativeTrimMemory",
"("
"J"
"I"
")"
"V", reinterpret_cast<void*>(TrimMemory) },
    { "nativeCreatePdfExporter",
"("
"J"
"Lorg/chromium/android_webview/AwPdfExporter;"
")"
"V", reinterpret_cast<void*>(CreatePdfExporter) },
  };
  const int kMethodsAwContentsSize = arraysize(kMethodsAwContents);

  if (env->RegisterNatives(g_AwContents_clazz,
                           kMethodsAwContents,
                           kMethodsAwContentsSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}
}  // namespace android_webview

#endif  // org_chromium_android_webview_AwContents_JNI
