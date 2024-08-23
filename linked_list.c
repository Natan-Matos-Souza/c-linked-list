typedef struct Node
{
    int value;
    struct Node *next;
} Node;

typedef struct LinkedList
{
    Node *head;
    Node *previous;
} LinkedList;

LinkedList create_linked_list() 
{
    LinkedList linked_list;
    linked_list.head = NULL;
    linked_list.previous = NULL;
    return linked_list;
}

void add_element(int value, LinkedList *list) 
{
    Node *element = (Node*) malloc(sizeof(Node));
    element->value = value;
    element->next = NULL;

    if (!list->head) {
        list->head = element;
        list->previous = element;
        return;
    }

    list->previous->next = element;
    list->previous = element;
}

void show_all_elements(LinkedList *list) 
{
    Node *element = list->head;

    while (element) {
        printf("%i\n", element->value);
        element = element->next;
    }
}