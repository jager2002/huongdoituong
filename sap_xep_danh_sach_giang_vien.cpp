#include <bits/stdc++.h>

using namespace std;
class GiangVien
{
private:
    string ten, nganh, tmp, ma;
    static int stt;

public:
    friend istream &operator>>(istream &nhap, GiangVien &a)
    {
        scanf("\n");
        a.stt++;
        if (a.stt > 9)
            a.ma = "GV" + to_string(a.stt);
        else
            a.ma = "GV0" + to_string(a.stt);
        getline(nhap, a.ten);
        string flag = "";
        scanf("\n");
        getline(nhap, a.nganh);
        stringstream ss(a.nganh);
        while (ss >> flag)
        {
            a.tmp += toupper(flag[0]);
        }
        return nhap;
    }
    friend ostream &operator<<(ostream &in, GiangVien a)
    {
        in << a.ma << " " << a.ten << " " << a.tmp << endl;
        return in;
    }
    string name()
    {
        return ten;
    }
};
int GiangVien::stt = 0;
int main()
{
    int n;
    cin >> n;
    GiangVien ds[n + 5];
    for (int i = 0; i < n; i++)
        cin >> ds[i];
    int t;
    cin >> t;
    while (t--)
    {
        string bom;
        scanf("\n");
        getline(cin, bom);
        cout<< "DANH SACH GIANG VIEN THEO TU KHOA " << bom << ":\n";
        for (int i = 0; i < bom.length(); i++)
        {
            bom[i] = toupper(bom[i]);
        }
        for (int i = 0; i < n; i++)
        {
            int res = 0;
            string kt = ds[i].name();
            for (int j = 0; j < kt.length(); j++)
            {
                if (bom[0] == kt[j] || bom[0] == kt[j] - 32)
                {
                    string m = kt.substr(j, bom.length());
					for (int y = 0; y < m.length(); y++)
                    {
                        m[y] = toupper(m[y]);
                    }
                    if (m == bom)
                    {
                        res = 1;
                        m="";
                        break;
                    }
                }
            }
            if (res == 1)
            {
                cout << ds[i];
            }
        }
    }
}