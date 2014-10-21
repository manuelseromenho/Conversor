#include <stdio.h>
#include "metro_kilo.cpp"
#include "kilo_metro.cpp"
#include "metro_mili.cpp"
#include "mili_metro.cpp"
#include "converte.cpp"


int main(){
int op;


    printf("converter");
    printf("\n(1) Unidades metricas");
    printf("\n(2) Unidades volumetricas\n");
    scanf("%d",&op);

    converte(op);

}




