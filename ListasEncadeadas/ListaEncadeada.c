#include <stdio.h>
#include <stdlib.h>

// Definição do nó da lista encadeada
struct Node {
    int data;
    struct Node* next;
};

// Função para inserir um novo nó no início da lista
void insertAtBeginning(struct Node** head_ref, int new_data) {

    // Aloca memória para o novo nó
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));    // new_node é um ponteiro que aponta para um STRUCT NODE.

    // Atribui dados ao novo nó
    new_node->data = new_data;

    // Faz o próximo do novo nó apontar para a cabeça atual
    new_node->next = (*head_ref); // new_node->next recebe o valor contido no endereço de memória *head_ref

    // Muda a cabeça para apontar para o novo nó
    (*head_ref) = new_node; // agora o ponteiro head_ref passa a apontar para o node que acabou de ser criado.
}

// Função para deletar o nó no início da lista
void deleteAtBeginning(struct Node** head_ref) {
    if (*head_ref == NULL) {
        printf("A lista está vazia, não há nada para deletar.\n");
        return;
    }

    // Armazena a cabeça atual
    struct Node* temp = *head_ref;

    // Muda a cabeça para o próximo nó
    *head_ref = (*head_ref)->next;

    // Libera a memória do antigo nó da cabeça
    free(temp);
}

// Função para exibir os elementos da lista
void displayList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Função principal
int main() {
    // Inicializa uma lista vazia
    struct Node* head = NULL;

    // Insere elementos na lista
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);

    printf("Lista encadeada após inserções: \n");
    displayList(head);

    // Deleta um elemento da lista
    deleteAtBeginning(&head);
    printf("Lista encadeada após uma exclusão: \n");
    displayList(head);

    return 0;
}
