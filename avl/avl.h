#ifndef BST_H
#define BST_H

typedef struct no {
    int fb;
	int valor;
	struct no *esq, *dir;
} no;

typedef no * arvore;

arvore inserir (arvore raiz, int valor, int *cresceu) ;

arvore remover (arvore raiz, int valor, int *diminuiu) ;

arvore maiorElemento(arvore raiz);

void preorder(arvore raiz);

#endif
