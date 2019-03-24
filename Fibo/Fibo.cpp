#include <iostream>

using namespace std;

long long unsigned Fibo(unsigned n)
{
    if(n == 1 || n == 2)
        return 1;

    return Fibo(n-1) + Fibo(n-2);
}

int main()
{
    while(true){
        unsigned n;
        cin >> n ;
        cout << "Fibo(" << n << ") =" << Fibo(n) << endl;
    }
    return 0;
}


