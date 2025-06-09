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
    catch (...)
    {
        //jika selain integar maka block ini akan dieksekusi
        cout << "default pengecualian dieksekusi" << endl;
    }

    return 0;
}