class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int,int> mp;
        for(int i=0;i<arr.size();i++) mp[arr[i]]++;

        unordered_set<int> s;
        for(auto it=mp.begin() ; it!=mp.end() ; it++) s.insert(it->second);
        return mp.size() == s.size();
    }
};