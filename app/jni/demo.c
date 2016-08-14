//
// Created by FAN on 2016/8/14.
//
#include "stdio.h"
#include "string.h"
#include <jni.h>

jstring Java_com_fan_thfirst_MainActivity_getStrFromJNI
  (JNIEnv *env,jobject thiz)
  {
     return (*env)->NewStringUTF(env, "I`m Str !");
  }
