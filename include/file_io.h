#ifndef FILE_IO_H
#define FILE_IO_H

#include "task_structs.h"

void save_task_to_file(const char* filename, const TaskList *list);//salva arquivo binario

void load_task_to_file(const char* filename,TaskList *list);

#endif 