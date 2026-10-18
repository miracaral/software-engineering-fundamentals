import java.util.Scanner;
import java.util.Random;

public class RandomArray{
    public static void main(String args[]){
        
        Random rnd = new Random();
        Scanner giris= new Scanner(System.in);
        int elemanSayisi=0;
        int [] sayilar;

        System.out.println("Kac elemanli olsun:");
        elemanSayisi=giris.nextInt();
        sayilar = new int[elemanSayisi];
        for(int i=0;i<elemanSayisi;i++)
        {
            System.out.println(i+1 + ". sayiyi giriniz");
            sayilar[i] = giris.nextInt();
        }
        System.out.println("Sayilar dizisinin elemanlari:");
        for(int i=0;i<elemanSayisi;i++)
        {
            System.out.println(i+1 + ". sayi " + sayilar[i]+ "  ");
        }
    }


}