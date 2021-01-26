#include<iostream>
using namespace std;

int main() {
    long long n;
    while(cin >> n) {
        long long div = 1 % n;
        int res = 1;
        while(div != 0) {
            res++;
            div = div*10+1;
            div = div % n;
        }
        cout<<res<<endl;
    }
    return 0;
}
