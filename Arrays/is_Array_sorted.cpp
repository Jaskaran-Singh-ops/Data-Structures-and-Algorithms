#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool is_Array_sorted(vector <int> &array1,int &i,int n )
{
    for(int i = 1 ; i < n ; i++)
    {
        if(array1[i-1] > array1[i])
        {
            return false;
        }
    }

    return true;
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
    int i = 1;
    bool x = is_Array_sorted(array1,i,n);

    if (x)
    {
        cout << "True";
    }
    else
    {
        cout << "you can't make some tommellets without breaking some gregs" ;
    }
}
