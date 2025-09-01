class Solution {
  public:
    int sumOfModes(vector<int>& arr, int k) {
        // code here
        map<int,int>mp;
        
        int n = arr.size();
        for(int i = 0; i < k; i++){
            mp[arr[i]]++;
        }
        multiset<int>am;
        vector<int>freq;
        for(auto i : mp){
            am.insert(i.second);
        }
    }
};
