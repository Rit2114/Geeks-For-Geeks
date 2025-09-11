class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n = arr.size();
        if (n <= 1) return 0;        
        if (arr[0] == 0) return -1;   

        int maxReach = arr[0];  
        int steps = arr[0];    
        int jumps = 1;          
        
    }
};

