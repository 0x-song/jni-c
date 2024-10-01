#include "../jni/com_sz_jvm_JavaThread.h"
    /*
     * Class:     com_sz_jvm_NativeMethod
     * Method:    world
     * Signature: ()V
     */
JNIEXPORT void JNICALL Java_com_sz_jvm_JavaThread_start0
  (JNIEnv * env, jobject obj){

      //获取类的元信息
      jclass jc = env->GetObjectClass(obj);

      //获取方法信息
      jmethodID run = env->GetMethodID(jc, "run", "()V");

      //调用方法
      env->CallVoidMethod(obj, run);
  }

