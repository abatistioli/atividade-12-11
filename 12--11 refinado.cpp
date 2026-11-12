#include <stdio.h>

int main() {
    int aluno;
    int opcao;

    // DO WHILE: controla o menu principal
    do {
        printf("\n");
        printf("========================================\n");
        printf("     SISTEMA DE CONTROLE DE ALUNOS      \n");
        printf("========================================\n");
        printf("  1 - Iniciar chamada e conferencia\n");
        printf("  0 - Encerrar programa\n");
        printf("----------------------------------------\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {

            printf("\n");
            printf("========================================\n");
            printf("         CHAMADA DOS ALUNOS             \n");
            printf("========================================\n");
            printf("Ordem crescente (1 a 10)\n");
            printf("----------------------------------------\n");

            // FOR: contagem crescente
            for (aluno = 1; aluno <= 10; aluno++) {
                printf("%d\n", aluno);
            }

            printf("--\n");

            printf("\n");
            printf("========================================\n");
            printf("       CONFERENCIA DOS ALUNOS           \n");
            printf("========================================\n");
            printf("Ordem decrescente (10 a 1)\n");
            printf("----------------------------------------\n");

            // WHILE: contagem decrescente
            aluno = 10;

            while (aluno >= 1) {
                printf("%d\n", aluno);
                aluno--;
            }

            printf("\n");
            printf("----------------------------------------\n");
            printf("    CONFERENCIA FINALIZADA!             \n");
            printf("----------------------------------------\n");

        } else if (opcao == 0) {

            printf("\n");
            printf("========================================\n");
            printf("       PROGRAMA ENCERRADO!              \n");
            printf("========================================\n");

        } else {

            printf("\n");
            printf("Opcao invalida! Tente novamente.\n");

        }

    } while (opcao != 0);

    return 0;
}

