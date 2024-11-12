#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
    printf("*****O SEGREDO OCULTO*****\n");
    printf("\nEu sou a guardi� de um segredo, protegido por camadas de sombras e mist�rio.\nQuem busca a verdade deve olhar al�m do �bvio, nas entrelinhas do oculto.\n\nSiga estas tr�s pistas para desvendar o mist�rio:\n");
	printf("- Primeira pista:Busque a ess�ncia do que � invis�vel, mas sempre presente na quietude ao nosso redor.\n");
	printf("- Segunda pista:Eu n�o tenho cor, n�o tenho uma forma. Eu existo, mas n�o sou a luz, nem a escurid�o. Sou um abrigo para os sons n�o ditos.\n");
	printf("- Terceira pista:Sou parte do dia e da noite, mas n�o sou luz, nem a escurid�o.\n");

	printf("\n Se voc� precisar, digite *ajuda* e talvez o eco te ofere�a uma nova pista.\n");
	
	
	char resposta[20];
	int tentativas = 0;
	
		printf("\n Resolva o enigma da porta oculta para prosseguir.\n");

	
	do{
	    printf("Insira sua resposta: ");
		scanf("%s", &resposta);
        if(strcmp(resposta, "silencio")==0) {
			printf("\n Parab�ns, voc� desvendou o segredo oculto.\n");
		}else if(resposta == "ajuda"){
			printf("DICA: Dos inocentes, surgiu um segredo que ningu�m ousava desvendar.");
		}else{
			printf("Resposta incorreta. O segredo permanece oculto!\n");
			tentativas++;	
		}
	}while(strcmp(resposta, "silencio")!=0);
	
	printf("\nVoc� tentou: %d vezes.", tentativas);
	
}
