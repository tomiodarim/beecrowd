#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n>85) cout << "A" << endl;
    else if(n>60) cout << "B" << endl;
    else if(n>35) cout << "C" << endl;
    else if(n>0) cout << "D" << endl;
    else cout << "E" << endl;

    return 0;
}