class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> numssort = nums;
        sort(numssort.begin(), numssort.end());
        for (int i = 1; i < nums.size(); ++i) {
            if (numssort[i] == numssort[i-1]) return true;      
        } return false;
    }
};