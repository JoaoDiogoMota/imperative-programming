#include<stdio.h>
//2
void swapM(int *x,int *y){
	int c;
	c=*x;
	*x=*y;
	*y=c;
}

//3
void mySwap(int v[],int i,int j){
	int c;
	c=v[i];
	v[i]=v[j];
	v[j]=c;
}

//4
int soma(int v[],int N){
	int r=0;
	for(int i=0;i<N;i++)
		r+=v[i];
	return r;
}

//5
int mymaximum(int v[],int N,int *m){
	*m=v[0];
	for(int i=0;i<N;i++)
		if(v[i]>*m) *m=v[i];
	return *m;
}

//6
void quadrados(int q[],int N){
	for(int i=0;i<N;i++)
		q[i]=q[i]*q[i];
}



//7


int tira(int v[],int r,int N){
	for(int i=0;i<N;i++)
		if(i==r) return v[i];
	return 0;
}

void pascal (int v[], int N){
	v[0]=1;
	v[N-1]=1;
	for(int i=1;i<(N-1);i++){
		v[i]=tira(pascal(v,N-1),i-1,N) + tira(pascal(v,N-1),i+1,N)
	}
}











int main(){
	int v[5];
	pascal(v,5);
	for(int i=0;i<5;i++){

		printf("%d\n",v[i]);
	}
	return 0;

}












