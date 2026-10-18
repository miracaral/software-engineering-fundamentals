public class RecursiveCalculation {
    public static void main(String[] args) {
        islemiHesapla(3,8);
    }
    public static int islemiHesapla(int m,int n)
    {
        if(m < 1 || n < 1)
            return -1;
        else if(m == 1)
        {
            return ((1+1) * (1+1)) * (n * n);
        }
        else
            return (((m + 1) * (m + 1)) * (n * n) + islemiHesapla(m-1,n));
    }
}