#include <stdio.h>

void inserir_nova_tarefa(struct Tarefa *t) {
    char nome[50];
    int dificuldade;
    int status;

    printf("Digite o nome da tarefa em até 50 caracteres:");
    scanf("%49s", nome);
    strcpy(t->Nome , nome);

    printf ("Digite a dificuldade da tarefa, sendo 1 fácil, 2 médio e 3 para uma tarefa difícil:");
    scanf("%d", &dificuldade);
    if (dificuldade < 1 || dificuldade > 3)
    {
        printf("Dificuldade inválida!\n");
        return;
    }
    strcpy(t->Dificuldade, dificuldade == 1 ? dificuldade == 2 ? "Médio" : "Difícil");

    printf ("Digite os status da tarefa, use 1 para tarefa não concluída e 2 para tarefa concluída:");
    scanf("%d", &status);
    if (status < 1 || status > 2)
    {
        printf("Status inválida!\n");
        return;
    }
    strcpy(t->Status, status == 1 ? "Não concluída" : "Concluída");

    printf("tarefa inserida com sucesso!\n");
    printf("Nome %s\n:", t->Nome);
    printf("Dificuldade %s\n:", t->Dificuldade);
    printf("Status %s\n:", t->Status);
    

}

void mostrar_tarefas_cadastradas() {
    printf("Oi 2\n");
}

void buscar_por_tarefa() {
    printf("Oi 3\n");
}

void editar_informacoes_de_uma_tarefa() {
    printf("Oi 4\n");
}

void remover_tarefa() {
    printf("Oi 5\n");
}

void marcar_conclusao_de_uma_tarefa_especifica() {
    printf("Oi 6\n");
}

void salvar_lista_de_tarefas_em_um_arquivo() {
    printf("Oi 7\n");
}

