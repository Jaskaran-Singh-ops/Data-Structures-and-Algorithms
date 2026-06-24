#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void rotate_array_by_one(vector <int> &array1,int n )
{
    int j = array1[0];
    for(int i = 1 ; i < n ; i++)
    {
        array1[i-1] = array1[i];
    }
    array1[n-1] = j;

}

int main()
{
    int n;
    cin >> n;
    vector <int> array1;

    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        array1.push_back(x);
    }

    rotate_array_by_one(array1,n);

    for(int i = 0 ; i < n ; i++)
    {
        cout << array1[i] << " ";
    }
}
