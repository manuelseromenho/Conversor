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
                metro_kilo(op);
            }
            else if(op==2)
            {
                kilo_metro(op);
            }
            else if(op==3)
            {
                metro_mili(op);
            }
            else if(op==4)
            {
                mili_metro(op);
            }

            break;
            case 2:
                printf("\nPor implementar");
                default:
                printf("\nOpcao incorreta");
    }
}
