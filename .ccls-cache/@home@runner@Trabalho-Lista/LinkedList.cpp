#include "LinkedList.h"

LinkedList *Create(){
  LinkedList *lista = new LinkedList;
  lista -> count = 0;
  lista -> head = lista -> tail = nullptr;
  return lista;
}

bool IsEmpty(const LinkedList *lista){
  if ((lista -> head == nullptr) && (lista -> tail == nullptr)) return true;
  return false;
}

void Insert(LinkedList *lista,int id,std::string nome){
  Node *nodo = new Node;
  nodo -> id = id;
  nodo -> nome = nome;
  lista -> head -> previous = nodo;
  nodo -> next = lista -> head;
  lista -> head = nodo;
  lista -> count++;
}

void Append(LinkedList *lista, int id, std::string nome){
  Node *nodo = new Node;
  lista -> tail -> next = nodo;
  nodo -> previous = lista -> tail;
  lista -> tail = nodo;
  lista -> count++;
}

Node* RemoveHead(LinkedList *lista){
  if (IsEmpty(lista) == true) return NULL;
  Node *toRemove = new Node;
  toRemove -> id = lista -> head -> id;
  toRemove -> nome = lista -> head -> nome;
  lista -> head = lista -> head -> next;
  lista -> head -> previous = nullptr;
  lista -> head -> previous -> next = nullptr;
  lista -> count--;
  return toRemove;
}

Node* RemoveTail(LinkedList *lista){
  if (lista -> head == lista -> tail) RemoveHead(lista);
  Node *toRemove = new Node;
  toRemove -> id = lista -> tail -> id;
  toRemove -> nome = lista -> tail -> nome;
  lista -> tail = lista -> tail -> previous;
  lista -> tail -> next = nullptr;
  lista -> tail -> next -> previous = nullptr;
  lista -> count--;
  return toRemove;
}

Node *RemoveNode(LinkedList *lista, int value){
  Node *toRemove = new Node;
  toRemove = lista -> head;
  toRemove -> previous = nullptr;
  while ((toRemove != nullptr)&&(toRemove -> id != value)){
    toRemove -> previous = toRemove;
    toRemove = toRemove -> next;
  }
  if (toRemove == nullptr) return NULL;
  else if (toRemove == lista -> head) return RemoveHead(lista);
  else if (toRemove == lista -> tail) return RemoveTail(lista);
  else{
    toRemove -> previous -> next = toRemove -> next;
    lista -> count--;
    toRemove -> next = nullptr;
    return toRemove;
  }
}

void Clear(LinkedList *lista){
  Node *nodo = lista -> head;
  Node *next = nullptr;
  while (nodo != nullptr){
    next = nodo -> next;
    delete[] nodo;
    nodo = next;
  }
  lista -> head = lista -> tail = nullptr;
  lista -> count = 0;
}

void Destroy(LinkedList *lista){
  Clear(lista);
  delete[] lista;
}

Node *GetHead(LinkedList *lista){
  return lista -> head;
}

Node *GetTail(LinkedList *lista){ 
  return lista -> tail;
}

Node *GetNode(LinkedList *lista, int value){
  Node* nodo = new Node;
  nodo = lista -> head;
  while (nodo != nullptr){
    if (nodo -> id == value) return nodo;
    nodo = nodo -> next;
  }
  return nodo = nullptr;
}

int Count(LinkedList *lista){ 
  return lista -> count;
}