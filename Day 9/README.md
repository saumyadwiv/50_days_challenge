######## Swap Nodes in Linked List ########

1. Initialize Pointers:

   - Use two pointers `left` and `right`, both starting at the head of the linked list.

2. Find k-th Node from Beginning:

   - Move the `right` pointer forward `k - 1` times to reach the k-th node.
   - Save a reference to this node in `kth`.

3. Find k-th Node from End:

   - Move both `left` and `right` forward one step at a time until `right` reaches the end of the list.
   - At this point, `left` will be at the k-th node from the end.

4. Swap Values:

   - Swap the values of the nodes `kth` and `left` (i.e., k-th from start and k-th from end).

5. Return the Head:

   - The list structure remains unchanged, only values are swapped.
   - Return the original head of the list.

Example:

Input: 1 → 2 → 3 → 4 → 5, k = 2  
Output: 1 → 4 → 3 → 2 → 5  


######## Find N-th Digit ########

1. Determine Digit Length Range:

   - Initialize `digitInNum = 1`, `start = 1`, and `end = 9`.
   - These represent the digit length, starting number, and count of numbers with current digit length.

2. Narrow Down to Correct Range:

   - While `n > digitInNum * end`:
     - Subtract `digitInNum * end` from `n`.
     - Increment `digitInNum`.
     - Multiply `start` and `end` by 10 to move to the next digit length.

   This loop finds the digit range where the nth digit lies (e.g., 1-digit, 2-digit, etc.).

3. Find Exact Number:

   - Calculate the actual number where the digit lies:  
     `num = start + (n - 1) / digitInNum`.

4. Extract the Target Digit:

   - Convert `num` to a string.
   - Return the digit at index `(n - 1) % digitInNum` in the string.

5. Return as Integer:

   - Convert the character back to integer by subtracting `'0'`.

Example:

Input: n = 15  
- 1–9 → 9 digits  
- 10–99 → 2-digit numbers → next 6 digits (10 to 12)  
- 15th digit is '2' from the number 12  
Output: 2
