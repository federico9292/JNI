#include <jni.h>
#include <stdio.h>
#include "JNIQuadrato.h"

JNIEXPORT jlong JNICALL Java_JNI_quadratoSomma(JNIEnv *, jobject, jintArray array)
{

    JNIEnv *env;
    jint *intArray;
    jint *body;
    int sum = 0;
    int i = 0;
    jsize len;

    len = env->GetArrayLength(array);
    body = env->GetIntArrayElements(array, 0);

    for (i = 0; i < len; i++)
    {
        sum += body[i];
    }
    sum = sum * sum;
    env->ReleaseIntArrayElements(array, body, 0);

    return sum;
}

/* {

    int i = 0;
    long sum = 0;

    jsize len = env->GetArrayLength(jintArray);
    jint *body = env->GetIntArrayElements(jintArray, 0);
    for (i = 0; i < len; i++)
    {
        sum += body[i];
    }
    sum = sum * sum;
    printf('il quadrato: ', jlong);
    return jlong;
} */