#include <stdio.h>
 
 int soma(int a, int b){
 	return a+b;
 }
 
 int main(){
 	int resultado,x,y;
 
 
 printf("entre com um numero");
 scanf("%d",&x);
 
  printf("entre com um numero");
 scanf("%d",&y);
 
 resultado =soma(x,y);
 
 printf("o resultado eh %d",resultado);
 return 0;
 
 
 
 }
