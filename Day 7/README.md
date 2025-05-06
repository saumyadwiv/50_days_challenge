######## Plus One ########

1. Handle Simple Case:

    Check if the last digit is less than 9:
    
    If true, simply increment it and return the modified array.
    
    This handles cases like [1,2,3] → [1,2,4].

2. Handle Carry from the End:

    If the last digit is 9:
    
    Traverse the digits from end to start.
    
    Look for the first non-9 digit, increment it, and record its index (a).
    
    Set all digits after index a to 0.
    
    Example: [1,2,9] → [1,3,0].

3. Handle All 9s Case:

    If all digits are 9 (like [9,9,9]), the flag t remains false:
    
    Create a new array starting with 1 followed by n zeros.
    
    Example: [9,9] → [1,0,0].

4. Return the Result:

    If a new array (ans) is created due to full carryover, return it.
    
    Otherwise, return the modified digits array.


######## Rotate List #########

1. Handle Edge Cases:

    If the list is empty, has one node, or k == 0, return the original head.

2. Find Length and Tail:

    Traverse the list to find its length and the tail node.
    
    Count the number of nodes while moving to the end.

3. Normalize Rotation:

    Compute k % length to avoid unnecessary full rotations.
    
    If the result is zero, return the original list.

4. Find Rotation Point:

    Calculate the breaking point at length - k.
    
    Traverse to the node just before this breaking point.

5. Perform Rotation:

    Break the list at the breaking point.
    
    Set the next of tail to the original head (make it circular temporarily).
    
    Update the head to the new rotated head.

6. Return New Head:

    Return the node after the break point as the new head of the rotated list.
