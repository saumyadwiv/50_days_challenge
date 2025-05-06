class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        vector<int> ans;

        int n=digits.size();
        if(digits[n-1]<9){
            digits[n-1]++;
        }

        else if(digits[n-1]==9){
            int a=0;
            bool t=false;
            for(int i=n-1;i>=0;i--){
                if(digits[i]!=9){
                    digits[i]++;
                    a=i;
                    t=true;
                    break;
                }
            }
            if(t==false){

                ans.push_back(1);
                for(int i=1;i<n+1;i++){
                    ans.push_back(0);
                }
                return ans;
            }
            for(int i=a+1;i<n;i++){
                digits[i]=0;
            }
            
        }
        return digits;
        
    }
};
