#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "task_structs.h"
#include "task_manager.h"
#include "memory_utils.h"

void add_task(TaskList *list, Task new_task){
if (list == NULL)
{
    perror("Lista nao localizada");
}
if (list->count == list->capacity)
{
    printf("Espaco para tarefas quase cheio, aumentando espaco...");
    safe_reallloc(new_task,list->capacity+10);
}

    

    
    



}