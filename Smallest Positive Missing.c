class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        for(int i = 0;i<n;i++){
            while(arr[i]>0 && arr[i]<=n  && arr[arr[i] - 1] != arr[i]){
                swap(arr[i],arr[arr[i]-1]);
            
    }
};
