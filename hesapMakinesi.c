#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("***HESAP MAKINESI***\n ");
    double x, y, z;
    int control=1;
    char islem, mod;
    while (control!=0){
        printf("Basit mod icin b ye gelismis mod icin g ye basiniz:");
        scanf(" %c", &mod);
        if ('b'==mod){
            printf("isleminizi giriniz: <sayi> <islem(+, -, *, /)> <sayi>\n");
            scanf("%lf", &x);
            scanf("%c",&islem);
            scanf("%lf", &y);
            switch(islem){
                case '+':
                    printf("%.2lf + %.2lf = %.2lf \n", x , y, x+y);
                    break;
                case '-':
                    printf("%.2lf - %.2lf = %.2lf \n", x , y, x-y);
                    break;
                case '*':
                    printf("%.2lf * %.2lf = %.2lf \n", x , y, x*y);
                    break;
                case '/':
                    printf("%.2lf / %.2lf = %.2lf \n", x , y, x/y);
                    break;
                default:
                    printf("Hatali karakter girisi yaptiniz!");
                    break;
            }
        }
        else if('g'==mod){
            printf("isleminizi giriniz: <islem(mod(m), karekok(k), us(u), logaritma(l))>\n");
            scanf(" %c", &islem);
            switch (islem){
                case 'm':
                    printf("Sayilari giriniz: <sayi1> mod <sayi2>\n");
                    scanf("%lf", &x);
                    scanf("%lf", &y);
                    z = fmod(x,y);
                    printf("%.2lf mod %.2lf = %.2lf\n", x, y, z);
                    break;

                case 'k':
                    printf("Sayiyi giriniz: <sayi1>\n");
                    scanf("%lf", &x);
                    z = sqrt(x);
                    printf("%.2lf square = %.2lf\n", x, z);
                    break;

                case 'u':
                    printf("Sayilari giriniz: <sayi1> uslu <sayi2>\n");
                    scanf("%lf", &x);
                    scanf("%lf", &y);
                    z = pow(x,y); 
                    printf("%.2lf power %.2lf = %.2lf\n", x, y, z);
                    break;

                case 'l':
                    printf("Sayilari giriniz: <logaritmasi alinan sayi> <taban>\n");
                    scanf("%lf", &x);
                    scanf("%lf", &y);
                    z = log(x) / log(y);
                    printf("%.2lf log / %.2lf log = %.2lf\n", x, y, z);
                    break;
                default:
                    printf("Hatali karakter girisi yaptiniz!");
                    break;
            }
        }
        else{
            printf("Hatali karakter girisi yaptiniz!!!");
        }
        printf("Ana menuye donmek icin 0 haric bir rakam, islemleri sonlandirmak icin 0 rakamini tuslayiniz.");
        scanf("%d", &control);
    }


    return 0;
}
