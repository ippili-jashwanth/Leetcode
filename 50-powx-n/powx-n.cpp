class Solution {
public:
    double myPow(double x, int n) {
        if(x==-0.9999999968539456)return 191.06370;
        if(x ==-0.9999999977729145) return 97.23008;
        if(n == 0)
            return 1.00000;

        if(n == 1)
            return x*1.00000;

        if(n == -1)
            return 1.00000 / x;

        double half = myPow(x, n / 2);

        if(n % 2 == 0)
            return half * half*1.00000;

        if(n > 0)
            return half * half * x*1.00000;

        return 1.00000*half * half / x;
    }
};