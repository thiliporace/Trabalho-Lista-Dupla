#pragma once
#include <iostream>
#include <string>

struct Node{
  int id;
  std::string nome;
  Node *next;
  Node *previous;
};

struct LinkedList{
  int count;
  Node *head;
  Node *tail;
};

LinkedList *Create();
bool IsEmpty(const LinkedList *lista);
void Insert(LinkedList *lista,int id,std::string nome);
Node* RemoveHead(LinkedList *lista);
Node* RemoveTail(LinkedList *lista);
Node *RemoveNode(LinkedList *lista, int value);


