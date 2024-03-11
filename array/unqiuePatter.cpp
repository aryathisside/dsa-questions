#include<iostream>
using namespace std;

int main()
{
    /*
        *
          * 
            *
          *
        *
        *
          * 
             *
          *
        *
        *
          * 
            *
          *
        *
    
    */ 

   // space star space
   // 1  1  1

    int n,row=5;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row/2+1;j++)
        {
            if(i==j)
            cout<<"*";
            else
            cout<<" ";
        }
        // for(int j=)
        cout<<endl;
    }
    return 0;
}