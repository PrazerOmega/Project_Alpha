#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include "task_structs.h"

void add_task(TaskList *list, Task new_task);//add uma nova tarefa, realocando se nescessario

void remove_task(TaskList *list, int id);//remove task, se guiando pelo ID

void mark_task_done(TaskList *list, int id);//muda status da tarefa para concluida

void print_list(const TaskList *list);//imprime lista

void free_list(TaskList *list);//libera lista





#endif