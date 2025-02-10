
#include <stdio.h>
#include <conio.h>
int main(void) {
    char tus;
    float sayi1, sayi2;
    float toplam, fark, carpim, bolum;
    printf("Ilk sayiyi giriniz : ");
    scanf_s("%f", &sayi1);
    printf("Ikinci sayiyi giriniz : ");
    scanf_s("%f", &sayi2);
    printf("\nAritmetik islemi seciniz:\n");
    printf("(1)Topla  (2)Cikar  (3)Carp  (4)Bol\n");
    tus = _getch();
    switch (tus) {
    case '1': {
        printf("\nSeciminiz: 1\n");
        toplam = sayi1 + sayi2;
        printf("%f + %f = %f", sayi1, sayi2, toplam);
        break;
    }
    case '2': {
        printf("\nSeciminiz: 2\n");
        fark = sayi1 - sayi2;
        printf("%f - %f = %f", sayi1, sayi2, fark);
        break;
    }
    case '3': {
        printf("\nSeciminiz: 3\n");
        carpim = sayi1 * sayi2;
        printf("%f * %f = %f", sayi1, sayi2, carpim);
        break;
    }
    case '4': {
        printf("\nSeciminiz: 4\n");
        if (sayi2 == 0) {
            printf("Bolen sifir olamaz!!!");
        }
        else {
            bolum = sayi1 / sayi2;
            printf("%f / %f = %f", sayi1, sayi2, bolum);
        }

        break;
    }
    default: {
        printf("\nLutfen gecerli bir secenek seciniz.");
    }
    }


    return 0;
}
