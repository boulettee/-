#include <iostream> 
#include <string> 
#include <fstream> 
#include <windows.h> 
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //ofstream fi("a.txt"); 
    //if (!fi.is_open()) 
    //{ 
     //cout << "не могу открыть файл"; 
     //return 0; 
    //} 
    //while (!fi.eof()) 
    //{ 
    string s;
    string s1 = "";
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case 'А':
            s1 += ".-  ";
            break;
        case 'Б':
            s1 += "-...";
            break;
        case 'В':
            s1 += ".---";
            break;
        case 'Г':
            s1 += "--. ";
            break;
        case 'Д':
            s1 += "-.. ";
            break;
        case 'Е':
            s1 += "    ";
            break;
        case 'Ж':
            s1 += "...-";
            break;
        case 'З':
            s1 += "--..";
            break;
        case 'И':
            s1 += "..  ";
            break;
        case 'Й':
            s1 += ".---";
            break;
        case 'К':
            s1 += "-.- ";
            break;
        case 'Л':
            s1 += ".-..";
            break;
        case 'М':
            s1 += "--  ";
            break;
        case 'Н':
            s1 += "-.  ";
            break;
        case 'О':
            s1 += "--- ";
            break;
        case 'П':
            s1 += ".--.";
            break;
        case 'Р':
            s1 += ".-. ";
            break;
        case 'С':
            s1 += "... ";
            break;
        case 'Т':
            s1 += "-   ";
            break;
        case 'У':
            s1 += "..- ";
            break;
        case 'Ф':
            s1 += "..-.";
            break;
        case 'Х':
            s1 += "....";
            break;
        case 'Ц':
            s1 += "-.-.";
            break;
        case 'Ч':
            s1 += "---.";
            break;
        case 'Ш':
            s1 += "----";
            break;
        case 'Щ':
            s1 += "--.-";
            break;
        case 'Ъ':
            s1 += "-..-";
            break;
        case 'Ы':
            s1 += "-.--";
            break;
        case 'Ь':
            s1 += "-..-";
            break;
        case 'Э':
            s1 += "..-.";
            break;
        case 'Ю':
            s1 += "..--";
            break;
        case 'Я':
            s1 += ".-.-";
            break;
        case ' ':
            s1 += " ";
            break;
        }
    }
    //fi << s1; 
    ofstream fi("a.txt", ios::app);
    fi << s1 << endl;
    cout << s1 << endl;
    fi.close();
    //} 
}