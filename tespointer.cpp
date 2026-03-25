#include <iostream>
using namespace std;
 
int main ()
{
    int vint = 555;
    int *point;
    point = &vint;
    cout<<"alamat variabel vint :"<<&vint<<endl;
    cout<<"isi variabel point :"<<point<<endl;
    cout<<"data yang do tunjuk variabel point :"<<*point<<endl;
    cout<<endl;
}