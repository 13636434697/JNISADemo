/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_binbin_testjni_myJNI */
//新建一个jni文件夹，新建main.c，把.h里面的内容复制进去，并实现里面的函数。

#ifndef _Included_com_example_binbin_testjni_myJNI
#define _Included_com_example_binbin_testjni_myJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_binbin_testjni_myJNI
 * Method:    sayHello
 * Signature: ()Ljava/lang/String;
 */

//就实现了个函数 JNIEnv的用法可以自行百度，这里就不展开了
JNIEXPORT jstring JNICALL Java_com_xu_jnisademo_myJNI_saHello(JNIEnv *env, jclass jobj){

    //返回一句话
    return (*env)->NewStringUTF(env, "这里是c的代码");
}
#ifdef __cplusplus
}
#endif
#endif