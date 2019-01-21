package site.qinyong.ndkbuilddemo;

/**
 * @author mac
 * @time 2019/1/22 上午1:18
 * @des ${TODO}
 */
public class JniTest {

    static {
        System.loadLibrary("myLib");
    }

    public static native String getStrFromC();
}




