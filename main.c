#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

typedef struct link link_t;
link_t* create_link(void* data, link_t* next);

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
    append(createdList, create_link(&data, NULL));
    append(createdList, create_link(&data, NULL));
    append(createdList, create_link(&data, NULL));
    append(createdList, create_link(&data, NULL));


    destroy_list(createdList);
    return 0;
}

link_t* create_link(void* data, link_t* next) {
    link_t* newLink = calloc(1, sizeof(link_t));
    newLink->data = data;
    newLink->next = next; 
    
    return newLink;
}

void append(list_t* list, void* linkToAppend) {
    if (list->first == NULL) {
        list->first = linkToAppend;
        return;
    }
    
    link_t* link = list->first;
    
    while (1) {
        if (link->next == NULL) {
            link->next = linkToAppend;
            break;
        }

        link = link->next;
    }
}

list_t* create_list() {
    list_t* newList = calloc(1, sizeof(list_t));
    return newList;
}

void destroy_list(list_t* list) {
    link_t* currentLink = list->first;

    while (1) {
        if (currentLink == NULL) {
            free(list);
            break;
        }
        printf("removed one\n");
        
        link_t* temp = currentLink;
        currentLink = currentLink->next;
        free(temp);
    }
}
