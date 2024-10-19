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
    int v[] = {3,2,4,1};
    int size = 4;
    int i, j, temp;

    printf("Inicio: ");
    print_vetor(v, size);

    for(j=0; j<size-1; j++){ //(n-1)^2
        printf("\nPassada %d \n\n", j);

        for(i=0; i<size-1-j; i++){
            if(v[i] > v[i+1]){
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
            }
            printf("\n");
            printf("Iteracao %d | %d : ", i, i+1);
            print_vetor(v, size);
        }
        printf("--------------------------\n");
    }
}
