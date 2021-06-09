#include <iostream>
#include <string> // подключаем строки
#include <fstream> // подключаем файлы
#include <stdio.h>

using namespace std; // используем стандартное пространство имен

string LastPart(string AllString, int StrNum)
{
    string temp;
    for (int i = AllString.length() - StrNum; i < AllString.length(); i++)
    {
        temp += AllString[i]; 
    }
    return temp;
}

int main() 
{
    string s; // сюда будем класть считанные строки
    ifstream file("D:\\hello.txt"); // файл из которого читаем 
    ofstream out("D:\\hello1.txt"); // файл куда читаем 
    int StrNum = 1;
    string temp;
    while (getline(file, s)) { // пока не достигнут конец файла класть очередную строку в переменную (s)
        
        temp = LastPart(s, StrNum);
        for (int j = s.length(); j >= StrNum; j--)
        {
           s[j] = s[j - StrNum];
        }
        for (int i = 0; i < StrNum; i++)
        {
            s[i] = temp[i];
        }

 
        if (out.is_open())
        {
            out << s << std::endl;
        }
        StrNum++;


    }

    file.close(); // обязательно закрываем файлы что бы не повредить их
    out.close();
    return 0;
}
