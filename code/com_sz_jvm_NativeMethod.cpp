#include "../jni/com_sz_jvm_NativeMethod.h"
#include <stdlib.h>

JNIEXPORT jstring JNICALL Java_com_sz_jvm_NativeMethod_hello (JNIEnv * env, jclass jc)
{
    return env->NewStringUTF("Hello World from C++");
}

JNIEXPORT void JNICALL Java_com_sz_jvm_NativeMethod_world
  (JNIEnv * env, jobject job) {

    //获取方法所在的类的信息 对于当前案例来说便是NativeMethod类
    jclass jc = env->GetObjectClass(job);
    if(NULL == jc) {
        exit(-1);
    }
    printf("%s\n", jc);
    //获取其他类的信息
    jclass jstring = env->FindClass("java/lang/String");
    if(NULL == jstring) {
        exit(-1);
    }
    printf("%s\n", jstring);

    jmethodID constructor = env->GetMethodID(jstring, "<init>", "()V");

    //创建对象
    //只申请空间，只执行new，后面的还没执行
    jobject o1 = env->AllocObject(jc);

    jobject o2 = env->NewObject(jstring, constructor);
}

JNIEXPORT void JNICALL Java_com_sz_jvm_NativeMethod_field
    (JNIEnv * env, jobject job) {

    //获取类的元信息
    jclass jc = env->GetObjectClass(job);
    //获取属性的元信息 属性所在的类 属性名称 属性类型
    jfieldID jf = env->GetFieldID(jc, "num", "I");
    //获取属性的值
    jint value = env->GetIntField(job, jf);
    printf("%d\n", value);
    //修改
    env->SetIntField(job, jf, 20);
    //打印
    jint value2 = env->GetIntField(job, jf);
    printf("%d\n", value2);

}