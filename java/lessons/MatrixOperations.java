import java.util.Scanner;
public class MatrixOperations {
    public static void main(String[] args) {

        Scanner giris = new Scanner(System.in);

        int[][] matris = {
            {1, 3},
            {3, 4}
        };

        System.out.println("Satir sutun degeri giriniz");
        int testSiraNo = giris.nextInt();

        if (kardesMi(matris, testSiraNo)) {
            System.out.println("Kardeşler!");
        } else {
            System.out.println("Kardeş değiller.");
        }
    }

    public static boolean kardesMi(int[][] matris, int siraNo) {
        int satirToplam = 0, sutunToplam = 0;

        for (int j = 0; j < matris[siraNo].length; j++) {
            satirToplam += matris[siraNo][j];
        }

        for (int i = 0; i < matris.length; i++) {
            sutunToplam += matris[i][siraNo];
        }

        return satirToplam == sutunToplam;
    }
}