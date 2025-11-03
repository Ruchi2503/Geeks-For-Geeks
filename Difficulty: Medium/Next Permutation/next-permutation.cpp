class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n=arr.size();
        if(n<=1) return;
        
        int i=n-2;
        while(i>=0 && arr[i]>=arr[i+1]){
            i--;
        }
        
        if(i==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
        
        int j=n-1;
        while(j>i && arr[j] <=arr[i]){
            j--;
        }
        swap(arr[i],arr[j]);
        reverse(arr.begin()+i+1,arr.end());
        
    }
};