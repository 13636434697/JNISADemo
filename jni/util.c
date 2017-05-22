//还要在jni文件夹下添加一个空白的util.c文件，不然会报错，我也不知道为什么。
//但是这里没有报错，不添加也不要紧

//这里就写步骤好了：
/*
 * 配置NDK

打开Project的local.properties文件添加NDK路径
 *
 *
 * 打开app Module的build.gradle文件，在defaultConfig节点里添加以下代码
注意这里的moduleName，是我们在之前自己编写的类里面加载的so库名
 ndk {
            moduleName "JniTest"
            ldLibs "log", "z", "m"
            abiFilters "armeabi", "armeabi-v7a", "x86"
        }
还要在gradle.properties里面加上这么一句话：
android.useDeprecatedNdk=true


 生成SO库

完成以上步骤之后，我们rebuild一下就可以生成so库了

在项目的app\build\intermediates\ndk\debug\lib路径下

 配置so库

在src\main下新建文件夹jniLIB，并将生成的SO文件拷贝到该文件夹下

 使用JNI

因为native方法声明成了静态的方法，在Activity里面直接调用myJNI类就行
 protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);


        text = (TextView)findViewById(R.id.text);
　　　　　//调用
        text.setText(myJNI.sayHello());

    }
}
 * */
