#include<bits/stdc++.h>
using namespace std;

int part (int ara[], int left, int right, int data)
{
    for (int i=left; i<right; i++){
        if (ara[i]<=data){
            swap(ara[i], ara[left]);
            left++;
        }
    }
    return left-1;
}
void qsort (int ara[], int left, int right)
{
    if (left>=right){
        return;
    }
    int mid=(left+right)/2;
    swap(ara[mid], ara[left]);
    int midpoint=part(ara, left+1, right, ara[left]);
    swap(ara[midpoint], ara[left]);
    qsort(ara, left, midpoint);
    qsort(ara, midpoint+1, right);
}
void print (int ara[], int n)
{
    cout << "After sort the array elements are: " << endl;
    for (int i=0; i<n; i++){
        cout << ara[i] << " ";

    }
}
int main ()
{
    int n;
    int ara[100];
    cout << "Enter the number of elements" << endl;
    cin >> n;
    cout << "Enter the array elements" << endl;
    for (int i=0; i<n; i++){
        cin >> ara[i];
    }
    qsort (ara, 0, n-1);
    print(ara, n);
    return 0;
}
