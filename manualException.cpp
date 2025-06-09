#include <iostream>
using namespace std;

int main ()
{
    try
    {
    cout << "selamat belajar di prodi TI UMY" << endl;
    throw ("halo"); // melemparkan sebuah integar maka 
    cout << "pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a)
    {
        //blok ini akan dieksekusi
        cout << "pengecualian akan dieksekusi" << endl;
    }
}