#include<iostream>
#include<fstream>

using namespace std;
/*
bool is_printable(char ch)
{
    return ch >= 32 && ch <= 126 && ch != 9;
}*/

int main (int argc, char* argv[])
{
    char* fileName = argv[1]; // берем содержимое второго аргумента в качестве имени файла
    ifstream fin(fileName);

    //выводим содержимое файла 
    char ch;
    while (fin.get(ch))
    {
        if(ch != 10 && ch != 9) //32 126 9 ASCII
            cout << ch;
    }
    fin.close(); // закрываем файл
    return 0;
}