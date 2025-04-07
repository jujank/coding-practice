
class Node {
public:
  int value;
  Node* next;
};

void printList(Node* n){
while (n != NULL) {
  cout << "n->value" << endl;
  n = n->next;

// To add a node AT THE BEGGINING OF THE LIST
void insertAtTheFront(Node* head, int newValue){
  
  

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

  
