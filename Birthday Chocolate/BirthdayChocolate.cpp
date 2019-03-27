/*
https://www.hackerrank.com/challenges/the-birthday-bar/problem
5
1 2 1 3 2
3 2

*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    //scanf("%d", &n);
    n = 5;

    short sum, number;
    short arr[n] = { 1, 2, 1, 3, 2};

    for(int index = 0; index < n; index++)
        scanf("%d", &arr[index]);

    //scanf("%d %d", &sum, &number);
    sum = 3; number = 2;

    sort(arr, arr + n + 1);

     for(int index = 0; index < n; index++)
     {
            int counterSum = arr[index];
            int counterNumber = 1;
            //while(counterNumber < number && counterSum < sum){
              //  if()
            //}
     }

    return 0;
}





