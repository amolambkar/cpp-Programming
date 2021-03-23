/* CPP program to find minimum and maximum element
 in an array. */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
}
 
int getMax(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = max(res, arr[i]);
    return res;
}
 
int main()
{
    int n , i,arr[100];
    cout << "Enter the Size of array : ";
    cin >> n;

    cout << "\nEnter elements of array : ";
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    
    
    cout << "\nMinimum element of array: " << getMin(arr, n) << "\n";
    cout << "\nMaximum element of array: " << getMax(arr, n) << "\n";
    return 0;
}