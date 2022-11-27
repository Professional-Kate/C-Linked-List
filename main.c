#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

typedef struct link link_t;

struct link {
    void* data;
    link_t* next;
};

struct list {
    link_t* first;
};


int main() {
    list_t* createdList = create_list();
    destroy_list(createdList);

    printf("In main(): \n%p\n", createdList);
    
    return 0;
}

list_t* create_list() {
    list_t* newList = calloc(1, sizeof(list_t));
    printf("In create_list(): \n%p\n", newList);
    return newList;
}

void destroy_list(list_t* list) {
    printf("In destroy_list(): \n%p\n", list);
    free(list); // we are only freeing the stack memory?
}
