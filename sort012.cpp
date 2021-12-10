#include<bits/stdc++.h>
using namespace std;
 
void sort012(vector<int>&a)
{
    int r = a.size()-1;
    int l = 0;
    int mid = 0;
    while (mid<=r)
    {
        switch(a[mid])
        {
            case 0:
            swap(a[l++],a[mid++]);
            break;
            case 1:
            mid++;
            break;
            case 2:
            swap(a[mid],a[r--]);
            break;
        }
        /* code */
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
    sort012(a);
    for(auto ele:a)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}
