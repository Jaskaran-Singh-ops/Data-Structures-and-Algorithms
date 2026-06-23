#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int remove_duplicates(vector <int> &array1,int n)
{
    int i = 0;
    int j = 0;

    for(i = 0 ; i < n ; i++)
    {
        if(array1[i] != array1[j])
        {
            j++;
            array1[j] = array1[i];
        }
    }
    return j+1;
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

    int x = remove_duplicates(array1,n);

    for(int i = 0 ; i < x ; i++)
    {
        cout << array1[i];
    }
}
