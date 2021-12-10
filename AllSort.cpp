#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &a, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

void printVector(vector<int> a)
{
    for (auto ele : a)
    {
        cout << ele << " ";
    }
    cout << endl;
}

void InsertionSort(vector<int> &a, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
            else
            {
                break;
            }
        }
    }
}

void selectionSort(vector<int> &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
            /* code */
        }
        swap(a[min], a[i]);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    vector<int> temp;
    temp = a;
    cout << "Output after bubble sort" << endl;
    bubbleSort(temp, n);
    printVector(temp);
    temp = a;
    cout << "Vector before insertion sort" << endl;
    printVector(temp);
    cout << "Output after insertion sort" << endl;
    InsertionSort(temp, n);
    printVector(temp);
    temp = a;
    cout << "Vector before selection sort" << endl;
    printVector(temp);
    cout << "Output after selection sort" << endl;
    selectionSort(temp, n);
    printVector(temp);
    return 0;
}
/*

7
21 3 54 65 7 53 -63
-63 3 7 21 53 54 65 

*/