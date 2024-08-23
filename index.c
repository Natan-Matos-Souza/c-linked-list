#include <stdio.h>
#include <stdlib.h>
#include "linked_list.c"

int main() {
    LinkedList linked_list = create_linked_list();
    add_element(10, &linked_list);
    add_element(20, &linked_list);

    printf("%i\n", linked_list.head->next->value);

    return 0;
}
