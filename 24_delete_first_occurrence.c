#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteKey(struct Node **head, int key)
{
    struct Node *temp = *head;
    struct Node *prev = NULL;

    if (temp != NULL && temp->data == key)
    {
        *head = temp->next;
        free(temp);
        printf("Deleted the head node with key %d.", key);
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Key %d not found in the list.", key);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("Deleted node with key %d.", key);
}

void printList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty.");
        return;
    }
    printf("Linked list elements: ");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("");
}

int main()
{
    int n, data, key;
    struct Node *head = NULL;

    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    printf("Enter the elements:\n ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        insertEnd(&head, data);
    }

    printf("Original list:");
    printList(head);

    printf("Enter the key to delete: ");
    scanf("%d", &key);

    deleteKey(&head, key);

    printf("List after deletion:");
    printList(head);

    return 0;
}
