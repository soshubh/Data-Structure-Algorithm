Node *deleteLast(Node *list){
    // Write your code here
    if(list==NULL || list->next==NULL)
     return list;
    
    Node* temp=list;
    // 4 2 5 1
    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    // cout<<temp->data<<"\n";

    delete temp->next;
    temp->next=nullptr;
    return list;
}
