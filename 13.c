#include <stdio.h>
int main () {
    int n, i=0, k=0;
    scanf("%d", &n);
    int v[n];
 
    while (i<n) {
        scanf("%d", &v[i]);
        i++;
    }
    i=0;
    while (i<n-1) {
        if (v[i]==0) {
            if (v[i+1]==0) k=k;
            else if (v[i+1]==1) k=k+63;
            else if (v[i+1]==2) k=k+210;
            else if (v[i+1]==3) k=k+190;
            else if (v[i+1]==4) {
                printf("rota invalida!\n");
                return 0;
            }
            else if (v[i+1]==5) k=k+190;
        }
        else if (v[i]==1) {
            if (v[i+1]==0) k=k+63;
            else if (v[i+1]==1) k=k;
            else if (v[i+1]==2) k=k+160;
            else if (v[i+1]==3) k=k+150;
            else if (v[i+1]==4) k=k+95;
            else if (v[i+1]==5) k=k+10;
        }
        else if (v[i]==2) {
            if (v[i+1]==0) k=k+210;
            else if (v[i+1]==1) k=k+160;
            else if (v[i+1]==2) k=k;
            else if (v[i+1]==3) k=k+10;
            else if (v[i+1]==4) k=k+1;
            else if (v[i+1]==5) k=k+10;
        }
        else if (v[i]==3) {
            if (v[i+1]==0) k=k+190;
            else if (v[i+1]==1) k=k+150;
            else if (v[i+1]==2) k=k+10;
            else if (v[i+1]==3) k=k;
            else if (v[i+1]==4) k=k+10;
            else if (v[i+1]==5) k=k+20;
        }
        else if (v[i]==4) {
            if (v[i+1]==0) k=k+10;
            else if (v[i+1]==1) k=k+95;
            else if (v[i+1]==2) k=k+7;
            else if (v[i+1]==3) k=k+21;
            else if (v[i+1]==4) k=k;
            else if (v[i+1]==5) k=k+80;
        }
        else if (v[i]==5) {
            if (v[i+1]==0) k=k+190;
            else if (v[i+1]==1) k=k+2;
            else if (v[i+1]==2) {
                printf("rota invalida!\n");
                return 0;
            }
            else if (v[i+1]==3) k=k+41; 
            else if (v[i+1]==4) k=k+80;
            else if (v[i+1]==5) k=k;
        }
        i++;
    }
    printf("%d\n", k);
 
    return 0;
}