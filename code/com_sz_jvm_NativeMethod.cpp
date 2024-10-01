#include "../jni/com_sz_jvm_NativeMethod.h"
JNIEXPORT jstring JNICALL Java_com_sz_jvm_NativeMethod_hello (JNIEnv * env, jclass jc)
{
    return env->NewStringUTF("Hello World from C++");
}
