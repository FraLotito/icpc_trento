#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sol = 0;

    for(int i = 0; i < N; i++) {
        int t;
        cin >> t;
        if(t < 0) sol++;
    }
    
    cout << sol << endl;

    return 0;
}