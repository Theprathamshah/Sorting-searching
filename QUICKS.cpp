#include <bits/stdc++.h>
using namespace std;

int partationArray(int* arr,int l,int r)
{
    int pivot = arr[r];
    int j = l;
    for(int i = l;i<=r;i++)
    {
        if(arr[i]<=pivot)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    return j-1;
}

void quickSort(int *arr,int l,int r)
{
    if(l<r)
    {
        int pi = partationArray(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Array after applying quicksort"<<endl;
    quickSort(arr,0,n-1);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
/*


PS C:\Users\dell\Desktop\ASSIGNMENT\DS LAB> cd "c:\Users\dell\Desktop\ASSIGNMENT\DS LAB\" ; if ($?) { g++ QUICKS.cpp -o QUICKS } ; if ($?) { .\QUICKS }
7
34 -76 896 32  5 0 -11
Array after applying quicksort
-76 -11 0 5 32 34 896 


*/