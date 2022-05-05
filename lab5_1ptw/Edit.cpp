#include "Edit.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

bool NumberCheck(char str)
{
    string s = "0123456789";
    return s.find_first_of(str) == -1;
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

