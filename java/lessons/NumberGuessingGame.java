import java.util.Scanner;
import java.util.Random;

public class NumberGuessingGame{
    public static void main(String args[]){
        Random rnd = new Random();
        Scanner giris= new Scanner(System.in);

        int tahmin;
        int tutulanSayi;

        tutulanSayi= rnd.nextInt(101);
        System.out.println("Bir sayi tuttum bil bakalim bilebilirsen :p");

        do{
            System.out.println("Tahmin:");
            tahmin = giris.nextInt();
            if(tutulanSayi>tahmin)
            {
                System.out.println("Daha buyuk");
            }
            else if(tutulanSayi<tahmin)
            {
                System.out.println("Daha kucuk");
            }
            else if(tutulanSayi==tahmin)
            {
                System.out.println("Aradigin sayiyi buldun: " + tutulanSayi);
                break;
            }

        }while(true);
    
    }
}