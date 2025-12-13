//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

//Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
class Solution{
public:
int reverse(int a){
         long int d;
         long int rev=0;
         while(a!=0){
         d=a%10;
         if(rev*10>INT_MAX || rev*10==INT_MAX && d>7){
         return 0;
         }
         if(rev*10<INT_MIN || rev*10==INT_MIN && d<-8){
         return 0;
         }
         rev=rev*10+d;
         a=a/10;
         }      
    return rev;
}
};

 
