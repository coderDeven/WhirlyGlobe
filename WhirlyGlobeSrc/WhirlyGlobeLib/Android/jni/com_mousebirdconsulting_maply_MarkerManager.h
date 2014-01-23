/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebirdconsulting_maply_MarkerManager */

#ifndef _Included_com_mousebirdconsulting_maply_MarkerManager
#define _Included_com_mousebirdconsulting_maply_MarkerManager
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebirdconsulting_maply_MarkerManager
 * Method:    addMarkers
 * Signature: ([Lcom/mousebirdconsulting/maply/InternalMarker;Lcom/mousebirdconsulting/maply/MarkerInfo;Lcom/mousebirdconsulting/maply/ChangeSet;)J
 */
JNIEXPORT jlong JNICALL Java_com_mousebirdconsulting_maply_MarkerManager_addMarkers
  (JNIEnv *, jobject, jobjectArray, jobject, jobject);

/*
 * Class:     com_mousebirdconsulting_maply_MarkerManager
 * Method:    removeMarkers
 * Signature: ([JLcom/mousebirdconsulting/maply/ChangeSet;)V
 */
JNIEXPORT void JNICALL Java_com_mousebirdconsulting_maply_MarkerManager_removeMarkers
  (JNIEnv *, jobject, jlongArray, jobject);

/*
 * Class:     com_mousebirdconsulting_maply_MarkerManager
 * Method:    initialise
 * Signature: (Lcom/mousebirdconsulting/maply/MapScene;)V
 */
JNIEXPORT void JNICALL Java_com_mousebirdconsulting_maply_MarkerManager_initialise
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebirdconsulting_maply_MarkerManager
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebirdconsulting_maply_MarkerManager_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif