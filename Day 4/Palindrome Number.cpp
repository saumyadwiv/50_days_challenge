class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){
            return false;
        }

        long long num=0;
        long long a=x;
        while(a!=0){
            int digit=a%10;
            num= num*10 + digit;
            a/=10;
        }

        if(num==x){
            return true;
        }
        else{
            return false;
        }
        
        
    }
};class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){
            return false;
        }

        long long num=0;
        long long a=x;
        while(a!=0){
            int digit=a%10;
            num= num*10 + digit;
            a/=10;
        }

        if(num==x){
            return true;
        }
        else{
            return false;
        }
        
        
    }
};
