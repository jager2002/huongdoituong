#include <bits/stdc++.h>
using namespace std;
class NhanVien
{
private:
    string ten, gt, tuoi, diachi, mst, date, mnv;

public:
    
    friend istream &operator>>(istream &nhap, NhanVien &a);
    friend ostream &operator<<(ostream &in, NhanVien a);
};
istream &operator>>(istream &nhap, NhanVien &a)
{
    getline(nhap, a.ten);
    nhap >> a.gt ;
    nhap >> a.tuoi;
    nhap.ignore();
    getline(nhap, a.diachi);
    nhap >> a.mst ;
    nhap >> a.date;
    a.mnv = "00001";
    nhap.ignore();
    return nhap;
}
ostream &operator<<(ostream &in, NhanVien a)
{
    in << a.mnv << " " << a.ten << " " << a.gt << " " << a.tuoi << " " << a.diachi << " " << a.mst << " " << a.date;
    return in;
}
#define a() a;
int main()
{
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}