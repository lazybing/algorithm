## Insertion Sort

Insertion-Sort(A, n) --> A[1...n]  

for j <-- 2 to n  
    insert key A[j] into the already sorted sub-array A[1...j-1].  
    by pairwise key-swaps down to its right position  

### Example of insertion sort

original array :  [8, 2, 4, 9, 3, 6]  
step 1 : [2, 8, 4, 9, 3, 6]  
step 2 : [2, 4, 8, 9, 3, 6]  
step 3 : [2, 4, 8, 9, 3, 6]  
step 4 : [2, 3, 4, 8, 9, 6]  
step 5 : [2, 3, 4, 6, 8, 9]  

Worst-case performance : O(n^2) comparisons and swaps  
Best-case performance : O(n) comparisons, O(1) swaps  
Average performance : O(n^2) comparisons and swaps  
Worst-case space complexity : O(n) total, O(1) auxiliary  

The insertion sort has several advantages:simple implementation,stable.  

