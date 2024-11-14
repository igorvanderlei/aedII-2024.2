#ifndef BST_H
#define BST_H

typedef struct no {
	int valor;
	struct no *esq, *dir;
} no;

typedef no * arvore;

arvore inserir (arvore raiz, int valor) ;

arvore remover (arvore raiz, int valor) ;

arvore maiorElemento(arvore raiz);

void preorder(arvore raiz);

#endif
