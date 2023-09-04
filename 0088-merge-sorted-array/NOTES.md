**1. Trick Method (NlogN)**
```
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
for(int i=0;i<nums2.size();i++){
nums1[m+i]=nums2[i];
}
​
sort(nums1.begin(),nums1.end());
​
}
```
**2. Using Extra Space : O(N)**
```
int i = 0, j = 0;
if(n==0 or m+n==0) return;
vector<int> ans;
while(i<m+n and j<n) {
if(nums1[i]<=nums2[j] and i<m) {
ans.push_back(nums1[i]);
++i;
}
else
{
ans.push_back(nums2[j]);
++j;
}
}
for(int x=i; x<m; x++) {
ans.push_back(nums1[x]);
}
for(int x=0; x<ans.size(); ++x) {
nums1[x]=ans[x];
}
```
**3. In-Place (From Back)**
```
class Solution {
public:
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
int i = m - 1;
int j = n - 1;
int k = m + n - 1;
while (j >= 0) {
if (i >= 0 && nums1[i] > nums2[j]) {
nums1[k--] = nums1[i--];
} else {
nums1[k--] = nums2[j--];
}
}
}
};
```