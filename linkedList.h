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

// add a link to the end of the list
void append(list_t* list, void* linkToAppend);

// iterator 
// insertion
// lookup
// getting
// count

#endif //C_LINKED_LIST_LINKEDLIST_H
