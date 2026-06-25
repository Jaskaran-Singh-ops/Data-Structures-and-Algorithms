#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int Linear_search(const vector<int>& array1,int n,int num)
{
    for(int i = 0 ; i < n ; i++)
    {
        if(array1[i]== num)
        {
            return i;
        }
    }
    return -1;
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
    int num ;
    cin >> num;

    int x = Linear_search(array1,n,num);

    if (x>=0)
    {
        cout << "Yes the " << num << " is found at index " << x ;
    }
    else
    {
        cout << "The num is not present in the array" << endl;
    }
}
