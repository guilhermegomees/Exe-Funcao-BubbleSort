#include <stdio.h>

int num[10] = {7, 5, 1, 20, 12, 16, 23, 49, 33, 19};

void ordenandoVet();

int main(){
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