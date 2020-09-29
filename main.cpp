#include <iostream>

using namespace std;

int main() {
    string type;

    getline(cin, type);

    if("char" == type){
        cout<<sizeof(char)<<endl;
    }
    else if("int" == type){
        cout<<sizeof(int)<<endl;
    }
    else if("short" == type){
        cout<<sizeof(short)<<endl;
    }
    else if("float" == type){
        cout<<sizeof(float)<<endl;
    }
    else if("double" == type){
        cout<<sizeof(double)<<endl;
    }
    else if("long" == type){
        cout<<sizeof(long)<<endl;
    }
    return 0;
}