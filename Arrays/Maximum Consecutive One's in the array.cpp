#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void max_ones(vector <int> array1,int n )
{
    int continous = 0 ;
    int max_sum = 0;

    for(int i = 0 ; i < n ; i++)
    {
        if(array1[i] == 1)
        {
            continous = continous + 1;
        }

        else if(array1[i] == 0)
        {
            continous = 0;
        }

        if(continous >= max_sum)
        {
            max_sum = continous;
        }
    }

    cout << max_sum << endl;
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
    max_ones(array1,n);
}
