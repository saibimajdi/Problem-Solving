#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long unsigned Fibo(unsigned n, long long unsigned dp[])
{
    if(dp[n] != 0)
        return dp[n];

    if(n == 1 || n == 2)
        return 1;

    dp[n] = Fibo(n-1, dp) + Fibo(n-2, dp);

    return dp[n];
}

int main()
{
    while(true){
        unsigned n;
        cin >> n ;

        long long unsigned dp[n + 1];
        memset(dp, 0, sizeof(dp));

        cout << "Fibo(" << n << ") =" << Fibo(n, dp) << endl;
    }
    return 0;
}


