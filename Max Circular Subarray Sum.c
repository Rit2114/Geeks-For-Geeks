class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
    // code here
    int curr_max=arr[0], max_sum=arr[0];
    int curr_min=arr[0], min_sum=arr[0];
    int total= arr[0];   
    for(int i=1;i<arr.size();i++){
            curr_max=max(arr[i],curr_max+arr[i]);
    }
};
