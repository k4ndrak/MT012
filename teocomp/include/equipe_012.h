#include <stdio.h>
#include "colors.h"


int equipe_012(char* fita){
    char *auxiliar = fita;
    while(*fita != '\0'){
      if(*fita == '0'){
        *fita = 'X';
        fita++;
        if(*fita == '1'){
          *fita = 'X';
          fita++;
          if(*fita == '2'){
            *fita = 'X';
            fita++;
            if(*fita == '\0'){
              *fita = '\0';
                printf(CLR_GREEN "\n \t %s \n \t %s \n", "Cadeia aceita", auxiliar);
                return 1;
            }
          }
        }
      }else{
          printf(CLR_RED "\n \t %s \n \t %s \n", "Cadeia não aceita", auxiliar);
          return 0;
      }
    }
}
