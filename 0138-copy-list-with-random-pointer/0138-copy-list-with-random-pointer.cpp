/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* root = NULL;
        Node* tail = NULL;
        Node* thead = head;
        int i=0;
        while(thead != NULL) 
        {
            Node* newNode = new Node(thead->val);
            thead->val = i;
            i++;
            if(root == NULL) 
            {
                root = newNode;
                tail = newNode;
            }
            else 
            {
                tail->next = newNode;
                tail = newNode;
            }
            thead = thead->next;
        }

        Node* clone = root;
        while(head!=NULL){
            if(head->random!=NULL){
                int i = 0;
                Node* temp = root;
                while(temp!=NULL) {
                    if(i==head->random->val)
                    {
                        clone->random = temp;
                        break;
                    }
                    i++;
                    temp=temp->next;
                }
            }
            head=head->next;
            clone=clone->next;
        }
        return root;
    }
};