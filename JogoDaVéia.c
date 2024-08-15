#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int i, j, linha, coluna, contador;
    char matriz[3] [3];
    setlocale(LC_ALL,"");/*Acentuação*/
    
    for(i = 0; i < 3; i++){
        puntchar('\n');
        for(j = 0; j < 3; j++){
            puntchar('\t');
            matriz [i] [j] = '.';
            printf("%c", matriz [i] [j]);
        }
        puntchar('\n')
        puntchar('\n')
    }
    
    for(contador = 0; contador < 9; contador++){
    
        printf("\nInsira a linha em que  deverá ser posto seu símbolo:\n");
        scanf("%d", &linha);
        linha--;
        
        printf("Insira a coluna em que deverá ser posto seu símbolo:\n");
        scanf("%d", &linha);
        fflush(stdout);
        linha--;
        
        puntchar('\n');
        if(matriz[linha][coluna] == '.'){
            if(contador%2){/*O módulo por 2 dará 1 ou 0: Se for 1 , equivale a true e entra no if,
                                        *se for 0 equivale a false e entra no else*/
                matriz[linha] [coluna]
            }
            else{
                matriz
            }
        }
    
    
}