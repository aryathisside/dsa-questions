#include<iostream>
using namespace std;

int main()
{   //TimeComplexity --> O(n) 
    //SpaceComplexity --> O(1)
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
    {
        cout<<"Enter element at index: "<<i<<endl;
        cin>>arr[i];
    }

    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[i] != arr[j])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }

    cout<<"Printing the Unique Elements in Array:"<<endl;
    for(int k=0;k<i+1;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}