 #include <stdio.h>
#include<ctype.h>
#include<string.h>
//1
int minusculas(char s[]){
	int cont=0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]>='A' && s[i]<='Z') {
			s[i]=s[i]-32;
			cont++;
		}
	}
	return cont;
}

/*
int main(){
	char s[5]={"dIOgO"};
	int x=minusculas(s);
	printf("%d\n",x );
	return 0;
}
*/

//2
int contalinhas (char s[]){
	int n;
	for(int i=0;s[i]!='\0';i++){
		if (s[i]=='\n') n++;
	}
	return n;
}
/*
int main(){
	char s[10]={"ola\nMundo\n"};
	int x= contalinhas(s);
	printf("%d\n",x );
	return 0;
}
*/

//3
int contaPal(char s[]){
	int n;
	for(int i=0;s[i]!='\0';i++){
		if (isspace(s[i]))
			n++;
	}
	return n;
}

//4
int procura(char *p,char *ps[],int N){
	int i;
	int a=-1;
	for(i=0;i<(strlen(*ps));i++){
		if (strcmp(ps[i],p)==0){
			a=i;
			break;
		}
		
	}
return a;
}

int main(){
	char s[8]={"Bananas"};
	char* p[16]={"Ala","Banana","Joao"};
	int x=procura(s,p,16);
	printf("%d\n",x );
	
	return 0;
	
}


/*
//5
int procuraAlt(char *p,char *ps[],int N){
	int a =-1;
	for(int i=0;i<N;i++){
		if(strcmp(p,ps[i])){
			a=i;
			break;
		}
		else{
			for(int j=0;p[j]!='\0';j++){
				if 
			}
		}
	}
}
*/

//6


//7
int zeros (int N, int M, int m [N][M]){
	int cont=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(m[i][j] == 0) cont++;
		}
	}
	return cont;
}

/*
int main(){
	int m[3][3] ={{1,0,4},{0,0,7},{5,2,0,}};
	int x=zeros(3,3,m);
	printf("%d\n",x );
	return 0;
}
*/

//8
void identidade (int N, int m[N][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if (i==j) m[i][j]=1;
			else m[i][j]=0;
		}
	}
}
/*
int main(){
	int m[3][3];
	identidade(3,m);
	for(int i=0;i<3;i++){
		printf("\n");
		for(int j=0;j<3;j++){
			printf("%d",m[i][j]);
		}

	}
	printf("\n\n");
	return 0;
}
*/

//9
void multV (int N, float t[N][N], float v[N], float r[N]){
	int i,j;
	for(i=0;i<N;i++){
		 for(j=0;j<N;j++)
		 	r[i]+=v[j]*t[i][j];
				
		}
	}
/*

int main(){
	float t[2][2]={{1,2},{1,1}};
	float v[2] = {1,1};
	float s[2];
	multV(2,t,v,s);
	for(int i=0;i<2;i++){
		printf("%f\n",s[i] );
	}
}

*/































