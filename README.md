# MinAvgTwoSlice
 
A non-empty array A consisting of N integers is given. A pair of integers (P, Q), such that 0 ≤ P < Q < N, 
is called a slice of array A (notice that the slice contains at least two elements). The average of a slice 
(P, Q) is the sum of A[P] + A[P + 1] + ... + A[Q] divided by the length of the slice. To be precise, the 
average equals (A[P] + A[P + 1] + ... + A[Q]) / (Q − P + 1).  
  
For example, array A such that:  
  
    A[0] = 4  
    A[1] = 2  
    A[2] = 2  
    A[3] = 5  
    A[4] = 1  
    A[5] = 5  
    A[6] = 8  
contains the following example slices:  
  
slice (1, 2), whose average is (2 + 2) / 2 = 2;  
slice (3, 4), whose average is (5 + 1) / 2 = 3;  
slice (1, 4), whose average is (2 + 2 + 5 + 1) / 4 = 2.5.  
The goal is to find the starting position of a slice whose average is minimal.  
For this example function should return 1.