######## Odd Even Linked List ########

1. Handle Edge Cases:

    - If the linked list is empty or has only one node, return it as it is.
    - These cases don’t require any rearrangement.

2. Initialize Pointers:

    - Set `odd` to point at the head (first node).
    - Set `even` to point at the second node (head->next).
    - Keep a reference to the head of the even list in `evenHead` to reconnect later.

3. Rearranging Nodes:

    - Loop while `even` and `even->next` are not NULL:
        - Point `odd->next` to the node after even (`even->next`) — this is the next odd node.
        - Move the `odd` pointer forward.
        - Point `even->next` to the node after the next (`even->next->next`) — this is the next even node.
        - Move the `even` pointer forward.

4. Connecting Even List:

    - After rearranging, link the last odd node's `next` to the `evenHead`.
    - This joins the even nodes at the end of the odd list.

5. Return the Modified List:

    - Return the `head` of the modified linked list.

Example:

Input: 1 → 2 → 3 → 4 → 5  
Output: 1 → 3 → 5 → 2 → 4


######## Excel Column Title to Number ########

1. Initialize a Counter:

    - Start with `col = 0` to accumulate the column number.

2. Process Each Character from Right to Left:

    - Loop through the string from the last character to the first.

3. Convert Each Character:

    - For a character `ch`, its value is `(ch - 'A' + 1)`.
    - Multiply it by `26^position_from_right` where position starts at 0.
    - Add the result to `col`.

    This is similar to converting a number from base 26 to decimal.

4. Return the Column Number:

    - After processing all characters, return the final value of `col`.

Example:

Input: "AB"  
Calculation:
- 'A' = 1 → 1 * 26 = 26
- 'B' = 2 → 2 * 1 = 2  
Total = 26 + 2 = 28  
Output: 28
