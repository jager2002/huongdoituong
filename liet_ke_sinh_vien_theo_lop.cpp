#include<bits/stdc++.h>

using namespace std;
class SinhVien
{
    private:
    string msv,hoten,lop,gmail;
    public:
    friend istream &operator >> (istream &nhap,SinhVien &a);
    friend ostream &operator << (ostream &in,SinhVien a);
    string chave()
    {
    	return lop;
	}
};

istream &operator >> (istream &nhap,SinhVien &a)
{
    nhap >> a.msv;
    scanf("\n");
    getline(nhap,a.hoten);
    nhap >> a.lop >> a.gmail;
    return nhap;
}
ostream &operator << (ostream &in,SinhVien a)
{
    cout << a.msv << " "<< a.hoten << " "<< a.lop << " "<< a.gmail << endl;
    return in;
}

int main()
{
    int n;
    cin >> n;
    SinhVien ds[n+5];
    string res[n+5];
    for(int i=0;i<n;i++)
    {
    	 cin >> ds[i];
    	 res[i]=ds[i].chave();
	}
    int x; cin >> x;
    while(x--)
    {
        string tmp;
        cin >> tmp;
        cout << "DANH SACH SINH VIEN LOP " << tmp << ":\n";
        for(int i=0;i<n;i++)
        {
            if(tmp==res[i]) cout << ds[i];
        }
    }   
}