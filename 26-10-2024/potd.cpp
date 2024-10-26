/*
  Node is defined as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution {
  public:
    int count(struct Node* head, int key) {
        if(head==NULL)
        {
            return 0;
        }
        
        Node* curr = head;
        int count = 0;
        while(curr!=NULL)
        {
            if(curr->data == key)
            {
                count++;
            }
            
            
            curr = curr->next;
        }
        
        return count;
    }
};