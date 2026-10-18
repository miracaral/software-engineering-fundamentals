import java.util.Scanner;
public class AverageOfTwoV2
{
    public static void main(String[] args)
    {
        double sayi1,sayi2,ort;
        Scanner input = new Scanner(System.in);
        System.out.print("Birinci sayiyi giriniz: ");
        sayi1 = input.nextDouble();
        System.out.print("İkinci sayiyi giriniz: ");
        sayi2 = input.nextDouble();
        double toplam = sayi1 + sayi2;
        ort = toplam / 2;
        System.out.println("Ortalama: " + ort);

        if(ort >= 70)
        {
            System.out.println("Tebrikler, geçtiniz!");
        }
        else
        {
            System.out.println("Maalesef, kaldınız.");
        }
        
    }
}