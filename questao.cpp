#include <stdio.h>
#include<string.h>

int main(){
	char user2[10],senha2[10];
	char user1[10],senha1[10];
	printf("CRIE SUA CONTA!");
	printf("\n--------");
	
	
	printf("\n Digite seu nome usario:\n");
	gets(user1);
	
	printf("\ndigite sua  senha:\n");
	gets (senha1);
	
	printf("\nseu nome de usuario eh: %s\n\n sua senha eh: %s",user1,senha1);
	printf("\n\n----------");
	printf("\n VALIDE SUA CONTA");
	
	printf("\nRedigite seu nome de usuario:\n");
	gets(user2);
	
	printf("\nRedigite sua senha:\n");
	gets(senha2);


	
	
	if(strcmp(user1,user2)==0&&(strcmp(senha1,senha2)==0)){
		printf("\n LOGIN OK!");
		
	}
	else printf("\nSENHA OU USER INVALIDO!");


}

