class Solution {
public:
    int addDigits(int num) {
       if(num==0)return 0 ;
       if(num <10)return num;
       int k = num%10 + addDigits(num/10);
       int j = 0 ;
       while(k )
       {
         j+= k%10;
         k=k/10;
       }
       k=j;
       return k;
       
    
        
    }
};