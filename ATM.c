#include <stdio.h>
#include <string.h>

void main() {
    int num, x, N, R , so_du = 100000;
    char pin[5];
    char dung_ma_pin[]="161001";
    int i=0;
    do{
    printf("\n Please enter your pin :\n");
    scanf("%s", &pin);	
    if (strcmp(pin,dung_ma_pin)==0){
    	printf("\nBan da nhap dung ma pin!");
        printf("\n Choice num is \n");
        scanf("%d", &num);
    	break;
									}
	else{
		printf("\nBan da nhap sai ma pin!");
        printf("\n Please enter again your pin :\n");
        scanf("%d", &pin);
		} 
	 }while(1);
    switch (num)
    {
        case 1 :
            printf("\nNap tien.");
            printf("\nSo tien can nop: \n");
            scanf("%d", &N);
            x = so_du + N;
            printf("\nGiao dich thanh cong!\n");
            printf("So du hien tai la %d", x);
            break;
        case 2 :
            printf("\nRut tien.");
            printf("\nSo tien can rut: \n");
            scanf("%d", &R);
            if ( R>so_du)
            {
                printf("\nSo du hien tai khong du\n");
                printf("\nSo du hien tai la %d", so_du);
            }
            if (R<= so_du)
            {
                x = so_du - R;
                printf("\nGiao dich thanh cong!\n");
                printf("So du hien tai la %d\n ", x);
            }
            break;
        case 3:
            printf("\nXem so du tai khoan\n");
            printf("\nSo du tai khoan cua ban la %d", so_du);
            break;
        default :
            printf("\n Error!!");
            break;
    }
    	  
    }

