#include <stdio.h>
 
int main() {
 
    int dim;
    char borda, fundo;
    int lq, cq, ls, cs, counter1, counter2;
    scanf("%d %c %c", &dim, &borda, &fundo);
    if(dim>0 && dim%2==1 && dim<=99) {
        char qua[dim][dim], los[dim][dim];
        for(lq=0; lq<dim; lq++) {
            for(cq=0; cq<dim; cq++) {
                if(lq==0 || cq==0 || lq==(dim-1) || cq==(dim-1)) qua[lq][cq]=borda;
                else qua[lq][cq]=fundo;
            }
        }
        ls=0;
        lq=0;
        counter1=0;
        counter2=0;
        cs=dim/2;
        while(lq<dim) {
            counter1=lq;
            counter2=cs;
            cq=0;
            while(cq<dim) {
                if(qua[lq][cq]==borda || qua[lq][cq]==fundo) los[ls][cs]=qua[lq][cq];
                else los[ls][cs]=32;
                cq++;
                cs++;
                lq--;
            }
            cs=counter2;
            cs--;
            lq=counter1;
            lq+=2;
            ls++;
        }
        counter1=1;
        for(ls=0; ls<((dim/2)); ls++) {
            for(cs=0; cs<dim; cs++) {
                if(los[ls][cs]!=borda && los[ls][cs]!=fundo) los[ls][cs]=32;
                los[(ls+(dim-counter1))][cs]=los[ls][cs];
            }
            counter1+=2;
        }
        for(ls=0; ls<dim; ls++) {
            for(cs=0; cs<dim; cs++) {
                printf("%c ", los[ls][cs]);
            }
            printf("\n");
        }
    } 
    else printf("Dimensao invalida!\n");
 
    return 0;
}