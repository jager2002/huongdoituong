#include <bits/stdc++.h>

using namespace std;
class SinhVien
{
private:
    string ten, lop, ns, msv;
    float diem;

public:
    SinhVien()
    {
        ten = lop = ns = msv = "";
        diem = 0;
    }
    friend istream &operator>>(istream &nhap, SinhVien &a);
    friend ostream &operator<<(ostream &in, SinhVien a);
};
istream &operator>>(istream &nhap, SinhVien &a)
{
    getline(nhap, a.ten);
    a.msv = "B20DCCN001";
    nhap >> a.lop >> a.ns >> a.diem;
    if (a.ns[2] != '/')
        a.ns = "0" + a.ns;
    if (a.ns[5] != '/')
        a.ns.insert(3, "0");
    cin.ignore();
    return nhap;
}
ostream &operator<<(ostream &in, SinhVien a)
{
    in << a.msv << " "
       << a.ten
       << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.diem;
    return in;
}
#define a() a;
int main()
{
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}