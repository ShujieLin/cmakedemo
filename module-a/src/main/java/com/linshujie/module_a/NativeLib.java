package com.linshujie.module_a;

public class NativeLib {

    // Used to load the 'module_a' library on application startup.
    static {
        System.loadLibrary("module_a");
    }

    /**
     * A native method that is implemented by the 'module_a' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}