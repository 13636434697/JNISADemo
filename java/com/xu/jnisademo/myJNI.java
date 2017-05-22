package com.xu.jnisademo;

/**
 * 1、新建一个类，声明native方法。这个类是java与C/C++交互的中介，方法由java声明，由C/C++实现。

 不在Activity类里面写是为了避免编译时报错：找不到android.support.v7.app.AppCompatActivity
 */
public class myJNI {

    //加载so库
    static{
        System.loadLibrary("JniTest");
    }

    //native方法
    public static native String saHello();
}
