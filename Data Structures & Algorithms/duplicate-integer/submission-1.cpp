class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       
       int n = nums.size();
       for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] == nums[j])return true;
            }
       }
       return false;
       
       
       
       
       
       
       
       
       
        // int n = nums.size();
        // set<int> st;
        // for(int i=0; i<n; i++){
        //     st.insert(nums[i]);
        // }
        // if(n>st.size()){return true;}
        // return false;
    }
};