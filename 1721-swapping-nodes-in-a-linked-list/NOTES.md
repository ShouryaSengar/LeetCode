#  Dry Run :-
ctn = 1, k = 2;
1  -  2  -  3  -  4  -  5   ctn=1<k
r     lc
1  -  2  -  3  -  4  -  5   ctn=2=k
r     l     c
1  -  2  -  3  -  4  -  5   ctn=3>k
rl          c
1  -  2  -  3  -  4  -  5   ctn=4
l     r           c
1  -  2  -  3  -  4  -  5 - NULL    ctn=5
l           r         c
Since, l and r on correct position.
Therefore SWAP.
# Explanation:-
**1. Left pointer:**
Iterate through the Linked list, and while the counter is less than k, increment the left pointer.
After the counter greater than or equal to k, we do not want to move the left pointer anymore since it is in the desired position.
​
**2. Right pointer:**
The right pointer should not start moving until our counter exceeds k, this way the right pointer 'lags' behind the current pointer by k nodes.
After counter exceeds k, we increment it each iteration together with the current pointer, keeping the k node lag
​
3. After current reaches end of the list, we can swap the values in the left and right node to get our result
**
Time Complexity: O(n)
Space Complexity: O(1)**