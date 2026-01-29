#ifndef TASK_STRUCT_H
#define TASK_STRUCT_H

#include <stdbool.h>

typedef struct
{
    unsigned int id;
    char *title;
    char *description;
    bool completed;
}Task;

typedef struct
{
    Task *pTask;
    unsigned int count;
    int capacity;
}TaskList;


#endif TASK_STRUCT_H