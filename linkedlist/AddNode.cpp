
class Node {
public:
  int value;
  Node* next;
};

void printList(Node* n){
while (n != NULL) {
  cout << n->value << endl;
  n = n->next;
};

// To add a node AT THE BEGGINING OF THE LIST
void insertAtTheFront(Node** head, int newValue){
  //1. Prepare a newNode
  Node* newNode = new Node();
  newNode->value = newValue;
  //2. Insert in front of current head
  newNode->next = *head;
  //3. Make newNode the head
  *head = newNode;

  //void func(Node* head)	You can modify the node it points to, but not change the head itself
  //void func(Node** head)	You can modify the head itself (update the pointer)
};

//To add a node AT THE END OF THE LIST
void insertAtTheEnd(Node** head, int newValue){
  //1. Prepare a newNode
  Node* newNode = new Node();
  newNode->value = newValue;
  newNode->next = NULL;   //At the end
  //2. Check if LL is empty, newNode will be the head
  if (*head  == NULL){
    *head = newNode;
    return;
  }
  //3. If it's not, iterate to find end
  Node* last = *head;
  while (last->next != NULL){
    last = last->next;
  }
  //4. Make the last node point to newNode
  last->next = newNode;
};


//To add a node AFTER ANOTHER NODE
void insertAfter(Node* previous, int newValue){
  //1. Check if previous exists, if it does not return null
  if (previous == NULL){
    cout << "Previous node does not exist." << endl;
    return;
  }
  //2. If it does prepare a newNode
  Node* newNode = new Node();
  newNode->value = newValue;
  //3. Make newNode point to previous->next, and previous->Next to be newNode
  newNode->next = previous->next;
  previous->next = newNode;
};

  
  

int main() {
  Node* head = new Node();
  Node* second = new Node();
  Node* third = new Node();

  head->value = 1;
  head>next =second;
  second->value = 2;
  second->next = third;
  third->value = 3;
  third->next = NULL;

//To make it shorter, we can also initialize the class to accept the values at declaration
//    Node(int v, Node* n = nullptr) {
//      value = v;
//      next = n;
//    }
//Then, in main:
//  Node* third = new Node(3);
//  Node* second = new Node(2, third);
//  Node* head = new Node(1, second);

  
