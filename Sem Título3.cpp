#include <stdio.h>
int soma(int num1,int num2)

{
	return(num1+num2);
	
}

int sub(int num1,int num2)
{
	return(num1-num2);
}
int main()
{
	int res,n1,n2,x;
	
	printf("\n************");
	printf("\nCALCULADORA");
	printf("\n*************");
	printf("\n1-Soma");
	printf("\n2-Subtracao\n");
	scanf("%d",&x);
	
	printf("entre com um numero 1");
	scanf("%d",&n1);
	
	printf("entre com um numero 2");
	scanf("%d",&n2);

res=soma(n1,n2);
if(x==1){

printf("soma = %d",res);

}
res=sub(n1,n2);
if(x==2){
	printf(" a sub = %d",res);
}
return 0;

}
