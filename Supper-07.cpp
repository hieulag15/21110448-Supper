#include<bits/stdc++.h>

#define MAX 1000
void NhapMang(int arr[MAX], int &n);
void XuLi(int arr[MAX], int n);

using namespace std;

int main()
{
    int n;
    int arr[MAX];
    NhapMang(arr,n);
    XuLi(arr,n);
    return 0;
}

void NhapMang(int arr[MAX], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void XuLi(int arr[MAX], int n)
{
    int max = 0;
    int a,b,m,z, countt = 0;
    for (int i = 0; i < n; i++)
    {
        z = i;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                count++;
                m = j;
                if (count > 1)
                    countt++; 
            }
            else
                break;
        }
    }
    cout<<countt<<endl;
}