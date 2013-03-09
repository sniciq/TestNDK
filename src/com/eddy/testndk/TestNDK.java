package com.eddy.testndk;

public class TestNDK {
	
	public native String stringTestNdk();
	public native int add(int a, int b);
  
    static {  
        System.loadLibrary("testNDK");  
    }

}
