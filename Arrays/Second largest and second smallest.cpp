#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void second_num(vector <int> &array1,int &smaller, int &smallest,int &larger,int &largest,int n)
{

    for(int i = 0; i < n ; i++ )
    {
        if(array1[i] < smaller)
        {
            if(array1[i] < smallest)
                {
                    smaller = smallest;
                    smallest = array1[i];
                }
            else if(array1[i] > smallest && array1[i] < smaller)
                {
                    smaller = array1[i];
                }
        }

        if(array1[i] > larger)
        {
            if(array1[i] > largest)
            {
                larger = largest;
                largest = array1[i];
            }

            else if(array1[i] < largest && array1[i] > larger)
            {
                larger = array1[i];
            }

        }


    }
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

    int smaller = INT_MAX;
    int smallest = INT_MAX;
    int larger = INT_MIN;
    int largest = INT_MIN ;

    second_num(array1,smaller,smallest,larger,largest,n);

    cout << "Second Smallest : " << smaller ;
    cout << "Second Largest : " << larger ;
}
