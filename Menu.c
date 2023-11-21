#include <stdio.h>

void inserir_nova_tarefa();
void mostrar_tarefas_cadastradas();
void buscar_por_tarefa();
void editar_informacoes_de_uma_tarefa();
void remover_tarefa();
void marcar_conclusao_de_uma_tarefa_especifica();
void salvar_lista_de_tarefas_em_um_arquivo();

int main() {
    int opcao;
    char continuar;

    do {
        printf("Escolha uma opcao:\n");
        printf("1. Inserir nova tarefa\n");
        printf("2. Mostrar tarefas cadastradas\n");
        printf("3. Buscar por tarefa\n");
        printf("4. Editar informacoes de uma tarefa\n");
        printf("5. Remover tarefa\n");
        printf("6. Marcar conclusao de uma tarefa especifica\n");
        printf("7. Salvar lista de tarefas em um arquivo, incluindo se cada uma foi finalizada ou nao\n");

        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 7) {
            printf("Opcao invalida. Digite uma opcao valida.\n");
        }
    } while (opcao < 1 || opcao > 7);

    switch (opcao) {
        case 1:
            inserir_nova_tarefa();
            break;
        case 2:
            mostrar_tarefas_cadastradas();
            break;
        case 3:
            buscar_por_tarefa();
            break;
        case 4:
            editar_informacoes_de_uma_tarefa();
            break;
        case 5:
            remover_tarefa();
            break;
        case 6:
            marcar_conclusao_de_uma_tarefa_especifica();
            break;
        case 7:
            salvar_lista_de_tarefas_em_um_arquivo();
            break;
    }

    return 0;
}