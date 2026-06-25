#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotate_array_by_k(vector<int> &array1, int n , int k , string direction)
{
    k = k%n;

    if( k == 0)
    {
        return;
    }

    else if(direction == "right")
    {
        reverse(array1.begin(),array1.end());
        reverse(array1.begin(),array1.begin()+k);
        reverse(array1.begin()+k,array1.end());
    }

    else
    {
        reverse(array1.begin(),array1.end());
        reverse(array1.begin(),array1.begin()+n-k);
        reverse(array1.begin()+n-k,array1.end());
    }
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

    int k;
    cin >> k;

    string direction;
    cin >> direction;

    rotate_array_by_k(array1,n,k,direction);

    for(int i = 0 ; i < n ; i++)
    {
        cout << array1[i] << " ";
    }
}
