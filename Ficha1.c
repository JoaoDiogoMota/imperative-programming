#include <stdio.h>

//1 ESTADO E ATRIBUIÇÕES

//1.  12 16

//2.  0  (qualquer coisa)

//3   'A' 65 ;  'B' 66 '2' 50 ; 'b' 98

//4   100 200

//5   129 -99 ; 129 -99  (Não muda de valor?)

//RASCUNHO 

/*
int main () {
int x, y;
x = 0;
printf ("%d %d\n", x, y);
return 0;
}
*/
/*
int main  () {
char a, b, c;
a = 'A'; b = ' '; c = '0';
printf ("%c %d\n", a, a);
a = a+1; c = c+2;
printf ("%c %d %c %d\n", a, a, c, c); c = a + b;
printf ("%c %d\n", c, c);

return 0;
}
*/

/*
int main (){
int x, y;
x = 200; y = 100;
x = x+y; y = x-y; x = x-y; printf ("%d␣%d\n", x, y);
return 0; 
}
*/

/*
int main(){
int x, y;
x = 100; y = 28;
x += y ; y -= x ;
printf ("%d %d\n", x++, ++y); printf ("%d %d\n", x, y);
return 0;
}
*/

//2 ESTRUTURAS DE CONTROLO

//a)   3 5

//b)   11 66

//c)  (ciclo infinito)

//d)_#_#_#_#_#_#_#_#_#_#

/*e)
abcdefg
bcdefg
cdefg
defg
efg
fg
g
*/


/*f)
1
01
11
001
101
011
111
0001
1001
0101
1101
0011
1011
0111
1111
*/



/*
int main () {
int x, y;
x = 3; y = 5; if (x > y)
y = 6;
printf ("%d %d\n",x,y);
return 0;
}
*/

/*
int main () {
int x, y;
x = y = 0;
while (x != 11) {
x = x+1; y += x; }
printf ("%d %d\n",x,y);
return 0;
}
*/

/*
int main(){
	int i;
for (i=0; (i<20) ;i++)
if (i%2 == 0) putchar ('_');
else putchar ('#');
return 0;
}
*/

/*
int main () {
	char i, j;
for (i='a'; (i != 'h'); i++) {
for (j=i; (j != 'h'); j++) putchar (j);
putchar ('\n'); }
return 0; 
}
*/

/*
void f (int n) { 
  while (n>0) {
  if (n%2 == 0) putchar ('0'); 
  else putchar ('1');
n = n/2; }
putchar ('\n'); 
}

int main () { 
int i;
for (i=0;(i<16);i++) 
	f (i);
return 0;
}
*/

//2
int quadrado (int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			putchar('#');
		putchar('\n');
	}
	return 0;
}

/*
int main(){
	quadrado(5);
	return 0;
}
*/

int xadrez (int n) {
	for(int i=0;i<n;i++){
		if (i%2==0){
		for(int j=0; j<n;j++){
			if (j%2==0) putchar('#');
			else putchar('_');
		}
		putchar ('\n');
	}
	else{
		for(int j=0; j<n;j++){
			if (j%2==0) putchar('_');
			else putchar('#');
		}
		putchar ('\n');
	}
}
	return 0;
}
/*
int main (){
	xadrez (5);
	return 0;
}
*/
//4
int horizontal (int n){
	int i;
	for (i=1; i<=n;i++){
		for (int j=0;j<i;j++){
			putchar('#');
		}
		putchar('\n');
	}
	for(i=n;i>=0;i--){
		for(int j=0;j<=i;j++)
			putchar('#');
		    putchar('\n');
	}
	
	
	return 0;
}

void replicate (int n,char c) {
     while (n!=0){
     	putchar(c);
     	n--;
     }
}

int vertical(int n){
	int c=1;
	for(int i=n;i>0;i--){
		replicate((i-1),' ');
		replicate(c,'#');
		replicate((i-1),' ');
		c+=2;
		putchar('\n');
	}
	return 0;

}



int main(){
	vertical(5);
	return 0;
}































