#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main(int argc, char * argv[]) {
    //Declarar uma variável do tipo árvore
    arvore a1;
    int aux;
    //inicializar como uma árvore vazia
    a1 = NULL;
    
    while(1) {
        int opcao;
        int valor;
        scanf("%d", &opcao);
        switch(opcao) {
            //inserir
            case 1:
                scanf("%d", &valor);
                a1 = inserir(a1, valor, &aux);
                break;
            case 2:
                preorder(a1); 
                printf("\n");
                break;
           case 3:
                scanf("%d", &valor);
                a1 = remover(a1, valor, &aux);
                break;
            case 99:
                exit(0);
        }    
    }
 }
