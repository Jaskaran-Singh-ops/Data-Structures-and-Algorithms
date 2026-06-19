#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void largest_element(vector <int> array1, int &maximum)
{
    maximum = array1[0];
    for(int i = 0 ; i < array1.size() ; i++)
    {
        if(maximum < array1[i])
        {
            maximum = array1[i];
        }
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

    int maximum ;
    largest_element(array1,maximum);
    cout << "The max element is " << maximum;
}
