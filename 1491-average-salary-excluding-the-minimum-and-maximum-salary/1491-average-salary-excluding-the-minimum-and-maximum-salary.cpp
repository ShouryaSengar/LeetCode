class Solution {
public:
    double average(vector<int>& salary) {
        double mini = INT_MAX, sum=0, maxi = INT_MIN;
        for(int i = 0; i< salary.size(); i++)
        {
            if(salary[i]<mini)
            {
                mini = salary[i];
            }
            if(salary[i]>maxi)
            {
                maxi = salary[i];
            }
            sum += salary[i];
        }
        double ans = (sum-maxi-mini)/(salary.size()-2);
        return ans;
    }
};