public class NativeRouting {

    static {
        System.loadLibrary("routing");
    }

    public static native int[] dijkstra();

    public static native int[] aStar();
}