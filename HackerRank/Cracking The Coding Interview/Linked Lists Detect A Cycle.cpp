bool has_cycle(Node* head) 
{
    if(head == NULL || head->next == NULL)
    {
        return false;
    }
    Node* a = (Node*)malloc(sizeof(Node));
    Node* b = (Node*)malloc(sizeof(Node));
    a = head;
    b = head;
    a = head->next;
    b = head->next->next;
    while(b && b->next)
    {        
        if(a == b)
        {
            return true;
        }
        a = a->next;
        b = b->next->next;
    }
    return false;
}
