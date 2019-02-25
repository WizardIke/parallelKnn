/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class xdev_mxdev_MXDevice */

#ifndef _Included_xdev_mxdev_MXDevice
#define _Included_xdev_mxdev_MXDevice
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     xdev_mxdev_MXDevice
 * Method:    nativeInit
 * Signature: ([Ljava/lang/String;I[Ljava/lang/String;[II[Lxdev/mxdev/MXProcessID;JJ)V
 */
JNIEXPORT void JNICALL Java_xdev_mxdev_MXDevice_nativeInit
  (JNIEnv *, jobject, jobjectArray, jint, jobjectArray, jintArray, jint, jobjectArray, jlong, jlong);

/*
 * Class:     xdev_mxdev_MXDevice
 * Method:    nativeIsend
 * Signature: (Lmpjbuf/Buffer;Lxdev/ProcessID;IIIILxdev/mxdev/MXSendRequest;I)V
 */
JNIEXPORT void JNICALL Java_xdev_mxdev_MXDevice_nativeIsend
  (JNIEnv *, jobject, jobject, jobject, jint, jint, jint, jint, jobject, jint);

/*
 * Class:     xdev_mxdev_MXDevice
 * Method:    nativeSend
 * Signature: (Lmpjbuf/Buffer;Lxdev/ProcessID;IIII)V
 */
JNIEXPORT void JNICALL Java_xdev_mxdev_MXDevice_nativeSend
  (JNIEnv *, jobject, jobject, jobject, jint, jint, jint, jint);

/*
 * Class:     xdev_mxdev_MXDevice
 * Method:    nativeIssend
 * Signature: (Lmpjbuf/Buffer;Lxdev/ProcessID;IIIILxdev/mxdev/MXSendRequest;)V
 */
JNIEXPORT void JNICALL Java_xdev_mxdev_MXDevice_nativeIssend
  (JNIEnv *, jobject, jobject, jobject, jint, jint, jint, jint, jobject);

/*
 * Class:     xdev_mxdev_MXDevice
 * Method:    nativeSsend
 * Signature: (Lmpjbuf/Buffer;Lxdev/ProcessID;IIII)V
 */
JNIEXPORT void JNICALL Java_xdev_mxdev_MXDevice_nativeSsend
  (JNIEnv *, jobject, jobject, jobject, jint, jint, jint, jint);

/*
 * Class:     xdev_mxdev_MXDevice
 * Method:    nativeIrecv
 * Signature: (Lmpjbuf/Buffer;Lxdev/ProcessID;IILmpjdev/Status;Lxdev/mxdev/MXRecvRequest;I)V
 */
JNIEXPORT void JNICALL Java_xdev_mxdev_MXDevice_nativeIrecv
  (JNIEnv *, jobject, jobject, jobject, jint, jint, jobject, jobject, jint);

/*
 * Class:     xdev_mxdev_MXDevice
 * Method:    nativeRecv
 * Signature: (Lmpjbuf/Buffer;Lxdev/ProcessID;IILmpjdev/Status;I)V
 */
JNIEXPORT void JNICALL Java_xdev_mxdev_MXDevice_nativeRecv
  (JNIEnv *, jobject, jobject, jobject, jint, jint, jobject, jint);

/*
 * Class:     xdev_mxdev_MXDevice
 * Method:    nativeProbe
 * Signature: (Lxdev/ProcessID;IILmpjdev/Status;I)V
 */
JNIEXPORT void JNICALL Java_xdev_mxdev_MXDevice_nativeProbe
  (JNIEnv *, jobject, jobject, jint, jint, jobject, jint);

/*
 * Class:     xdev_mxdev_MXDevice
 * Method:    nativeIprobe
 * Signature: (Lxdev/ProcessID;IILmpjdev/Status;II)I
 */
JNIEXPORT jint JNICALL Java_xdev_mxdev_MXDevice_nativeIprobe
  (JNIEnv *, jobject, jobject, jint, jint, jobject, jint, jint);

/*
 * Class:     xdev_mxdev_MXDevice
 * Method:    nativePeek
 * Signature: (Lmpjdev/Status;)J
 */
JNIEXPORT jlong JNICALL Java_xdev_mxdev_MXDevice_nativePeek
  (JNIEnv *, jobject, jobject);

/*
 * Class:     xdev_mxdev_MXDevice
 * Method:    deletePeekedRequest
 * Signature: (Lxdev/mxdev/MXRequest;J)V
 */
JNIEXPORT void JNICALL Java_xdev_mxdev_MXDevice_deletePeekedRequest
  (JNIEnv *, jclass, jobject, jlong);

/*
 * Class:     xdev_mxdev_MXDevice
 * Method:    nativeFinish
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_xdev_mxdev_MXDevice_nativeFinish
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
