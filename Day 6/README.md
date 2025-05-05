######## Remove Elements from a Linked List ########

1. Create a Dummy Node:

    A new node (dummy) is created and its next points to the head of the original list.
    
    This helps handle edge cases, especially when the head node needs to be deleted.

2. Initialize Two Pointers:

    prev starts at the dummy node.
    
    curr starts at the actual head of the list.

3. Traverse the List:

    While curr is not null:
    
    If curr->val == val, it means this node should be removed:
    
    Update prev->next to skip curr (i.e., prev->next = curr->next).
    
    Move curr forward to prev->next.
    
    Otherwise:
    
    Move both prev and curr forward by one node.

4. Return the New Head:

    After traversal, return dummy->next, which points to the head of the modified list.



######## Happy Number ########

1. Base Case:

    If n == 1, immediately return true because 1 is a happy number.

2. Loop Until n Becomes 1 or Enters a Cycle:

    Initialize sum = 0.
    
    While n > 1, do the following:
    
    Extract each digit of n, square it, and add it to sum.
    
    Once all digits are processed, check:
    
    If sum == 1, return true.
    
    If sum == 4, return false (because 4 is part of a known cycle in unhappy numbers).
    
    Set n = sum and reset sum = 0.

3. Final Return:

    If the loop exits without hitting 1, return false.

