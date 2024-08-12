#include <iostream>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);

    string s;
    int left{0}, right{0};
    string out{""};

    out.append("Ready");

    while(true) {
        getline(cin, s);

        if(s == "  ") {
            break;
        }

        left = s[0];
        right = s[1];

        if(((left + right == 198) and (abs(left - right) == 2)) or 
        ((left + right == 225) and (abs(left - right) == 1))){
            out.append("\nMirrored pair");   
        }
        else{
            out.append("\nOrdinary pair");
        }    
    }
    cout << out;
}