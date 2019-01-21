//
// Created by qinyong on 2019/1/22.
//

#include <site_qinyong_ndkbuilddemo_JniTest.h>
#include <stdlib.h>
#include <stdio.h>

JNIEXPORT jstring JNICALL Java_site_qinyong_ndkbuilddemo_JniTest_getStrFromC
  (JNIEnv *env, jclass jclass){
   return (*env)->NewStringUTF(env,"This is My First NDK Application");
}