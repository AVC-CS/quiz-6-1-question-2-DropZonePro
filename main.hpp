/***************************************************
 * Code your program here
 ***************************************************/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int writeFile(string filename)
{

    int n;
    int id;
    string ename;
    string dname;
    double salary;
    int total;
    int average;

    ofstream ofs;

    ofs.open("employee.txt");
    if (!ofs)
    {
        cerr << "File Open Error\n";
        exit(0);
    }

    cout << "Enter the number of employees: ";

    cin >> n;

    ofs << n << endl;
    
    for (int i=0; i<n; i++)
    {
        cout << "Enter ID, name, department name, and salary: " << endl;
        cin >> id >> ename >> dname >> salary;
        
        ofs << id << "\t" << ename << "\t" << dname << "\t" << salary << endl;
        total += salary;
    }


    average = total / n;

    ofs << total << "\t";
    ofs << average << "\t";

    ofs.close();

    return n;
}


int readFile(string filename)
{
     int n;
    int id;
    string ename;
    string dname;
    double salary;
    int total;
    int average;

    ifstream ifs;

    ifs.open("employee.txt");
    if (!ifs)
    {
        cerr << "File Open Error\n";
        exit(0);
    }

    ifs >> n;
    cout << n << endl;

    for (int i=0; i<n; i++)
    {
        ifs >> id >> ename >> dname >> salary;
        cout << id << "\t" << ename << "\t" << dname << "\t" << salary << endl;
    }

    ifs >> total >> average;
    cout << total << "\t" << average;

    ifs.close();
    
    return n;
}