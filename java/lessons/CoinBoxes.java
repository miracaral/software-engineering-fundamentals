import java.util.Scanner;
import java.util.Random;

public class CoinBoxes{
    public static void main(String[] args)
    {
        Random rnd=new Random();
        Scanner giris=new Scanner(System.in);

        int kutudakiParalar[ ]={42,10,-5,23,-45,40,16,-9,15,32,-10,-2, 48, 30,41,-3,24,18,20,-1}; //0,19 indisli
        int toplam=0;
        int rastgele = rnd.nextInt(20);
        int kutu = kutudakiParalar[rastgele];
        int sayac=0;

        if(kutu > 0)
        {
            System.out.println("+");
        }
        else if(kutu < 0)
        {
            System.out.println("-");
        }
        toplam += kutu;
        sayac++;

        
        do{
            System.out.println("Devam mi tamam mi?(D/T):");
            String islem = giris.nextLine();

            if(islem.equals("D"))
            {
                if(sayac<10)
                {
                    rastgele = rnd.nextInt(20);
                    kutu = kutudakiParalar[rastgele];
                    if(kutu > 0)
                    {
                        System.out.println("+");
                    }
                    else if(kutu < 0)
                    {
                        System.out.println("-");
                    }
                    toplam += kutu;
                    sayac++;
                }
                if(sayac>=10)
                {
                    System.out.println("Artik devam edemezsin 10 kutu limitini astin");
                    System.out.println(toplam);
                    break;
                }
            }
            else if(islem.equals("T"))
            {
                System.out.println(toplam);
                break;
            }
        }while(sayac<10);


    }
}