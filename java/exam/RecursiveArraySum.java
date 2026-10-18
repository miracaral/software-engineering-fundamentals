import java.util.Scanner;
public class RecursiveArraySum {
    public static void main(String[] args) {
        int[][] dizi = {
            {10, 20, 30, 40},
            {5,  15, 25, 35},
            {1,   2,  3,  4}
        };
        sayilariTopla(dizi,0,3);
        sayilariTopla(dizi,0,5);
        sayilariTopla(null,0,1);

    }

    public static void sayilariTopla(int[][] dizi, int sutun1Index, int sutun2Index) {
        try
        {
            int toplam=0;
            int satirSayisi = dizi.length;
            for(int i = 0 ; i < satirSayisi; i++)
            {
                toplam = toplam + dizi[i][sutun1Index]+ dizi[i][sutun2Index];
            }
            System.out.println("Toplam: " + toplam);

        }catch (Exception e)
        {
            System.out.println("Hata!");
        }
    }
}