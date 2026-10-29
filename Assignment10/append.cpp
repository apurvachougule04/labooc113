#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout("records.txt", ios::app);

    string record;
    int n;

    cout << "Enter number of records: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "Enter record: ";
        getline(cin, record);
        fout << record << endl;
    }

    fout.close();

    ifstream fin("records.txt");

    cout << "\nAll Records:\n";

    while (getline(fin, record))
    {
        cout << record << endl;
    }

    fin.close();

    return 0;
}