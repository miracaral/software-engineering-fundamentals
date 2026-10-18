import java.util.Scanner;
import java.util.Random;

public class RandomGameV2{
    public static void main(String[] args)
    {
        System.out.println("bunu yazan tosun okuyana kosun") ;
        Random rnd = new Random();
        Scanner giris= new Scanner(System.in);
        int oyuncuPuan=0,bilgisayarPuan=0,sayi=0,sayiBilg=0;

        for(int i=0;i<3;i++)
        {
            System.out.println("1-6 arasinda bir sayi giriniz.");
            sayi = giris.nextInt();
            

            System.out.println("Bilgisayar bir secim yapacak: ");
            sayiBilg= rnd.nextInt(1,7);

            System.out.println("Oyuncunun tuttugu sayi: " + sayi);
            System.out.println("Bilgisayarin tuttugu sayi: " + sayiBilg);

            if(sayiBilg>sayi)
            {
                System.out.println("Bilgisayar kazandi");
                bilgisayarPuan++;
            }    
            else if(sayiBilg<sayi)
            {
                System.out.println("Oyuncu kazandi");
                oyuncuPuan++;
            }    
            else if(sayiBilg==sayi)
                System.out.println("Berabere");

            System.out.print("Bilgisayar puani: " + bilgisayarPuan+ "      ");
            System.out.println("Oyuncu puani: " + oyuncuPuan);

            if(i==2 && bilgisayarPuan==oyuncuPuan)
            {
                do
                {
                    System.out.println("1-6 arasinda bir sayi giriniz.");
                    sayi = giris.nextInt();
                    

                    System.out.println("Bilgisayar bir secim yapacak: ");
                    sayiBilg= rnd.nextInt(1,7);

                    System.out.println("Oyuncunun tuttugu sayi: " + sayi);
                    System.out.println("Bilgisayarin tuttugu sayi: " + sayiBilg);

                    if(sayiBilg>sayi)
                    {
                        System.out.println("Bilgisayar kazandi");
                        bilgisayarPuan++;
                    }    
                    else if(sayiBilg<sayi)
                    {
                        System.out.println("Oyuncu kazandi");
                        oyuncuPuan++;
                    }    
                    else if(sayiBilg==sayi)
                        System.out.println("Berabere");

                    System.out.print("Bilgisayar puani: " + bilgisayarPuan+ "      ");
                    System.out.println("Oyuncu puani: " + oyuncuPuan);

                }while(bilgisayarPuan == oyuncuPuan);
            }
        }

    }
}
  