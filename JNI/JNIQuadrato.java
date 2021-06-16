public class JNIQuadrato {
    static {
        System.loadLibrary("myjni");
    }

    // Dichiaro un metodo nativo quadratoSomma che riceve un array di int
    // e restituisce il quadrato della somma dell'array.
    private native long quadratoSomma(int[] array);

    // Test Driver
    public static void main(String args[]) {
        int[] array = { 12, 34, 56 };
        long risultato = new JNIQuadrato().quadratoSomma(array);
        System.out.println("il quadrato della somma degli elementi dell'array : " + risultato);
    }
}