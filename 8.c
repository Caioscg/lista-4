# include <stdio.h>
/**
* Função que verifica se a matriz é de permutação
* @param matriz Indica a matriz a ser verificada
* @param n indica a dimensão da matriz
* @param *soma parâmetro de saída, que armazenará a soma de todos os ’n’ elementos
da matriz.
* @return int
*/
int ehPermutacao( int matriz[500][500], int n, int *soma );
 
int main () {
    int n, matriz[500][500], soma, i, k, c, l, zero, um, r;
 
    scanf("%d", &n);
    r= ehPermutacao(matriz, n, &soma);
    printf("%d\n", n);
    if (r==1) printf("PERMUTACAO\n");
    else printf("NAO EH PERMUTACAO\n");
    printf("%d\n", soma);
 
    return 0;
}
 
int ehPermutacao( int matriz[500][500], int n, int *soma ) {    
    int l, c, k=0, zero=0, um=0;
    
    *soma=0;
    for (l=0; l<n; l++) {
        for (c=0; c<n; c++) {
            scanf("%d", &matriz[l][c]);
            *soma=*soma+matriz[l][c];
        }
    }
    for (l=0; l<n; l++) {
        for (c=0; c<n; c++) {
            if (matriz[l][c]==0) zero++;
            else if (matriz[l][c]==1) um++;
        }
        if (zero==(n-1) && um==1) k++;
    }
    zero=0; um=0;
    for (c=0; c<n; c++) {
        for (l=0; l<n; l++) {
            if (matriz[l][c]==0) zero++;
            else if (matriz[l][c]==1) um++;
        }
        if (zero==(n-1) && um==1) k++;
    }
    if (k==2) return 1;
    else return 0;
    
}