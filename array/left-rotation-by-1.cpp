#include<iostream>
using namespace std;

int main()
{   //TimeComplexity --> O(n)
    //SpaceComplexity for algo is O(n) but the extra space which we are using is O(1)

    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
    {
        cout<<"Enter element at index: "<<i<<endl;
        cin>>arr[i];
    }

    int tmp = arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1] = arr[i];
    }

    arr[n-1] = tmp;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}