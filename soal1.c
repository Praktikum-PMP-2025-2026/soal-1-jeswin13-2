/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 4 - Dynamic Structures
 *   Hari dan Tanggal    : Rabu, 6-05-2026
 *   Nama (NIM)          : Jeswinder Singh (13224063)
 *   Nama File           : soal1-4.c
 *   Deskripsi           : Program Linked List
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char id[50];
    int durasi;
    struct Node* next;
} Node;

int main(){
    int n;
    scanf("%d",&n);
    
    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i<n; i++){
        Node* newNode = (Node*)malloc(sizeof(Node));
        scanf ("%s %d", newNode->id, &newNode->durasi);
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    printf("ORDER");

    Node *x = head;
    int a = 0;
    int b = 0;

    for (int i = 0; i <n; i++){
        printf(" %s",x->id);
        a += b;
        b += x->durasi;
        
        Node *temp = x;
        x = x->next;
        free (temp);
    }

    printf("\n");
    printf("WAIT %d\n",a);
    return 0;
}
