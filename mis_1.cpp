#include<iostream>
#include<fstream>

using namespace std;

int main (int argc, char* argv[])
{
    char* fileName = argv[1]; // берем содержимое второго аргумента в качестве имени файла
    ifstream fin(fileName);

    //выводим содержимое файла
    char ch;
    while (fin.get(ch))
    {
        cout << ch;
    }
    fin.ignore(1, '\n');
    fin.ignore(1, '\t');
    fin.close(); // закрываем файл
    return 0;
}