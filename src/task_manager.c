#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "task_structs.h"
#include "task_manager.h"
#include "memory_utils.h"

void add_task(TaskList *list, Task newTask){

int taskID = list->count+1;

if (list == NULL)
{
    perror("Lista nao localizada");
}
if (list->count == list->capacity)
{
    printf("Espaco para tarefas quase cheio, aumentando espaco...\n");
    safe_reallloc(list,10);
    printf("Espaco novo realocado\n");
}


printf("Adicionando nova tarefa a lista");

    list->pTask->id = taskID;
    strcpy(list->pTask->title, newTask.title);
    strcpy(list->pTask->description, newTask.description);
    list->pTask->completed = 0;

    list =+1;

    
    



}