#include <stdio.h>

 float aluno(float a, float b,float  c);
 
int main(){
  
  float a,b,c,x,menor;

	 	
	 	printf(" ENTRE COM A AV1");
	 	scanf("%f",&a);
	 
	 printf(" ENTRE COM A AV2");
	 	scanf("%f",&b);
	 	
	 	printf(" ENTRE COM A AV3");
	 	scanf("%f",&c);
	 	
	 	
	
	 
	 x=aluno(a,b,c);
	 
	 printf("A sua media eh %f",x);
	 
	 if(x>=6){
	 	printf("\nAprovado!");
	 	
	 }else{
	 	printf("\nReprovado!");
	 }
	 
	  
	  
	 }
	 
	float aluno(float a, float b, float c){
	 	
	 float med=0;
	float menor=a;
	
	
		  
	 	 	  if(a<menor){
		  menor=a;
	 	 }
	 	
		 if(b<a){
		  menor=b;
	 	 }
	 	  if(c<b){
		  menor=c;
	 	 }
		  
	 	
		 
		  med=(a+b+c-menor)/2;
		  		  
	 	 return med;
	 	 
	 	 
	 }

