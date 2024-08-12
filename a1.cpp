#include <iostream>

using namespace std;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    int m;

    cin >> n;
    cin.ignore();

    for(int i{0}; i < n; i++) {
        getline(cin, s);
        m = stoi(s);
        s = s.substr(s.find(" ") + 1);
        cout << i + 1 << " " << s.erase(m -1 , 1) << "\n";
    };
}
