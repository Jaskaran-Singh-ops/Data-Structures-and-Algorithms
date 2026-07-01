#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void missing_number(const vector <int>& array1,int n)
{
    int sum = ((n+1)*(n+2))/2;
    int sum1 = 0;

    for(int i = 0 ; i < n ; i++)
    {
        sum1 = sum1+array1[i];
    }

    cout << sum - sum1 << " is the missing number." ;
}

int main()
{
    int n;
    cin >> n;

    vector<int> array1;

    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        array1.push_back(x);
    }

    missing_number(array1,n);

}
