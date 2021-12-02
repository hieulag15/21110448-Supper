#include<bits/stdc++.h>

#define MAX 100

void NhapMang(int arr[MAX], int &n);
void Delete(int arr[MAX], int &n);
void XuLi(int arr[MAX], int n, int brr[MAX], int m);
using namespace std;

int main()
{
    int n,m;
    int A[MAX], B[MAX];
    NhapMang(A,n);
    NhapMang(B,m);
    XuLi(A,n,B,m);
    return 0;
}

void NhapMang(int arr[MAX], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void Delete(int arr[MAX], int &n)
{
    for (int i = 0; i < n; i++)
        arr[i] = arr[i + 1];
    n--;
}

void XuLi(int arr[MAX], int n, int brr[MAX], int m)
{
    int count = 0;
    while (m > 0)
    {
        if (brr[0] != arr[0])
            Delete(brr,m);
        else if (brr[0] == arr[0])
        {
            int dem = 0;
            for (int i = 0; i < n; i++)
                if (brr[i] == arr[i])
                    dem++;
            if (dem == n)
                count++;
            Delete(brr,m);
        }
    }
    cout << count << endl;
}