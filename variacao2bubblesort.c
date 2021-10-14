#include <stdio.h>

int num[10];

void ordenandoVet();

int main(){
    printf("INFORME OS VALORES DO VETOR DESORDENADO\n");
    for(int i = 0; i < 10; i++){
        printf("\tPOSICAO %d: ", i);
        scanf("%d", &num[i]);
    }

    system("cls");

    printf("\t VETOR ORIGINAL\n");
    for(int i = 0; i < 10; i++){
        printf("%d  ", num[i]);
    }

    ordenandoVet();

    printf("\n\n\n\t VETOR ORDENADO\n");
    for(int i = 0; i < 10; i++){
        printf("%d  ", num[i]);
    }
}

void ordenandoVet(){
    int temp;
    for(int i = 1; i < 10; i++) {
        for(int j = 0; j < 9; j++) {
            if(num[j] > num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}