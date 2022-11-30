#include <iostream>
#include <queue>
using namespace std;

int main () {
    int t;
    cin >> t;
    queue <int> a;

    while (t--) {
        int n;
        cin >> n;

        switch (n)
        {
        case 1:
            int k;
            cin >> k;
            a.push(k);
            break;
        case 2:
            if (a.empty() != true)
                a.pop();
            break;
        case 3:
            if (a.empty() == true)
                cout << "Empty!";
            else    
                cout << a.front();
            cout << endl;
            break;
        default:
            break;
        }
    }

    return 0;
}