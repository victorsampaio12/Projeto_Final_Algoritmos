#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tarefa {
    char Nome[50];
    char Dificuldade[20];
    char Status[20];
} Tarefa;

typedef struct listadeTrarefas {
    Tarefa *tarefas;
    int posicaoAtual; 
} Lista;


void inserir_nova_tarefa(Lista l) {
    printf("Oi 1\n");
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

 void marcar_conclusao_de_uma_tarefa_especifica(Lista l) {
    mostrar_tarefas_cadastradas(l);

    if (l.posicaoAtual == 0) {
        printf("Nenhuma tarefa cadastrada.\n");
        return;
    }

    int indice;
    printf("Digite o numero da tarefa concluida: ");
    scanf("%d", &indice);

    if (indice >= 1 && indice <= l.posicaoAtual) {
        strcpy(l.tarefas [indice - 1].Status, "CONCLUIDA");
        printf("Tarefa marcada como concluida.\n");
    } else {
        printf("Indice invalido.\n");
    }
}

void salvar_lista_de_tarefas_em_um_arquivo() {
    printf("Oi 7\n");
}

