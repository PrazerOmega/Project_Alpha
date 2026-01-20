#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "task_structs.h"
#include "task_manager.h"
#include "memory_utils.h"

void add_task(TaskList *list, Task new_task){
    if (list == NULL)
    {
        perror("Lista invalida");
        return;
    }
    if (list->capacity == list->count)
    {
        printf("Capacidade maxima alcancada\n");
        printf("Realocando espaco\n");
        safe_reallloc(list, list->capacity +1);
        if (list == NULL)
        {
            perror("Erro ao realocar memoria");
            return;
        }
        printf("Memoria realocada com sucesso");
    }
    
    list->pTask->id = list->count;
    list->pTask->title = 
    list->pTask->description
    

    
    



}