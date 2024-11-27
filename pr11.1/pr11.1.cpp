
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void PrintTXT(char* fname) // виведення файлу на екран
{
    ifstream fin(fname); // відкрили файл для зчитування
    string s; // прочитаний рядок
    while (getline(fin, s)) // поки можна прочитати рядок
    {
        cout << s << endl; // виводимо його на екран
    }
    cout << endl;
}


int findGroup(char* fname) {
    fstream f(fname);
    string s;
    int count = 0;
    while (getline(f, s)) {
        if (s.length() >= 3) {
            for (int i = 0; i <= s.length(); i++) {
                if (s.substr(i, 3) == "abc") {
                    count++;
                }
            }
        }
    }
    return count;
}
    
int main()
{
    char fname[6] = "t.txt";

    PrintTXT(fname);
    int i = findGroup(fname);

    cout << i << endl;
    return 0;
}