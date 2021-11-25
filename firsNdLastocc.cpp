#include <bits/stdc++.h>
using namespace std;

int firstOccur(vector<int> a, int x)
{
    int i = 0;
    int ans = -1;
    int j = a.size() - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (a[mid] == x)
        {
            ans = mid;
            j = mid-1;
        }
        else if(a[mid]>x)
        {
            j = mid - 1;
        }
        else
        {
            i = mid+1;
        }
    }
    return ans;
}

int lastOccur(vector<int> a, int x)
{
    int i = 0;
    int ans = -1;
    int j = a.size() - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (a[mid] == x)
        {
            ans = mid;

            i = mid + 1;
        }
        else if(a[mid]>x)
        {
            j = mid - 1;
        }
        else
        {
            i = mid+1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &ele : a)
    {
        cin >> ele;
    }
    sort(a.begin(),a.end());
    int target;
    cin>>target;
    cout<<"First occur of the element "<<target<<" is "<<firstOccur(a,target)<<endl;
    cout<<"last occur of the element "<<target<<" is "<<lastOccur(a,target)<<endl;
    return 0;
}
