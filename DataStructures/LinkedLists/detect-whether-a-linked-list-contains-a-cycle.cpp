

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *temp=head;
    unordered_map<SinglyLinkedListNode*, bool> m;

    while(temp!=NULL)
    {
        if(m[temp]==true)
        return true;

        // Set
        m[temp]=true;
        temp=temp->next;
    }

    return false;
}





