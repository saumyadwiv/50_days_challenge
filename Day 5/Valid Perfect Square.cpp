class Solution {
public:
    bool isPerfectSquare(int num) {

        if(num==0){
            return true;
        }
        if(num==1){
            return true;
        }

        for(long long i=1; i*i<=num; i++){
            if(i*i==num){
                return true;
            }
        }
        return false;
    }
};
