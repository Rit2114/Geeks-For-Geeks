class Solution {
  public:
    int maxKPower(int n, int k) {
        // code here
        map<int,int> primeFactor;
        for(int i=2;i*i<=k;i++){
            while(k%i==0){
                primeFactor[i]++;
                k=k/i;
            }
        }
        
