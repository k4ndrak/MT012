/**
* @file equipe_012.h
* @author André Natã, João Marcos, Marcos Abreu, Lucas Mateus, Carlos Alberto
* @date 27 Nov 2018
* @brief Atividade Complementar para a Disciplina de Teoria da Computação 2018 \n
* Ciência da Computação \n
* Universidade Federal do Amapá
*/

#include <stdio.h>
#include "colors.h"

/**
* @brief Arquivo para reconhecer a máquina de turing de (012)'s
* @param fita Cadeia de entrada
*/

int equipe_012( char* fita ) {

    /**< Faz uma cópia da cadeia recebida. */
    char *auxiliar = fita;
    /**< Percorre cada posição da cadeia. */
    while( *fita != '\0' ) {
        /**< Verifica se a primeira posição é 0 e substitui por X. */
        if( *fita == '0' ) {
            *fita = 'X';
            fita++;
            /**< Verifica se a segunda posição é 1 e substitui por X. */
            if( *fita == '1' ) {
                *fita = 'X';
                fita++;
                /**< Verifica se a terceira posição é 2 e substitui por X. */
                if( *fita == '2' ) {
                    *fita = 'X';
                    fita++;
                    /**< Verifica se a cadeia chegou ao fim. */
                    if( *fita == '\0' ) {
                        *fita = '\0';
                        /**<< Informa ao usuário que a cadeia foi aceita e finaliza. */
                        printf( CLR_GREEN "\n \t %s \n \t %s \n", "Cadeia aceita", auxiliar );
                        return 1;
                    }
                } else {
                    /**<< A terceira posição da cadeia é diferente de 2, então informa ao usuário que ela não foi aceita e finaliza. */
                    printf( CLR_RED "\n \t %s \n \t %s \n", "Cadeia não aceita", auxiliar );
                }
            } else {
                /**<< A segunda posição da cadeia é diferente de 1, então informa ao usuário que ela não foi aceita e finaliza. */
                printf( CLR_RED "\n \t %s \n \t %s \n", "Cadeia não aceita", auxiliar );
            }
        } else {
            /**<< A primeira posição da cadeia é diferente de 0, então informa ao usuário que a cadeia não foi aceita e finaliza. */
            printf( CLR_RED "\n \t %s \n \t %s \n", "Cadeia não aceita", auxiliar );
            return 0;
        }
    }
}
