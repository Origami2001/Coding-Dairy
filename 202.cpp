class Solution {
public:
    bool isHappy(int n) {
       int sum = 0;
        while(1){
            sum += pow(n%10,2);
            n/=10;
            if(n==0){
                if(sum==1)
                    return true;
                else if(sum<5)
                    return false;
                n = sum;
                sum = 0;
            }
        }


    };
    
};