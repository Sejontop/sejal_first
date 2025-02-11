#include <iostream>
using namespace std;

// Create a struct with two values
struct Node {
    int value1;
    //int value2;
    Node* next;
    
    // Constructor to initialize the node with a given value
    Node(int val): value1(val), next(nullptr) {}
   // Node(int val2): value2(val2), next(nullptr) {}
};

class linkedlist{
    private:
    Node* head;
    
    public:
    linkedlist(): head(nullptr){}
    
};

int main() {
    // Creating head of the Linked list
    Node* head = new Node(1);
    cout << "The value at head is " << head -> value1 << '\n';
    Node* new_head = new Node(2);
    cout << "The value at head is " << new_head -> value1 << '\n';
    //cout<<"the linked is: "<< new_head ->* value1 -> value2 << endl;
}
