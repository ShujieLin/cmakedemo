package com.linshujie.module_b;

public class NativeLib {

    // Used to load the 'module_b' library on application startup.
    static {
        System.loadLibrary("module_b");
    }

    /**
     * A native method that is implemented by the 'module_b' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
}