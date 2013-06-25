#include <string.h>
#include <jni.h>

jstring
Java_com_blueeagle_example_testNDK_stringTestNdk( JNIEnv* env,
                                                  jobject thiz )
{
    return (*env)->NewStringUTF(env, "Hello Test NDK !");
}


jint
Java_com_eddy_testndk_TestNDK_add (JNIEnv* env, jobject thiz, jint a, jint b) {
	return (a+b)*100;
}
