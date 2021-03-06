struct SinglyLinkedListNode{
    int data;
    SinglyLinkedListNode *next;
};

bool has_cycle(SinglyLinkedListNode* list) {
    SinglyLinkedListNode *slow_p = list, *fast_p = list; 
  
    while (slow_p && fast_p && fast_p->next) { 
        slow_p = slow_p->next; 
        fast_p = fast_p->next->next; 
        if (slow_p == fast_p) { 
            return 1; 
        } 
    } 
    return 0; 

}