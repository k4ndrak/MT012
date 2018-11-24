#include <stdio.h>
/**
	Máquina de Turing que reconhece a linguagem (012)+
*/


void main() {
	char cadeia[50];
	char marcacao[50];
	scanf("%s", &cadeia);

	int i = 0;
	/**Enquanto não chegar no fim da palavra executa as verificações */
	while(cadeia[i] != '\0') {
		//se o primeiro caractere da palavra for 0 continua
		 if (cadeia[i] == '0') {
			marcacao[i] = 'X';
			i++; // marca X e avança pra direita
			if (cadeia[i] == '1') { // verifica se é 1
				marcacao[i] = 'Y';
				i++; // marca Y e avança pra direita
				if (cadeia[i] == '2') { //verifica se é 2
					marcacao[i] = 'Z';
					i++; // marca Z e avança pra direita, volta ao estado inicial se nao for o fim da palavra
					if (cadeia[i] == '\0') { //se for o fim da palavra, a palavra é aceita e é exibida
						marcacao[i] = '\0';
						printf("\n%s\n\n%s\n\n%s\n", "Cadeia aceita", cadeia, marcacao);
						
					}
				}
			}
		// se o primeiro caractere for != 0 recusa a palavra
		} else {
			printf("%s", "Cadeia nao aceita!");
			break;
		}
	}
}