#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Masukkan usia anda: ";
    cin >> age;

    if (age < 10)
    {
        cout << "Usia anda dibawah 17 tahun.\n";
    }
    else
    {
        cout << "Usia anda diatas 17 tahun \n";
    }

    return 0;
}