class Solution{
    public:
    std::vector<int>
    subarraySum(std::vector <int> &arr,int target){
        long long current_sum=0;
        int left=1;
        int n=arr.size();
        for(int right= 0;right<n;++right){
            current_sum+=arr[right];
            while(current_sum > target){
                current_sum -=arr[left-1];
                left++;
            }
            if(current_sum==target){
                return{left,right+1};
            }
    }
    return{-1};
}
};