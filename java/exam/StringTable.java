import java.util.Scanner;

public class StringTable{
    public static void main(String[] args){
        String[][] tablo = {
            {"Ali", "Ayşe", "İzmir", "Eğirdir"},
            {"Veli", "Fatma", "İstanbul", "Gönen"},
            {"Ahmet", "Dilek", "Muğla", "Atabey"},
            {"Hasan", "Elif", "Isparta", "Senirkent"}
        };

        String[] sonucDizisi = sutunlariGeriDondur(tablo, 0, 3);

        System.out.println("--- Birleştirilmiş Dizi Sonucu ---");
        for (int i = 0; i < sonucDizisi.length; i++) {
            System.out.println(sonucDizisi[i]);
        }
    }

    public static String[] sutunlariGeriDondur(String[][] dizi, int indexSutun1, int indexSutun2)
    {
        int satirSayisi = dizi.length;
        String[] sonuc = new String[satirSayisi*2];

        for(int i = 0; i < satirSayisi; i++)
        {
            sonuc[i] = dizi[i][indexSutun1];
            sonuc[i+satirSayisi] = dizi[i][indexSutun2];

        }
        return sonuc;
    }
}