import java.util.Scanner;

public class CapitalizeLetters{
    public static void main(String[] args) {
        String cumle,yeniCumle;
        String harf,buyukHarf;

        System.out.println("Bir cümle giriniz: ");
        Scanner giris = new Scanner(System.in);
        cumle = giris.nextLine();
        System.out.println("Bir harf giriniz: ");
        harf = giris.nextLine();

        cumle = cumle.toLowerCase();
        buyukHarf = harf.toUpperCase();

        yeniCumle = cumle.replace(harf, buyukHarf);
        System.out.println("Yeni cümle: " + yeniCumle);

        }
    }

    