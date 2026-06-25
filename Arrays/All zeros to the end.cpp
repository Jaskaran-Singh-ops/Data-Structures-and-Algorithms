#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void all_zeroes_at_the_end(vector<int> &array1,int n)
{
    int i = 0;
    int j = 0;
    for(i = 0 ; i < n ; i++)
    {
        if(array1[i]==0)
        {
            j = i;
            break;
        }
    }

    if(i == n)
    {
        return;
    }

    for(j = i+1 ; j < n ; j++)
    {
        if(array1[j]!=0)
        {
            swap(array1[i],array1[j]);
            i++;
        }
    }
}

int main()
{
    int n;
    cin >>n;
    vector<int> array1;

    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        array1.push_back(x);
    }

    all_zeroes_at_the_end(array1,n);

    for(int i = 0 ; i < n ; i++)
    {
        cout << array1[i] << " ";
    }

}
