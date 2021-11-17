#include <bits/stdc++.h>
using namespace std;
class SinhVien
{
private:
    static int dem;
    string ten, lop, tuoi, msv;
    float gpa;

public:
    friend istream &operator>>(istream &nhap, SinhVien &sv);
    friend ostream &operator << (ostream & in, SinhVien sv);
    friend void chuanhoa(SinhVien&);
};
void chuanhoa(SinhVien &a)
{
    stringstream xau(a.ten);
    string tmp,res="";
    while(xau >> tmp)
    {
        res+=toupper(tmp[0]);
        for(int i=1;i<tmp.length();i++)
        {
            res+=tolower(tmp[i]);
        }
        res+=" ";
    }
    res.erase(res.length()-1);
    a.ten=res;
}
int SinhVien::dem = 0;
istream &operator>>(istream &nhap, SinhVien &sv)
{
    nhap.ignore();
    getline(nhap, sv.ten);
    nhap >> sv.lop >> sv.tuoi >> sv.gpa;
    if (sv.tuoi[2] != '/')
        sv.tuoi = '0' + sv.tuoi;
    if (sv.tuoi[5] != '/')
        sv.tuoi.insert(3, "0");
    sv.dem++;
    sv.msv = "B20DCCN" + string(3 - to_string(sv.dem).length(), '0') + to_string(sv.dem);
    chuanhoa(sv);
    return nhap;
}
ostream &operator<<(ostream &in, SinhVien sv)
{
    in << sv.msv << " ";
    in << sv.ten << " ";
    in << sv.lop << " ";
    in << sv.tuoi << " ";
    in << fixed << setprecision(2) << sv.gpa << endl;
    return in;
}
int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}