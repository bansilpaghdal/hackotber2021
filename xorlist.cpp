#include <bits/stdc++.h>
using namespace std;
//node structure of linked list
struct Node {
   int data;
   struct Node* next;
};
//creation of new node
Node* newNode(int data){
   Node* temp = new Node;
   temp->data = data;
   temp->next = NULL;
   return temp;
}
//printing singly linked list
void print(Node* head){
   while (head) {
      cout << head->data << " ";
      head = head->next;
   }
   cout << endl;
}
//calculating XORed values
Node* XOR(Node* a, Node* b){
   return (Node*)((uintptr_t)(a) ^ (uintptr_t)(b));
}
//converting the singly linked list
void convert(Node* head){
   Node* curr = head;
   Node* prev = NULL;
   Node* next = curr->next;
   while (curr) {
      next = curr->next;
      curr->next = XOR(prev, next);
      prev = curr;
      curr = next;
   }
}
//printing the XORed linked list
void printXOR(Node* head){
   Node* curr = head;
   Node* prev = NULL;
   while (curr) {
      cout << curr->data << " ";
      Node* temp = curr;
      curr = XOR(prev, curr->next);
      prev = temp;
   }
   cout << endl;
}
int main(){
   Node* head = newNode(1);
   head->next = newNode(2);
   head->next->next = newNode(3);
   head->next->next->next = newNode(4);
   cout << "Before Conversion : " << endl;
   print(head);
   convert(head);
   cout << "After Conversion : " << endl;
   printXOR(head);
   return 0;
}
