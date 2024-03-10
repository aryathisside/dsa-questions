#include<iostream>
#include <algorithm>
using namespace std;

int main()
{   //Considering array doesnot have -ve Elements if it does we will take secondLargest as INT_MIN
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cout<<"Enter element at index: "<<i<<endl;
        cin>>arr[i];
    }

    int smallest = arr[0];
    int secondSmallest  = INT_MAX;
    for(int i = 0 ;i<n;i++)
    {
        if(arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }

        else if (arr[i] != smallest && arr[i] < smallest)
        {
            secondSmallest = arr[i];
        }
    }

    cout<< "The Second Smallest Element is : " <<secondSmallest<<endl;
    return 0;
}