#include <iostream>

struct Node
{
  int data;
  Node *next;
};

Node *head = new Node();

void insert_at_beginning(int node_value)
{
  Node *temp = new Node();
  temp->data = node_value;
  temp->next = head;

  head = temp;
}

void traverse_and_print(Node *head)
{
  Node *temp = head;
  while (temp->next != NULL)
  {
    printf("%d\n", temp->data);
    temp = temp->next;
  }
}

int main()
{
  // create a new linked list
  head->next = NULL;

  insert_at_beginning(1);
  insert_at_beginning(2);
  insert_at_beginning(3);

  traverse_and_print(head);

  return 0;
}