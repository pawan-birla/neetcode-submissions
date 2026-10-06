class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
    // If ignore sort implementation details then time -> O(n * logn) and space -> O(1);    
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // if (n == 0 || n==1) return false;
        // if(nums[n-1] == nums[n-2])return true;
        // for(int i=0; i<n-2; i++){
        //     if(nums[i] == nums[i+1])return true;
        // }
        // return false;

    // time -> O(n) && space O(n);
        unordered_set<int> st;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        if(st.size() != nums.size())return true;
        return false;
    }
};