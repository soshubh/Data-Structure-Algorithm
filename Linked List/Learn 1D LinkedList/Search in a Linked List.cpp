int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    if(head==NULL)
     return 0;
    if(head->data==k)
     return 1;
    searchInLinkedList(head->next,k);
}
