
#include<bits/stdc++.h>
using namespace std;

 void Selection_sort(int n, int A[])
{

    int k,i,j,l,m,temp,index_min;
    for(i=0;i<n-1;i++)
    {
        index_min=i;
      for(j=i+1;j<n;j++)
      {
          if(A[j]<A[index_min])
          {
              index_min=j;
          }
      }
      if(index_min!=i)
      {
          temp=A[i];
        A[i]=A[index_min];
        A[index_min]=temp;
      }
    }

}
int main()
{
    int a,b,c,l,key,i,j,n;
    int A[33];
    cout<<"please enter the value of n:";
    cin>>n;
     cout<<"please enter numbers to be sorted:";
    for(i=0;i<n;i++)
    cin>>A[i];
 Selection_sort(n,A);
     for(i=0;i<n;i++)
    cout<<A[i]<<"  ";

    return 0;

}
