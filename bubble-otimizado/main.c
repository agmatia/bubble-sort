#include <stdio.h>
#include <stdlib.h>

void print_vetor( int *pVetor, int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d ", pVetor[i]);
    }
    printf("\n");
}

int main()
{
    int v[] = {1,2,4,3};
    int size = 4;
    int i, temp;
    int houve_troca = 1;

    printf("Inicio: ");
    print_vetor(v, size);

    //for(j=0; j<size-1; j++){ //(n-1)^2
    while(houve_troca == 1){
        //printf("\nPassada %d \n\n", j);
        houve_troca = 0;

        for(i=0; i<size-1; i++){
            if(v[i] > v[i+1]){
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                houve_troca = 1;
            }
            printf("\n");

            printf("Iteracao %d | %d : ", i, i+1);
            print_vetor(v, size);
        }
        printf("--------------------------\n");
    }
}
