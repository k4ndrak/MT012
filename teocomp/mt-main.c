/**
 * @file mt-main.c
 * @author Claudio Rogerio claudiorogerio<at>unifap.br
 * @date 23 Out 2018
 * @brief Atividade complementar para a Disciplina Teoria da Computação 2018 \n
 * Ciência da Computação \n
 * Universidade Federal do Amapá
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/colors.h" 				/*! Colors.h - Arquivo responsável por mudança de cores em modo texto. */
//#include "include/equipe_MODELO.h"			/*! Modelo.h - Arquivo para reconhecer a máquina de turing MODELO. */
//#include "include/equipe_01.h"			/*! 01.h - Arquivo para reconhecer a máquina de turing de (01)'s. */
//#include "include/equipe_0n1n.h" 			/*! 0n1n.h - Arquivo para reconhecer a máquina de turing de 0's 1's. */
#include "include/equipe_012.h" 			/*! 012.h - Arquivo para reconhecer a máquina de turing de (012)'s. */
//#include "include/equipe_2n01n.h" 		/*! 2n01n.h - Arquivo para reconhecer a máquina de turing de 2's(01)'s. */
//#include "include/equipe_100n.h" 	 		/*! 100n.h - Arquivo para reconhecer a máquina de turing de 1(00)'s. */
//#include "include/equipe_101n.h"  		/*! 101n.h - Arquivo para reconhecer a máquina de turing de (101)'s. */
//#include "include/equipe_10n01n.h"  		/*! 10n01n.h - Arquivo para reconhecer a máquina de turing de (10)'s(01)'s. */
//#include "include/equipe_soma.h" 			/*! Soma.h Arquivo para reconhecer a máquina de turing da soma de dois números. */
//#include "include/equipe_palindroma.h" 	/*! Palindroma.h - Arquivo para reconhecer a máquina de turing de palavras palíndromas. */
//#include "include/equipe_potencia2.h" 	/*! Potencia2.h - Arquivo para reconhecer a máquina de turing de potencia de 2. */

/**
 * @brief Programa principal de execução dos exemplos de Máquina de Turing
 * @param argc Quantidade de cadeias de entradas recebidas
 * @param argv Cadeias de entradas
 */
int main( int argc, char** argv ) {

	/**< Verifica se o usuário digitou alguma cadeia. */
	if ( argc <= 1 ) {
			/**<< Informa que o usuário não digitou nenhuma Cadeia e finaliza. */
		  printf( CLR_RED "\n \t Necessario digitar uma cadeia de teste \n" );
		  exit(0);
	}
	else
		/**<< Imprime a Cadeia de entrada recebida. */
		printf( CLR_BLUE "\n \t Teste da Máquina de Turing: %s \n", argv[1] );

	/**< Execução da função da máquina de turing MODELO. */
	//equipe_MODELO( argv[1] );

	equipe_012( argv[1] );

	/**< Finaliza o programa. */
	printf( CLR_RESET );
	return 0;

}
