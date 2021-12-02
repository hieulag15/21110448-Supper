#include<bits/stdc++.h>

#define MAX 1000
void NhapMang(double arr[MAX], int &n);
void XuLi(double arr[MAX], int n);

using namespace std;

int main()
{
    int n;
    double arr[MAX];
    NhapMang(arr,n);
    XuLi(arr,n);
    return 0;
}

void NhapMang(double arr[MAX], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}


void XuLi(double arr[MAX], int n)
{
    int max = 0;
    int a,b,m,z;
    for (int i = 0; i < n; i++)
    {
        z = i;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                double sum = 0;
                count++;
                m = j;
                for (int i = z; i <= m; i++)
                {
                    cout << arr[i] << " ";
                    sum += arr[i];
                }
                cout<<endl<<sum<<endl;
            }
            else
                break;
        }
    }
}