import java.util.Scanner;
public class AverageOfTwo {
    public static void main(String[] args) {
        double a, b, ort;
        Scanner input = new Scanner(System.in);
        System.out.print("Birinci sayiyi giriniz: ");
        a = input.nextDouble();

        System.out.print("İkinci sayiyi giriniz: ");
        b = input.nextDouble();
        double toplam = a + b;
        ort = toplam / 2;
        System.out.println("Ortalama: " + ort);
    }
}