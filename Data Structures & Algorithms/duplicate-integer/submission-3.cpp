class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       
        unordered_set<int> st;

        for(int i =0; i<nums.size(); i++){
            if(st.find(nums[i]) != st.end()){
                return true;
            }else{
                st.insert(nums[i]);
            }
        }
        return false;
     
     
     
     
     
     
     
     
     
        // sort(nums.begin(), nums.end());
        // int n = nums.size();

        // for(int i=0; i<n-1; i++){
        //     if(nums[i] == nums[i+1])return true;
        // }
        // return false;
   
   
   
   
   
   
   
   
   
    //    int n = nums.size();
    //    for(int i=0; i<n; i++){
    //         for(int j=i+1; j<n; j++){
    //             if(nums[i] == nums[j])return true;
    //         }
    //    }
    //    return false;
       
       
       
       
       
       
       
       
       
        // int n = nums.size();
        // set<int> st;
        // for(int i=0; i<n; i++){
        //     st.insert(nums[i]);
        // }
        // if(n>st.size()){return true;}
        // return false;
    }
};