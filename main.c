#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(void) {

float nota1, nota2, resultado;
 
printf("\n Escreva a primeira nota %.2f", nota1);
//lendo primeiro valor 
scanf("%2f", &nota1);
   printf("\n Escreva a segunda nota %.2f", nota2);
     //lendo o segundo valor 
     scanf("%2f", &nota2);
resultado = (nota1 +nota2) / 2;
     printf("\n a media do aluno será igual a %.2f:", resultado);

  }