#include<bits/stdc++.h>

#define MAX 100
void NhapMang(int arr[MAX], int &n);
void HoanVi(int &a, int &b);
void XapXep(int arr[MAX], int n);
using namespace std;

int main()
{
    int n;
    int arr[MAX];
    NhapMang(arr,n);
    XapXep(arr,n);
    return 0;
}

void NhapMang(int arr[MAX], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void HoanVi(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void XapXep(int arr[MAX], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i; j < n; j++)
            if (arr[i] < arr[j])
                HoanVi(arr[i], arr[j]);
    
    for (int i = 0; i < n; i++)
        cout << arr[i] <<" ";
}