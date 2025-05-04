class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n=nums.size();

       sort(nums.begin(), nums.end());

        int s=0;
        int e=n;    
        int mid= s+(e-s)/2;

        while(s<e){
        
            if(nums[mid]>mid){
                e=mid;
            }
            else {
                s=mid+1;
            }
            mid=s+(e-s)/2;
        } 
        return s;   
    }
};
