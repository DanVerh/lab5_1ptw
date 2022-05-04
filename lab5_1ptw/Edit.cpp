#include "Edit.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

bool NumberCheck(char str)
{
    if (str == '1' || str == '2' || str == '3' || str == '4' || str == '5' || str == '6' || str == '7' || str == '8' || str == '9' || str == '0'){
        return false;
    }
    else
    {
        return true;
    }
}


void Create(char* filename)
{
    ofstream out(filename, ios::binary);
    char str;
    char check;
    do
        {
            cout << "Write symbols to a file: "; cin >> str;
            out.write((char*)&str, sizeof(char));
            cout << "Next symbol? (y - for yes; any other - key for no): "; cin >> check;
        }
        while (check == 'y');
}

void Print(char* filename)
{
    ifstream in(filename, ios::binary);
    char str;
    while (in.read((char*)&str, sizeof(char))){
        cout << str << endl;
    }
}

void Edit(char* filename, char* filename1)
{
    ifstream in(filename, ios::binary);
    ofstream out(filename1, ios::binary);
    char str;
    while (in.read((char*)&str, sizeof(str)))
    {
        if (NumberCheck(str))
        out.write((char*)&str, sizeof(str));
    }
}

