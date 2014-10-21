#include <stdio.h>

int converte(int op)
{
float x;

switch(op)
    {
        case 1:
            printf("\n(1) m->km");
            printf("\n(2) km->m");
            printf("\n(3) m->mm");
            printf("\n(4) mm->m\n");

            scanf("%d",&op);

            if(op==1)
            {
                printf("m=?");
                scanf("%f",&x);
                printf("km=%f",x/1000.);
            }
            else if(op==2)
            {
                printf("\nkm=?");
                scanf("%f",&x);
                printf("\nkm=%f",x*1000.);
            }
            else if(op==3)
            {
                printf("\nm=?");
                scanf("%f",&x);
                printf("\nmm=%f",x*1000.);
            }
            else if(op==4)
            {
                printf("\nmm=?");
                scanf("%f",&x);
                printf("\nm=%f",x/1000.);
            }

            break;
            case 2:
                printf("\nPor implementar");
                default:
                printf("\nOpcao incorreta");
    }
}


int main(){
int op;


    printf("converter");
    printf("\n(1) Unidades metrica");
    printf("\n(2) Unidades volumetrica\n");
    scanf("%d",&op);

    converte(op);

}




