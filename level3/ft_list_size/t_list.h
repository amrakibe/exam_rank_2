#ifndef __LIST_H__
#define __LIST_H__

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif