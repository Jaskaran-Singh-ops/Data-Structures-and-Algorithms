#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void union_of_2_arrays(const vector <int>& array1,vector <int>& array2 , vector<int> &array3,int n , int m )
{
    int i = 0;
    int j = 0;

    while( i < n && j < m)
    {
        if(array1[i] < array2[j])
        {
            if(array3.empty() || array3.back() != array1[i])
            {
                array3.push_back(array1[i]);
            }
            i++;
        }

        else if(array1[i] > array2[j])
        {
            if(array3.empty() || array3.back() != array2[j])
            {
                array3.push_back(array2[j]);
            }
            j++;
        }

        else if(array1[i]==array2[j])
        {
            if(array3.empty() || array3.back() != array1[i])
            {
                array3.push_back(array2[j]);
                i++;
                j++;
            }
        }

    }

    while(i < n)
    {
        if(array3.empty() || array3.back() != array1[i])
            {
                array3.push_back(array1[i]);
                i++;
            }
    }

    while(j < m)
    {
        if(array3.empty() || array3.back() != array2[j])
            {
                array3.push_back(array2[j]);
                j++;
            }

    }
}

int main()
{
    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<int> array1;
    vector<int> array2;
    vector<int> array3;

    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin >> x;
        array1.push_back(x);
    }

    for(int i = 0 ; i < m ; i++)
    {
        int x;
        cin >> x;
        array2.push_back(x);
    }

    union_of_2_arrays(array1,array2,array3,n,m);

    for(int i = 0 ; i < array3.size() ; i++)
    {
        cout << array3[i] << " ";
    }

}

