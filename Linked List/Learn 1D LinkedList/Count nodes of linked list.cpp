int length(Node *head)
{
	//Write your code here
    int n=0;
    while(head!=NULL)
    {
        head=head->next;
        n++;
    }
    // cout<<n<<"\n";
    return n;
}
