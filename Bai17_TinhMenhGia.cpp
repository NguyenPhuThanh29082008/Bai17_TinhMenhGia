// Bai17_TinhMenhGia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    {
        cout << "Tinh Menh Gia\n";
        int sotien, to500, to200, to100, to50, to20, to10, to5, to2, to1;
        cout << "So to tien can de rut la: ";
        cin >> sotien; cout << endl;

        to500 = sotien / 500;
        sotien = sotien % 500;
        cout << "So to 500k: " << to500 << endl;

        to200 = sotien / 200;
        sotien = sotien % 200;
        cout << "So to 200k: " << to200 << endl;

        to100 = sotien / 100;
        sotien = sotien % 100;
        cout << "So to 100k: " << to100 << endl;

        to50 = sotien / 50;
        sotien = sotien % 50;
        cout << "So to 50k: " << to50 << endl;

        to20 = sotien / 20;
        sotien = sotien % 20;
        cout << "So to 20k: " << to20 << endl;

        to10 = sotien / 10;
        sotien = sotien % 10;
        cout << "So to 10k: " << to10 << endl;

        to5 = sotien / 5;
        sotien = sotien % 5;
        cout << "So to 5k: " << to5 << endl;

        to2 = sotien / 2;
        sotien = sotien % 2;
        cout << "So to 2k: " << to2 << endl;

        to1 = sotien / 1;
        sotien = sotien % 1;
        cout << "So to 1k: " << to1 << endl;

        return 0;
    }
}