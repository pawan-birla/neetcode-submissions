class Solution {
public:
    bool isAnagram(string s, string t) {
    
        if(s.size() != t.size()) return false;
       int arr[27];

       for(int i=0; i<s.size(); i++){
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
       }

       for(int i=0; i<26; i++){
            if(arr[i] != 0)return false;
       }return true;
       
       
       
       
       
       
       
       
       
       
        // unordered_multiset<char> ms;
        // if(s.size() != t.size())return false;

        // for(int i=0; i<s.size(); i++){
        //     ms.insert(s[i]);
        // }

        // for(int i=0; i<t.size(); i++){
        //     auto it = ms.find(t[i]);
        //     if(it == ms.end())return false;
        //     else{
        //         ms.erase(it);
        //     }
        // }
        // return true;
    
    
    
    
    
    
    
    
        // if(s.size() != t.size())return false;

        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // for(int i=0; i<s.size(); i++){
        //     if(s[i] != t[i])return false;
        // }
        // return true;
    }
};
