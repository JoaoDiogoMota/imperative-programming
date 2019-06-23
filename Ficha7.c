#include<stdlib.h>
#include<stdio.h>
//1)


  typedef struct slist *LInt;

  typedef struct slist {
      int valor;
      LInt prox;
  } Nodo;

/*
//a)
LInt coloca(LInt a){
  a->valor = 10;
  a->prox->valor=5;
  a->prox->prox->valor=15;

  return a;
}
*/



//b)
//i)
LInt cons (LInt l, int x){
  LInt r = malloc(sizeof(struct slist));
  r->valor = x;
  r->prox=l;
  return r;
}

//ii)
LInt tail (LInt l){
  LInt a = l->prox;
  free(l);
  return a;
}

//iii)
LInt init (LInt l){
  LInt aux = l;
  while(aux->prox!=NULL){
    aux=aux->prox;
  }
  free(aux);
  return l;
}

//iv)
LInt snoc (LInt l, int x){
  LInt a = malloc(sizeof(struct slist));
  a->valor=x;
  a->prox=NULL;
  LInt aux = l;
  while(aux->prox!=NULL){
    aux=aux->prox;
  }
  aux->prox=a;
  return l;
}

//v)
LInt concat (LInt a, LInt b){
  LInt aux = a;
  while(aux->prox!=NULL){
    aux=aux->prox;
  }
  aux->prox=b;
  return a;
}

//3
//a)
typedef struct aluno{
  char nome[60];
  int numero;
  int nota;
}Aluno;

typedef struct turma{
  Aluno a;
  struct turma *prox;
}*Turma;

//b)
int acrescentaAluno (Turma *t, Aluno a){
  int r=0;
  Turma tt = malloc(sizeof(struct turma));
  tt->a = a;
  tt->prox=NULL;
  Turma aux = *t;
  while(aux->prox!=NULL){
    aux=aux->prox;
  }
  aux->prox=tt;
  return r;
}

//c)
Aluno *procura (Turma t, int numero){
  Aluno *existe = NULL;
  Turma aux=t;
  while(aux!=NULL){
    if(aux->a.numero==numero) existe=&(aux->a);
  }
  return existe;
}


//d)
int aproveita(Turma t){
  int res=0;
  Turma aux=t;
  while(aux!=NULL){
    if(aux->a.nota>=10) res++;
  }
  return res;
}


int main(){
//MAIN EXERCICIO 1
  /*
  LInt l =  malloc(sizeof(struct slist));
  l->valor=4;
  l->prox= malloc(sizeof(struct slist));
  l->prox->valor=7;
  l->prox->prox= malloc(sizeof(struct slist));
  l->prox->prox->valor=2;
  l->prox->prox->prox=NULL;

  LInt t =  malloc(sizeof(struct slist));
  t->valor=22;
  t->prox=malloc(sizeof(struct slist));
  t->prox->valor=45;
  t->prox->prox=NULL;
  LInt r = concat(l,t);
  printf("%d\n%d\n%d\n%d\n%d\n",r->valor, r->prox->valor, r->prox->prox->valor,r->prox->prox->prox->valor,r->prox->prox->prox->prox->valor);
  */

//MAIN EXERCICIO 2
/*
  Turma t = malloc(sizeof(struct turma));
  t->a= malloc(sizeof(struct aluno));
  t->a.nome={"Joao"};
  t->a.numero=5;
  t->a.nota=15;
  t->prox=malloc(sizeof(struct turma));
  t->prox->a = malloc(sizeof(struct aluno));
  t->prox->a.nome={"Carolina"};
  t->prox->a.numero=2;
  t->prox->a.nota=20;
  t->prox->prox=NULL;
  Aluno al = malloc(sizeof(struct aluno));
  al.nome={"Joaquim"};
  al.numero=11;
  al.nota=10;
  int r = acrescentaAluno(t,al);
*/
  return 0;
}
