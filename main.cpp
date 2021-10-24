#include <iostream>
#include <string>
#include <cpr/cpr.h>

using namespace std;

int main() {
    string command;
    while (cin >> command && command != "exit") {
        if (command == "post") {
            cout << cpr::Post(cpr::Url("http://httpbin.org/post")).text << endl;
        } else if (command == "get") {
            cout << cpr::Get(cpr::Url("http://httpbin.org/get")).text << endl;
        } else if (command == "put") {
            cout << cpr::Put(cpr::Url("http://httpbin.org/put")).text << endl;
        } else if (command == "delete") {
            cout << cpr::Delete(cpr::Url("http://httpbin.org/delete")).text << endl;
        } else if (command == "patch") {
            cout << cpr::Patch(cpr::Url("http://httpbin.org/patch")).text << endl;
        } else cerr << "Unknown command" << endl;
    }
    return 0;
}