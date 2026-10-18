import java.io.File;
import java.io.IOException;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Random;
import java.util.Scanner;

public class SalaryComparison {
    public static void main(String[] args) {
        double AhmetUcret = 0;
        double HasanUcret = 0;
        int AySayisi = 0;
        Scanner giris = new Scanner(System.in);
        AhmetUcret = giris.nextDouble();
        HasanUcret = giris.nextDouble();
        AySayisi = giris.nextInt();

        for(int i = 1; i <= AySayisi; i++){
            if(i % 2 == 1)
            {
                AhmetUcret = AhmetUcret + (AhmetUcret * 0.055);
                System.out.println("Ay " + i + " Ahmet'in ücreti: " + AhmetUcret);
            }
            else
            {
                AhmetUcret = AhmetUcret - (AhmetUcret * 0.025);
                System.out.println("Ay " + i + " Ahmet'in ücreti: " + AhmetUcret);
            }
                HasanUcret = HasanUcret + HasanUcret * 0.035;
                System.out.println("Ay "+ i + " Hasanin ucreti: " + HasanUcret);
            
        }

    }
}
