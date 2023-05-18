#include <stdio.h>
int main() {
    int pin, num, x, N, R, so_du = 100000;
    printf("\n Please enter your pin :\n");
    scanf("%d", &pin);

    if (pin != 110800)
    {
     printf("\n Please enter again your pin :\n");
    scanf("%d", &pin);
}
    if ( pin == 110800);
        printf("\n Choice num is \n");
        scanf("%d", &num);

    switch (num)
    {
        case 1 :
            printf("\nNap tien.");
            printf("\nSo tien can nop: \n", 2000000);
            scanf("%d", &N);
            x = so_du + N;
            printf("%d+%d=%d", x, so_du, N);
            break;
        case 2 :
            printf("\nRut tien.");
            printf("\nSo tien can rut: \n", 2100000);
            scanf("%d", &R);
            x = so_du - R;
            printf("%d-%d=%d", x, so_du, R);
            break;
        case 3:
            printf("\nXem so du tai khoan\n");
            printf("\nSo du tai khoan cua ban la %d", x);
            break;
        default :
            printf("\n Error!!");
            break;
    }
    
    return 0;
}
