#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

typedef struct link link_t;
link_t* create_link(void* data, link_t* next);
void append(list_t* list, void* data);

struct link {
    void* data;
    link_t* next;
};

struct list {
    link_t* first;
};


int main() {
    list_t* createdList = create_list();
    
    int data = 24;
    append(createdList, &data);
    append(createdList, &data);
    append(createdList, &data);
    append(createdList, &data);

    destroy_list(createdList);
    return 0;
}

link_t* create_link(void* data, link_t* next) {
    link_t* newLink = calloc(1, sizeof(link_t));
    newLink->data = data;
    newLink->next = next; 
    
    return newLink;
}

void append(list_t* list, void* data) {
    link_t* createdLink = create_link(&data, NULL);
    
    // we need to set the first link somehow
    if (list->first == NULL) {
        list->first = createdLink;
        return;
    }
    
    link_t* link = list->first;
    
    while (link->next != NULL) {
        link = link->next;
    }
    
    link->next = createdLink;
}

list_t* create_list() {
    list_t* newList = calloc(1, sizeof(list_t));
    return newList;
}

void destroy_list(list_t* list) {
    link_t* currentLink = list->first;

    while (currentLink != NULL) {
        link_t* temp = currentLink;
        currentLink = currentLink->next;
        free(temp);
    }
    
    free(list);
}
