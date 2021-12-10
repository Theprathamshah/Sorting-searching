#include<bits/stdc++.h>
using namespace std;
 
void insertionSort(vector<int>&a,int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if(a[j+1]<a[j])
            {
                swap(a[j],a[j+1]);
            }
            else
            {
                break;
            }
        }
        
    }
    
}


int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a)
    {
        cin>>i;
    }
    insertionSort(a,n);
    for(auto ele:a)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}
