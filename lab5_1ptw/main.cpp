#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Edit.hpp"
using namespace std;

// /Users/danverh/Documents/University/oop/lab5_1ptw/lab5_1ptw/1.txt
// /Users/danverh/Documents/University/oop/lab5_1ptw/lab5_1ptw/2.txt

int main()
{
    char filename[100], filename1[100];
    cout << "Name of the file 1: "; cin >> filename;
    Create(filename);
    Print(filename);
    cout << "Name of the file 2: "; cin >> filename1;
    Edit(filename, filename1);
    Print(filename1);
    return 0;
}
