class Solution {
public:
    int countDigits(int num) {
      int x=num;
      int counter=0;
     while(x>0){
     int digit =x%10;
     if(digit != 0 && num % digit == 0)
     {
        counter++;
     }
     x/=10;
     }
        return counter;
    }
 
};