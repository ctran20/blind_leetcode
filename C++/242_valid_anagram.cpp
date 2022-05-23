class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        int len = t.length();
        unordered_map<int, int> hmap;
        
        // Create hashmap to count t
        for(int i = 0; i < len; i++){
            if(hmap.find(t[i]) == hmap.end()){
                hmap[t[i]] = 0;
            }
            else{
                hmap[t[i]]++;
            }
        }
        // Iterate through s & subtract count from hashmap t
        for(int i = 0; i < len; i++){
            if(hmap.find(s[i]) == hmap.end()){
                return false;
            }
            else{
                if(hmap[s[i]]-- < 0){
                    return false;
                }
            }
        }
        
        return true;
    }
};