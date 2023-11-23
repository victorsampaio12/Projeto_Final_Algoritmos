#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tarefa {
    char Nome[50];
    char Dificuldade[20];
    char Status[20];
} Tarefa;


// Struct para a lista de trefas
typedef struct listadeTrarefas {
    Tarefa *tarefas;
    int posicaoAtual; 
} Lista;


void inserir_nova_tarefa(Lista l) {
    char nome[50];
    int dificuldade;
    int status;
   

    printf("Digite o nome da tarefa em até 50 caracteres:");
    scanf(" %49[^\n]", nome);
    //Pega a tarefa l e dentro dela a posicao que ela está e altera só o nome dessa tarefa, dentro da lista de tarefas
    strcpy(l.tarefas[l.posicaoAtual].Nome , nome);

    printf ("Digite a dificuldade da tarefa, sendo 1 facil, 2 medio e 3 para uma tarefa dificil:");
    scanf("%d", &dificuldade);
    if (dificuldade < 1 || dificuldade > 3)
    {
        printf("Dificuldade invalida!\n");
        return;
    }
    strcpy(l.tarefas[l.posicaoAtual].Dificuldade, dificuldade == 1 ? "facil" : dificuldade == 2 ? "Medio" : "Dificil");

    printf ("Digite os status da tarefa, use 1 para tarefa não concluída e 2 para tarefa concluida:");
    scanf("%d", &status);
    if (status < 1 || status > 2)
    {
        printf("Status invalida!\n");
        return;
    }
    strcpy(l.tarefas[l.posicaoAtual].Status, status == 1 ? "Não concluida" : "Concluida");

    printf("tarefa inserida com sucesso!\n");
    printf("Nome :%s\n", l.tarefas[l.posicaoAtual].Nome);
    printf("Dificuldade :%s\n", l.tarefas[l.posicaoAtual].Dificuldade);
    printf("Status :%s\n", l.tarefas[l.posicaoAtual].Status);
    

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

