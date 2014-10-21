#include <stdio.h>

int main(){
int op;
float x;

    printf("converter");
    printf("\n(1) Unidades metrica");
    printf("\n(2) Unidades volumetrica");
    scanf("%d",&op);

    switch(op)
    {
        case 1:
            printf("\n(1) m->km");
            printf("\n(2) km->m");
            scanf("%d",&op);

            if(op==1)
            {
                printf("m=?");
                scanf("%f",&x);
                printf("km=%f",x/1000.);
            }
            else
            {
                printf("\nkm=?");
                scanf("%f",&x);
                printf("\nkm=%f",x*1000.);
            }
            break;
            case 2:
                printf("\nPor implementar");
                default:
                printf("\nOpcao incorreta");
    }
}
