import java.util.Scanner;

public class SumOfSeries {
    public static void main(String[] args) {
        Scanner giris = new Scanner(System.in);
        int n = giris.nextInt();
        double toplam = 0;

        if (n < 0) {
            System.out.println("İşlem Yapılamaz");
        } else {
            for (int i = 1; i < n; i++) {
                double islem = (double)((2 * i) + 1) / ((i * i) + 2);
                toplam += islem;
            }
            System.out.println(toplam);
        }
    }
}