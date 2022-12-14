//
// Created by profe on 27/11/2022.
//

#ifndef C_LINKED_LIST_LINKEDLIST_H
#define C_LINKED_LIST_LINKEDLIST_H

typedef struct list list_t;

// any functions for the list

// create a new list and return a pointer to it
list_t* create_list();

// destroy a created list using the passed pointer to the list
void destroy_list(list_t* list);

// iterator 
// insertion
// lookup

// get a specific element via an index. 0 based.
void* get(list_t* list, int index);

// count

#endif //C_LINKED_LIST_LINKEDLIST_H
