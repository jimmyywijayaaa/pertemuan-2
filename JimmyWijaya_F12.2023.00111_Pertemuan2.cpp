#include <iostream>

using namespace std;

int main()
{
    string nama ;
    string nim ;
    int usia ;

    // input
    cout << "masukan nama";
    cin >> nama;
    cout << "masukan nim";
    cin >> nim;
    cout << "masukan usia";
    cin >> usia;

    cout <<"----------------" <<endl;
    // output
    cout << "nama:" << nama;
    cout << "nim:" << nim;
    cout << "usia:" << usia << " tahun ";

    for(int i = 0; i< usia; i++){
        cout <<nama<<endl;
    }

return 0;
}
