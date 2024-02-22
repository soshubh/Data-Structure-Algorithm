Node* insertAtFirst(Node* list, int newValue) {
    // Write your code here
    Node* head = list;
    Node* temp = new Node(newValue, head);
    // temp->next = head;
    return temp;

    // Node * temp = new Node(newValue);
    // temp -> next = head;
    // head = temp;
    // return head;
}
