import java.util.Scanner;
public class NumberAnalysis{
    public static void main(String[] args) {
        System.out.println("Bir sayı giriniz: ");
        Scanner giris = new Scanner(System.in);
        int n = giris.nextInt();
        if(armstrongSayiMi(n))
            System.out.println(n + " bir armstrong sayısıdır.");
        else
            System.out.println(n + " bir armstrong sayısı değildir.");
    }
    public static boolean armstrongSayiMi(int n)
    {
        int sayi,kupDegeri=0;
        String stringSayi = String.valueOf(n);
        int basamakSayisi = stringSayi.length();
        int toplam = 0;
        for(int i = 0; i < basamakSayisi; i++)
        {
            kupDegeri = kupDegeri + Character.getNumericValue(stringSayi.charAt(i)) * Character.getNumericValue(stringSayi.charAt(i)) * Character.getNumericValue(stringSayi.charAt(i));
        }
        if(kupDegeri == n)
            return true;
        else
            return false;
    }
}