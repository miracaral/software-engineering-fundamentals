public class PrimeCheck {

    public static boolean asalSayimi(int sayi) {
        int adet = 0;
        int kalan;
        boolean asalMi;

        for (int i = 1; i <= sayi; i++) {
            kalan = sayi % i;
            if (kalan == 0)
                adet++;
        }

        if (adet == 2)
            asalMi = true;
        else
            asalMi = false;

        return asalMi;

    }

    public static void main(String[] args) {

        boolean sonuc1 = asalSayimi(17);

        boolean sonuc2 = asalSayimi(10);

        System.out.println("17 asal mı? " + sonuc1);
        System.out.println("10 asal mı? " + sonuc2);
    }
}
