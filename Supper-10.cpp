#include<bits/stdc++.h>

using namespace std;


void MotChuSo(int n, string &result);
void HaiChuSo(int n, string &result);
void BaChuSo(int n, string &result);
void BonChuSo(int n, string &result);
void XuLi(int n, string &result);


int main()
{
    int n;  cin >> n;
    string result;
    XuLi(n, result);
    cout << result << endl;
    return 0;
}

void MotChuSo(int n, string &result)
{
    string ChuSo[10] = {"Khong", "Mot", "Hai", "Ba", "Bon", "Nam", "Sau", "Bay", "Tam", "Chin"};
    result = ChuSo[n];
}

void HaiChuSo(int n, string &result)
{
    string ChuSo[10] = {"Khong", "Mot", "Hai", "Ba", "Bon", "Nam", "Sau", "Bay", "Tam", "Chin"};
    int ChuSo1 = n / 10;
    int ChuSo2 = n % 10;
    if (n == 10)
    {
        result = "Muo`i";
        return;
    }
    if (n == 15)
    {
        result = "Muo`i Lam";
        return;
    }
    if (ChuSo2 == 0)
    {
        result = ChuSo[ChuSo1] + " Muoi";
        return;        
    }
    if (ChuSo2 == 1)
    {
        result = ChuSo[ChuSo1] + " Muoi Mo't";
        return;
    }
    if (ChuSo2 == 5)
    {
        result = ChuSo[ChuSo1] + " Muoi Lam";
        return;
    }
    result = ChuSo[ChuSo1] + " Muoi " + ChuSo[ChuSo2]; 
}

void BaChuSo(int n, string &result)
{
    string ChuSo[10] = {"Khong", "Mot", "Hai", "Ba", "Bon", "Nam", "Sau", "Bay", "Tam", "Chin"};
    int ChuSo1 = n / 100;
    int ChuSo2 = (n - ChuSo1*100) / 10;
    int ChuSo3 = (n - ChuSo1*100) % 10;
    int SoChuc = (n - ChuSo1*100);
    if (ChuSo2 == 0 && ChuSo3 == 0)
    {
        result = ChuSo[ChuSo1] + " Tram";
        return;
    }
    if (ChuSo2 == 0)
    {
        result = ChuSo[ChuSo1] + " Tram Le " + ChuSo[ChuSo3];
        return;
    }
    
    string temp; 
    HaiChuSo(SoChuc, temp);
    result = ChuSo[ChuSo1] + " Tram " + temp;
}

void BonChuSo(int n, string &result)
{
    string ChuSo[10] = {"Khong", "Mot", "Hai", "Ba", "Bon", "Nam", "Sau", "Bay", "Tam", "Chin"};
    int ChuSo1 = n / 1000;
    int ChuSo2 = (n - ChuSo1*1000) / 100;
    int ChuSo3 = (n - ChuSo1*1000 - ChuSo2*100) / 10;
    int ChuSo4 = n % 10;
    int SoTram = (n - ChuSo1*1000);
    if (ChuSo2 == 0 && ChuSo3 == 0 && ChuSo4 == 0)
    {
        result = ChuSo[ChuSo1] + " Nga`n";
        return;
    }
    string temp;
    BaChuSo(SoTram, temp);
    result = ChuSo[ChuSo1] + " Ngan " + temp;
}

void XuLi(int n, string &result)
{
    if (n < 0)
        MotChuSo(n, result);
    else if (n < 100)
        HaiChuSo(n, result);
    else if (n < 1000)
        BaChuSo(n, result);
    else if (n < 10000)
        BonChuSo(n, result);
}