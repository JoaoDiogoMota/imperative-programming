#include<stdlib.h>
#include<stdio.h>
/*
//1

#define MAX 100

typedef struct stack {
      int sp;
      int valores [MAX];
} STACK;

//a)
void initStack (STACK *s){
  s->sp=0;
}

//b)
int isEmptyS (STACK *s){
  if (s->sp==0) return 0;
  else return 1;
}

//c)
int push (STACK *s, int x){
  int r=0;
  if(s->sp == MAX) r=1;
  else{
    s->valores[s->sp] = x;
    s->sp++;
  }
  return r;
}

//d
int pop (STACK *s, int *x){
  int r=0;
  if(s->sp==0) r=1;
  else{
    *x=s->valores[s->sp-1];
    s->sp--;
  }
  return r;
}

//e)
int top (STACK *s, int *x){
  int r=0;
  if(s->sp==0) r=1;
  else{
    *x=s->valores[s->sp-1];
  }
  return r;
}

//2
#define MAX 100
  typedef struct queue {
      int inicio, tamanho;
      int valores [MAX];
  } QUEUE;

//a)
void initQueue (QUEUE *q){
  q->tamanho=0;
  q->inicio=0;
}

//b)
int isEmptyQ (QUEUE *q){
  return (q->tamanho==0);
}

//c)
int enqueue (QUEUE *q, int x){
  int r=0;
  if (q->tamanho==MAX) r=1;
  else{
    q->valores[(q->tamanho)+(q->inicio)]= x;
    q->tamanho++;
  }
  return r;
}

//d)
int dequeue (QUEUE *q, int *x){
  int r=0;
  if(q->tamanho==0) r=1;
  else{
    *x=q->valores[q->inicio];
    q->inicio++;
    q->tamanho--;
  }
  return r;
}

//e)
int front (QUEUE *q, int *x){
  int r=0;
  if(q->tamanho==0) r=1;
  else{
    *x=q->valores[q->inicio];
  }
  return r;
}
*/

//3
typedef struct stack {
int size; // guarda o tamanho do array valores int sp;
int *valores;
} STACK;

//a)
void initStack (STACK *s){
  s->size=0;
}

//b)
int isEmpty(STACK *s){
  return(s->size==0);
}

//c)

void push (STACK *s, int x){
  int *t;
  int *r = malloc(2*(s->size));
  for(int i=0;i<s->size;i++){
    r[i] = s->valores[i];
  }
  r[s->size] = x;
  s->valores=r;
  s->size++;

}

//d)
void pop (STACK *s, int *x){
  *x=s->valores[s->size-1];
  s->size--;
  free(&(s->valores[s->size-1]));

}



typedef struct queue {
int size; // guarda o tamanho do array valores int inicio, tamanho;
int *valores;
} QUEUE;

int main(){
  STACK *s;
  s->size=4;
  int x;
  s->valores=malloc(4*sizeof(int));
  s->valores[0]=1;
  s->valores[1]=3;
  s->valores[2]=6;
  s->valores[3]=2;
  pop(s,&x);
  for(int i=0;i<s->size-1;i++) printf("%d\n",s->valores[i]);
  return 0;
}
