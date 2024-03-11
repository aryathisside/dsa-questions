#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
    {
        cout<<"Enter element at index: "<<i<<endl;
        cin>>arr[i];
    }
    int largest = arr[0];

    //Finding the largest element in the array
    for(int i=0 ; i<n;i++)
    {
        if(arr[i]>largest)
        largest = arr[i];
    }

    //Display largest element in array
    cout<<"Largest element in array is: "<<largest;
    return 0;
}