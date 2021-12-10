#include<bits/stdc++.h>
using namespace std;
 
void selectionSort(vector<int>&a,int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for(int j = i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min = j;
            }
        }
        swap(a[i],a[min]);
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
    selectionSort(a,n);
    for(auto ele:a)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}
