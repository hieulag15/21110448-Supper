#include<bits/stdc++.h>

#define MAX 1000
void NhapMang(int arr[MAX], int &n);
bool XuLi(int arr[MAX], int n, int brr[MAX], int m);

using namespace std;

int main()
{
    int n,m;
    int A[MAX], B[MAX];
    NhapMang(A,n);
    NhapMang(B,m);
    if (XuLi(A,n,B,m))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

void NhapMang(int arr[MAX], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

bool XuLi(int arr[MAX], int n, int brr[MAX], int m)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i] == brr[j])
                count++;
        }
        if (count == 0)
            return false;
    }
    return true;
}