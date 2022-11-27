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

    link_t* firstLink = calloc(1, sizeof(link_t));
    createdList->first = firstLink;

    int data = 10;
    firstLink->data = &data;

    int* gottenData = createdList->first->data;
    printf("%i\n", *gottenData);

    link_t* secondLink = calloc(1, sizeof(link_t));
    firstLink->next = secondLink;

    int moreData = 234;
    secondLink->data = &moreData;

    int* data2ElectricBoogaloo = createdList->first->next->data;
    printf("%i\n", *data2ElectricBoogaloo);

    destroy_list(createdList);
    return 0;
}

list_t* create_list() {
    list_t* newList = calloc(1, sizeof(list_t));
    return newList;
}

void destroy_list(list_t* list) {
    free(list); 
}
