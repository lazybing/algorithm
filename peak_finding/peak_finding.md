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

 
