#include <iostream>
using namespace std;

struct Node {
     int data;
     Node* next;
     Node(int val) : data(val), next(nullptr) {}
};

bool search(Node* head, int key) {
     Node* current = head;
     while (current != nullptr) {
          if (current->data == key) {
               return true;
          }
               current = current->next;
     }
               return false;
}

int main() {

     Node* head = new Node(1);
     head->next = new Node(2);
     head->next->next = new Node(3);
     head->next->next->next = new Node(4);

     int key = 3;
     if (search(head, key)) {
          cout << key << " found in the list." << endl;
     } else {
          cout << key << " not found." << endl;
     }

     Node* current = head;
     while (current != nullptr) {
          Node* temp = current;
          current = current->next;
          delete temp;
     }

     return 0;
}
