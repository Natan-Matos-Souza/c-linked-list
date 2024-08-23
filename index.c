#include <stdio.h>
#include <stdlib.h>
#include "linked_list.c"

int main() {
    LinkedList linked_list = create_linked_list();
    add_element(10, &linked_list);
    add_element(20, &linked_list);

    show_all_elements(&linked_list);

    return 0;
}
