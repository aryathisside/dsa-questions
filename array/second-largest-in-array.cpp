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
    //Brute Force Solution     --> TimeComplexity: nlogn + n
    /* first sort the array
    sort(arr, arr + n);
    int largest = arr[n-1];
    int secondLargest = -1;
    for(int i=n-2;i>0;i--)
    {
        if(arr[i] != largest)
        {
            secondLargest = arr[i];
            break;
        }
    }

    */

    //Better Approach  --> TimeComplexity: O(2n)
    //Finding the largest element in the array
    /*
    int largest = arr[0];

    for(int i=0 ; i<n;i++)
    {
        if(arr[i]>largest)
        largest = arr[i];
    }

    // Finding the second largest
    int secondLargest = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=largest && arr[i]>secondLargest)
        secondLargest = arr[i];
    }

    */

   //Optimal Approach 
   int largest = arr[0];
   int secondLargest = -1;
   for(int i=0;i<n;i++)
   {
    if(arr[i]>largest)
    {
        secondLargest = largest;
        largest = arr[i];
    }
    else if(arr[i]<largest && arr[i]>secondLargest)
    {
        secondLargest = arr[i];
    }
   }



    //Display largest element in array
    cout<<"Largest element in array is: "<<secondLargest;
    return 0;
}