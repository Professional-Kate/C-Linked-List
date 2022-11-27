#include <stdio.h>
#include <stdlib.h>

typedef struct link link_t; 
typedef struct list list_t; 

struct link {
    void* data;
    link_t* next;
};

struct list {
    link_t* first;
    size_t count;
};


int main() {
   
    return 0;
}
