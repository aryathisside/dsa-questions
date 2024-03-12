#include<iostream>
using namespace std;

void bruteforceLeftRotate(int arr[],int n,int k )
{
    k = k%n;
    int tmp[k];
    for(int i=0;i<k;i++){
        tmp[i] = arr[i];
    }

    for(int i=k;i<n;i++) {
        arr[i-k] = arr[i];  //i-k --> 3-3 = 0: 4-3=1 .....
    }

    for(int i=n-k; i<n;i++)
    {
        arr[i] = tmp[i-(n-k)];  // n=7/k=3 --> i = 4 tmp[4-(7-3)] = 0 
    }

}

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

    int k;
    cout<<"Enter the value by which you want to rotate the arrya"<<endl;
    cin>>k;

    bruteforceLeftRotate(arr,n,k);

    cout<<"Array after rotating:"<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}