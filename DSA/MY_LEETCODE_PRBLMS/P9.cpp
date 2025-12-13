//Given an integer x, return true if x is a palindrome, and false otherwise.
class Solution {
public:
    bool isPalindrome(int x) {
       long int rev=0;
        int temp=x;
       if(x>=0){
         while(temp!=0){
            rev=rev*10+temp%10;
            temp=temp/10;
        }
       }
      else{
        return false;
      }
        if(rev==x){
        return true;
        }
        return false;
    }
};
