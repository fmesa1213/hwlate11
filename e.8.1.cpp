/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E8.1

I wrote a program that carries out the following tasks: 
Open a file with the name hello.txt.
Store the message “Hello, World!” in the file.
Close the file.
Open the same file again.
Read the message into a string variable and print it
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream out("hello.txt");
    out << "Hello, World!";
    out.close();

    ifstream in("hello.txt");
    string line;
    getline(in, line);
    cout << line << endl;
    in.close();
    return 0;
}
