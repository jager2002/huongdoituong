#include<bits/stdc++.h>

using namespace std;
class SinhVien
{
    private:
    string msv,hoten,lop,gmail;
    int stt;
    static int dem;
    public:
    friend istream &operator >> (istream &nhap,SinhVien &a);
    friend ostream &operator << (ostream &in,SinhVien a);
    string getLop();
    int getStt();
};
int SinhVien::dem=0;
int SinhVien::getStt()
{
    return this->stt;
}
string SinhVien::getLop()
{
    return this->lop;
}
bool cmp(SinhVien a,SinhVien b)
{
    if(a.getLop() != b.getLop()) return a.getLop() < b.getLop();
    else return a.getStt()<b.getStt();
}
istream &operator >> (istream &nhap,SinhVien &a)
{
    nhap >> a.msv;
    scanf("\n");
    getline(nhap,a.hoten);
    nhap >> a.lop >> a.gmail;
    a.stt=a.dem;
    a.dem++;
    return nhap;
}
ostream &operator << (ostream &in,SinhVien a)
{
    cout << a.msv << " "<< a.hoten << " "<< a.lop << " "<< a.gmail << endl;
    return in;
}
void sapxep(SinhVien ds[],int n)
{
    sort(ds,ds+n,cmp);
}
int main()
{
    int n;
    
    cin >> n;
    SinhVien ds[n+5];
    for(int i=0;i<n;i++) cin >> ds[i];
    sapxep(ds,n);
    for(int i=0;i<n;i++) cout << ds[i];
}