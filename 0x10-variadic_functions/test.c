#include <stdio.h>

typedef struct list {
    char* p;
    unsigned int len;
    struct list* ptr;
} list_t;

int main() {
    printf("Size of list_t: %zu bytes\n", sizeof(list_t));
    return 0;
}
