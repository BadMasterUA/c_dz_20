#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    char* fileName = argv[1]; // берем содержимое второго аргумента в качестве имени файла
    ifstream fin(fileName);
    //проверка на наличие файла в каталоге
    if (!fin)
    {
        cout << "Unable to open " << fileName << " for reading.\n";
        return (1);
    }
    // выводим содержимое файла
    char ch;
    while (fin.get(ch))
    {
        if (ch != '\n' && ch != '\r' && ch != '\t') // 32 126 9 ASCII 10 9
            cout << ch;
    }
    fin.close(); // закрываем файл
    return 0;
}