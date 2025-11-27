#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
   int index;

    char * NomesAlunos [3] [3] = {
        {"Aluno 0", "Pt: 30", "Mt: 90"},
        {"Aluno 1", "Pt: 60", "Mt: 60"},
        {"Aluno 2", "Pt: 90", "Mt: 30"}

    };
    printf("Digite o numero do Aluno que queira ver a Nota... \n");
    printf("Para o Aluno 1, digite 0 \n");
    printf("para o Aluno 2, digite 1 \n");
    printf("para o Aluno 3, digite 2 \n");
  scanf("%d", &index);

  printf("A nota do %s são: %s, %s... \n", NomesAlunos [index][0], NomesAlunos[index][1],NomesAlunos[index][2]);



    return 0;
}
