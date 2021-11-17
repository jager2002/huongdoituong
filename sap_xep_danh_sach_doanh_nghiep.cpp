#include <bits/stdc++.h>
using namespace std;
class DoanhNghiep
{
private:
    string ma, ten;
    int soluong;

public:
    void nhap()
    {
        cin >> ma;
        scanf("\n");
        getline(cin, ten);
        cin >> soluong;
    }
    void in()
    {
        cout << ma << " " << ten << " " << soluong << endl;
    }
    string chave()
    {
        return ma;
    }
    int getSoluong()
    {
        return soluong;
    }
};
bool cmp(DoanhNghiep a, DoanhNghiep b)
{
    if (a.getSoluong() == b.getSoluong())
        return a.chave() < b.chave();
    else
        return a.getSoluong() > b.getSoluong();
}
int main()
{
    int n;
    cin >> n;
    DoanhNghiep ds[n + 5];
    for (int i = 0; i < n; i++)
        ds[i].nhap();
    sort(ds, ds + n, cmp);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
        for (int i = 0; i < n; i++)
        {
            if (ds[i].getSoluong() >= a && ds[i].getSoluong() <= b)
            {
                ds[i].in();
            }
        }
    }
}