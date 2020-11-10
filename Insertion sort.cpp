#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,m,b,c,i,j;
    int arr[499];
   cout<<"Enter the no of element"<<endl;
    cin>>m;
     cout<<"Enter the elements"<<endl;
    for(i=0;i<m;i++)
        cin>>arr[i];
    for(i=1;i<=m-1;i++)
    {
        for(j=i;j>0&&arr[j]<arr[j-1];j--)
            swap(arr[j],arr[j-1]);
    }

   cout<<"In asending order"<<endl;
     for(i=0;i<m;i++)
        cout<<arr[i]<<" ";
       cout<<endl;
          cout<<"In dcending order"<<endl;
     for(i=m-1;i>=0;i--)
        cout<<arr[i]<<" ";
        return 0;
}
