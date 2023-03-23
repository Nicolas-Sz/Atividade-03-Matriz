#include <stdio.h>

int main()
{
  float cde[4][4];
  int i, j;
  int somaimpar = {1,3,5,7};
  int contador = {2,4,6,8};
    
    for(i= 0; i < 2; i++){
        for(j = 0; j< 4; j++){
            printf("\nDigite um numero:\n");
            scanf("%f", &cde[i][j]);
    }
    for(i= 0; i < 2; i++){ 
        for(j = 0; j< 4; j++){
            printf("%.1f\n",cde[i][j]);
            if(j % 2 != 0){
                somaimpar = somaimpar + cde[4][4];
                contador = contador +1;
            }
        }
    }
    }
        printf("\n o valor das soma da coluna i impar é: %d",somaimpar);
    return 0;
    
}