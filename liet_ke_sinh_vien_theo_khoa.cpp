#include <bits/stdc++.h>

using namespace std;
class SinhVien
{
private:
    string msv, ten, lop, gmail;
    char tmp;

public:
    friend istream &operator>>(istream &nhap, SinhVien &a);
    friend ostream &operator<<(ostream &in, SinhVien a);
    char chave()
    {
        return tmp;
    }
};
istream &operator>>(istream &nhap, SinhVien &a)
{
    nhap >> a.msv;
    scanf("\n");
    getline(nhap, a.ten);
    nhap >> a.lop >> a.gmail;
    a.tmp = a.msv[5];
    return nhap;
}
ostream &operator<<(ostream &in, SinhVien a)
{
    cout << a.msv << " " << a.ten << " " << a.lop << " " << a.gmail << endl;
    return in;
}

int main()
{
    int n;
    cin >> n;
    SinhVien ds[n + 5];
    char b[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> ds[i];
        b[i] = ds[i].chave();
    }
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        scanf("\n");
        getline(cin, s);
        for(int i=0;i<s.length();i++)
        {
            s[i]=toupper(s[i]);
        }
        char x = s[0];
        cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
        for (int i = 0; i < n; i++)
        {
            if (x == b[i])
                cout << ds[i];
        }
    }
}