class Solution {
public:
    int addDigits(int num) {

        if(num<=9){
            return num;
        }

        int ans=0;

        while(num>=9){

            int n=num;
            int sum=0;
            while(n!=0){
                int digit=n%10;
                sum+=digit;
                n/=10;
            }
            if(sum<=9){
               ans=sum;
               return ans;
            }
            num=sum;
        }
        return ans;
        
    }
};
