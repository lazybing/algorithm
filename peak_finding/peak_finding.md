## Peak Finder
### One-Dimensional Version
Position 2 is a peak if and only if b >= a and b >=c, Position 9 is a peak if i >= h

**Problem Description**
1. Using binary search approach one of the peaks in the array can be found.
2. It returns the first peak found as a result.
3. The time complexity of the algorithm is O(log(n))

**Problem solution**
1. Implement the binary search to find a peak in the array.
2. If the middle elements is more than its both neighbors, then it is the peak
3. Otherwise, split the array and check the same
4. Exit

### Two-Dimensional Version

a is a 2D-peak if a >= b, a >= d, a >= c, a >= e

This problem is mainly an extension of Find a peak element in 1D array. We apply similar binary search based solution here.

1. Consider mid column and find maximum element in it.
2. Let index of mid column be 'mid', value of maximum element in mid column be 'max' and maximum element be at mat[max_index][mid].
3. If max >= A[index][mid-1] && max >= A[index][pick+1], max is a peak, return max.
4. If max < mat[max_index][mid-1], recur for left half of matrix.
5. If max < mat[max_index][mid+1], recur for right half of matrix.
 
### References
1. [C++ Program to Find the peak element of an array using Binary Search approach](https://www.sanfoundry.com/cpp-program-find-peak-element-array-binary-search/)
2. [Find a peak element in a 2D array](https://www.geeksforgeeks.org/find-peak-element-2d-array/)
3. [MIT course Algorithmic Thinking, Peak Finding](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-006-introduction-to-algorithms-fall-2011/lecture-videos/lecture-1-algorithmic-thinking-peak-finding/)
