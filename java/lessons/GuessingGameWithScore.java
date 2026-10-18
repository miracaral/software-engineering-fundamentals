import java.util.Scanner;
import java.util.Random;

public class GuessingGameWithScore
{
    int kasa=0;
    int tur=0;
    int tutulanSayi=0;
    public static void main(String args[]){

        Random rnd= new Random();
        Scanner giris=new Scanner(System.in);

        int tutulanSayi= rnd.nextInt(1,10);
        
        System.out.println(tutulanSayi);
        int kasa=tutulanSayi;

        System.out.println("Kac sefer daha tutam");
        int tur=giris.nextInt();

        int[] tutulanSayi2 = new int[tur];

        System.out.println("Degerler:");
        for(int i=0;i<tur;i++)
        {
            tutulanSayi2[i] = rnd.nextInt(1,10);
            System.out.println(tutulanSayi2[i]);
            kasa = kasa + tutulanSayi2[i];
        }

        if(kasa>=35 && kasa <=40)
        {
            System.out.println("Tebrikler,Kazandiniz!");
        }
        else
        {
            System.out.println("Uzgunum,kaybettiniz");
        }
    }
}
