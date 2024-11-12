#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
    printf("*****O SEGREDO OCULTO*****\n");
    printf("\nEu sou a guardiã de um segredo, protegido por camadas de sombras e mistério.\nQuem busca a verdade deve olhar além do óbvio, nas entrelinhas do oculto.\n\nSiga estas três pistas para desvendar o mistério:\n");
	printf("- Primeira pista:Busque a essência do que é invisível, mas sempre presente na quietude ao nosso redor.\n");
	printf("- Segunda pista:Eu não tenho cor, não tenho uma forma. Eu existo, mas não sou a luz, nem a escuridão. Sou um abrigo para os sons não ditos.\n");
	printf("- Terceira pista:Sou parte do dia e da noite, mas não sou luz, nem a escuridão.\n");

	printf("\n Se você precisar, digite *ajuda* e talvez o eco te ofereça uma nova pista.\n");
	
	
	char resposta[20];
	int tentativas = 0;
	
		printf("\n Resolva o enigma da porta oculta para prosseguir.\n");

	
	do{
	    printf("Insira sua resposta: ");
		scanf("%s", &resposta);
        if(strcmp(resposta, "silencio")==0) {
			printf("\n Parabéns, você desvendou o segredo oculto.\n");
		}else if(resposta == "ajuda"){
			printf("DICA: Dos inocentes, surgiu um segredo que ninguém ousava desvendar.");
		}else{
			printf("Resposta incorreta. O segredo permanece oculto!\n");
			tentativas++;	
		}
	}while(strcmp(resposta, "silencio")!=0);
	
	printf("\nVocê tentou: %d vezes.", tentativas);
	
}
