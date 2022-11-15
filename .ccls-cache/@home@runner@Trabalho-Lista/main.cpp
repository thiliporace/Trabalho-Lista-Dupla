// main.cpp
// TODO: Inserir sua identificação aqui, assim como autoavaliação e referências.
#include <iostream>
#include "LinkedList.h"
using namespace std;
void Print(const LinkedList* list)
{
 // TODO: Percorrer todos os nós da lista (do início ao fim)
 // e imprimir as informações de cada nó.
 // (veja a saída de exemplo no enunciado).
}
void PrintReverse(const LinkedList* list)
{
 // TODO: Percorrer todos os nós da lista em ordem inversa (do fim ao início)
 // e imprimir as informações de cada nó.
 // (veja a saída de exemplo no enunciado).
}
void PrintDoubleListInfo(const LinkedList* list)
{
 if (IsEmpty(list))
 {
 cout << "Lista vazia!\n";
 }
 else
 {
 Print(list);
 PrintReverse(list);
 }
}
int main()
{
 cout << "*** Lista Circular Duplamente Ligada/Encadeada (Doubly Circular Linked List) ***\n";
 LinkedList* list = Create();
 PrintDoubleListInfo(list);
 Insert(list, 1, "Carol");
 Insert(list, 2, "Eric");
 Insert(list, 3, "John");
 Append(list, 4, "Leo");
 Append(list, 5, "Julia");
 Append(list, 6, "Lisa");
 PrintDoubleListInfo(list);
 Clear(list);
 PrintDoubleListInfo(list);
 Insert(list, 11, "Paulo");
 Append(list, 22, "Thomas");
 Insert(list, 33, "Olga");
 Append(list, 44, "Bia");
 Insert(list, 55, "Angela");
 Append(list, 66, "Karen");
 Insert(list, 77, "Adauto");
 PrintDoubleListInfo(list);
 Node* temp = RemoveNode(list, 44);
 cout << "Nó removido -> id: " << temp->id << ", name: " << temp->name << '\n';
 // TODO: Liberar memória alocada para o nó que foi removido.
 PrintDoubleListInfo(list);
 temp = RemoveHead(list);
 cout << "Nó removido -> id: " << temp->id << ", name: " << temp->name << '\n';
 // TODO: Liberar memória alocada para o nó que foi removido.
 PrintDoubleListInfo(list);
 temp = RemoveTail(list);
 cout << "Nó removido -> id: " << temp->id << ", name: " << temp->name << '\n';
 // TODO: Liberar memória alocada para o nó que foi removido.
 PrintDoubleListInfo(list);
 // TODO: Obter o primeiro nó da lista e mostrar a mensagem apropriada,
 // de acordo com o resultado obtido.
 // TODO: Obter o último nó da lista e mostrar a mensagem apropriada,
 // de acordo com o resultado obtido.
 // TODO: Obter o nó com id 77 e mostrar a mensagem apropriada,
 // de acordo com o resultado obtido.
 // TODO: Liberar memória alocada para a lista.
 cout << "Fim.\n";
}
