#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string namafile;

    cout << "memasukan nama file : ";
    cin >> namafile;

    //membuka file dalam mode menulis 
    ofstream outfile;
    //menunjuk ke sebuah nama file
    outfile.open (namafile + ".txt", ios :: out);

    cout << " >= menulis file, \'q' untuk keluar" << endl;
}