#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    string newArray [2] { "Test", "Test2" };
    double myDouble { 5.99 };
    char myChar { 'A' };
    bool myBool { true };
    int myInt { 5 };
    int width { 5 };
    int myNum = 15;
    int newNum = 20;

    myNum += newNum;
    string myString = to_string(myNum);
    cout << myString << "\n";
    cout << width << "\n";

    int i;

    for (i = 0 ; i < 2 ; i++) {
        cout << newArray[i] << "\n";
    }

    string answer{ };
    cout << "Type your name: " << "\n";
    cin >> answer;
    cout << "Your name is: " << answer << "\n";

    this_thread::sleep_for(3s);
    
    return 0;
}