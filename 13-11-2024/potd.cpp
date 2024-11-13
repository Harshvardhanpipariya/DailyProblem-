 int intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
        Node* dum1 = head1;
    Node* dum2 = head2;
    
    while(dum1 != dum2) {
        dum1 = dum1 == NULL? head2:dum1->next;
        dum2 = dum2 == NULL? head1:dum2->next;
    }
    
    return dum1->data;
    
    }
