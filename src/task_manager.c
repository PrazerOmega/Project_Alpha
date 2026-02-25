#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "task_structs.h"
#include "task_manager.h"
#include "memory_utils.h"

#define OK 0;
#define MEMORY_NULL 

void add_task(TaskList *list, Task newTask){
if (list == NULL)
{
    perror("Lista nao localizada");
    return;
}

int taskID = list->count;


if (list->count == list->capacity)
{
    printf("Espaco para tarefas cheio, aumentando espaco...\n");
    safe_reallloc(list->pTask,10);
    printf("Espaco novo realocado\n");
    list->capacity += 10;
}


printf("Adicionando nova tarefa a lista\n");

    list->pTask[taskID].id = taskID+1;

    list->pTask[taskID].title = malloc(100);
    list->pTask[taskID].description = malloc(100);

    if(list->pTask[taskID].description == NULL || list->pTask[taskID].title == NULL){
        perror("Erro ao alocar memoria");
        return;
    }

    strcpy(list->pTask[taskID].title, newTask.title);
    strcpy(list->pTask[taskID].description, newTask.description);
    list->pTask[taskID].completed = 0;

    list->count++;

    printf("Tarefa adicionada com sucesso!\n");
}


void remove_task(TaskList *list, int id){
    if(list == NULL){
        perror("Lista nao encontrada");
    }

    int choice = 0;

printf("Tem certeza que deseja excluir a tarefa %d?\n1- SIM\n2- Nao", id);
scanf("%d", &choice);

if(choice != 1 || choice != 2){
    printf("Opcao invalida, voltando ao menu!\n");
    return 1;
}

if (choice == 2)
{
    printf("Voltando ao menu de escolha...\n");
}else if(choice == 1){
    printf("Excluindo tarefa\n");
    list->pTask[id].completed
}



}