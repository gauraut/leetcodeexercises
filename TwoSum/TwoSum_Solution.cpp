class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        int n = nums.size();
        for (int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if (nums[i]+nums[j]==target)
                {
                    solution.push_back(i);
                    solution.push_back(j);
                    //cout<<"["<<i<<","<<j<<"]";
                    //return solution;
                }
            }
        }
    return solution;}
};