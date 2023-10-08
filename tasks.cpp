#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;
string itc_hello_str(string name){
    return "Hello, " + name;
}
long long itc_len(string str){
    return str.size();
}
void itc_print_copy_str(string str, int number){
    while (number){
        cout << str << endl;
        number = number - 1;
    }
}
void itc_first_end_three(string str){
    if (str.size() <= 5){
        int a = str.size();
        while (a){
            cout << str[0];
            a = a - 1;
        }
    }
    if (str.size() > 5){
        cout << str[0];
        cout << str[1];
        cout << str[2];
        cout << str[str.size() - 3];
        cout << str[str.size() - 2];
        cout << str[str.size() - 1];

    }
}
int itc_count_char_in_str(char ch, string str){
    int b = 0;
    for (int i = 0; i < str.size(); i++){
        if (str[i] == ch){
            b++;
        }
    }
    return b;
}
