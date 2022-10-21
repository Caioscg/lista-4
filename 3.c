#include <stdio.h>
int main () {
    int i=0, n, m, k=0, c=0, t=0, N, M[2][50];
 
    scanf("%d", &N);
    while (i<N) {
        scanf("%d", &m);
        for(k=0; k<m; k++) {
            scanf("%d/%d", &M[0][k], &M[1][k]); 
        } 
        k=1;
        i++;
        printf("Caso de teste %d\n", i);
 
        while (c<m) {
            while (k<m) {
                if ((double)M[0][c]/M[1][c]==(double)M[0][k]/M[1][k]) {
                    printf("%d/%d equivalente a %d/%d\n", M[0][c], M[1][c], M[0][k], M[1][k]);
                    t++;
                }    
                k++;    
            }    
            c++;
            k=c+1;
        }    
                     
        if (t==0) printf("Nao ha fracoes equivalentes na sequencia\n");
        t=0;
        c=0;
        k=0;
 
    }    
    
    
    return 0;
}