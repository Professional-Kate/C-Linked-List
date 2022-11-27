#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

typedef struct link link_t;
link_t* create_link(void* data);

struct link {
    void* data;
    link_t* next;
};

struct list {
    link_t* first;
};


int main() {
    list_t* createdList = create_list();

    int data = 32;
    createdList->first = create_link(&data);

    destroy_list(createdList);
    return 0;
    // testing
}

link_t* create_link(void* data) {
    link_t* newLink = calloc(1, sizeof(link_t));
    newLink->data = data;
    newLink->next = NULL; // not needed but it's nice to be explicit
    
    return newLink;
}

list_t* create_list() {
    list_t* newList = calloc(1, sizeof(list_t));
    return newList;
}

void destroy_list(list_t* list) {
    free(list); 
}
