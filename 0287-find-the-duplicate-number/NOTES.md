**Intuition**
Using the concept of fast and slow pointer by converting it into a cycle.
​
**Approach**
solving this in linear time in constant space requires an algorithm used in the detection of a cycle, also known as the fast and slow pointer approach. In this one pointer traverses twice as fast as another and once they meet we can trace back to the point where the cycle began.
​
In our case the values of the array is like a pointer pointing to indices of the array which is like nodes in our case. Because each number is from 1 to n then each value will have to point to a valid index and since there's a duplicate number there will be a cycle. We will find that point where the cycle began and we have our answer.
​
**Time complexity:**
O(n)
​
Space complexity:
O(1)