class Solution {
public:
    int Fibonacci(int n) {
        int res[n+1];	//dp
        res[0] = 0;
        res[1] = 1;
        for(int i = 2;i<=n;i++)
            res[i] = res[i-1]+res[i-2];
        return res[n];
    }
};