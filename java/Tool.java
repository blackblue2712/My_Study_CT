public static class Tool{
    public static int ucln(int a, int b){
        if(b == 0) return a;
        ucln(b, a % b);
    }
}