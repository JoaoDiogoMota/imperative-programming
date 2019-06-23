#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct entrada{
char *palavra;
int ocorr;
struct entrada *prox;
} *Palavras;

void initDic (Palavras *p){
  *p=NULL;
}

int acrescenta (Palavras *d, char *pal){
  Palavras l = *d,ant=NULL,novo;
  int r=1;
  while(l!=NULL && strcmp(l->palavra,pal)!=0){
    ant=l;
    l=l->prox;
  }
  if(strcmp(l->palavra,pal)==0){
    l->ocorr++;
    r=l->ocorr;
  }
  else{
    novo=malloc(sizeof(struct entrada));
    novo->palavra=pal;
    novo->ocorr=1;
    novo->prox=NULL;

    if(ant!=NULL) ant->prox=novo;

    else l=novo;
  }
  return r;
}

char *maisFreq (Palavras d, int *c){
  int max=0;
  char* maisF=NULL;
  Palavras aux = d;
  while(aux!=NULL){
    if(aux->ocorr>max){
      max=aux->ocorr;
      maisF=aux->palavra;
    }
  }
  *c=max;
  return maisF;
}

//1






int main (int argc, char *argv[]){
  FILE *input;
  int r=0, count=0;
  char word[100];
  if (argc==1) input=stdin;
  else input=fopen(argv[1],"r");
  if (input==NULL) r=1;
  else {
    while ((fscanf(input,"%s",word)==1))
      count ++;
    fclose (input);
    printf ("%d palavras\n", count);
  }
  return r;
}
