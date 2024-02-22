Node* constructLL(vector<int>& arr) {
    // Write your code here\
    
    if (arr.empty())
     return nullptr;

    Node* h= new Node(arr[0]);
    Node* mover=h;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp; 
    }
    return h;
}
