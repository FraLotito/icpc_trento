#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
    unordered_map<string, int> m;
    int N;
    cin>>N;
    string a;
    int res = 0;
    for(int i=0;i<N;i++) {
        cin>>a;
        if(m.find(a)!=m.end()) m[a]++;
        else m[a] = 1;
    }
    for(int i=0;i<N;i++) {
        cin>>a;
        if(m.find(a)!=m.end() && m[a]>0) { m[a]--; res++; }
    }
    cout<<res<<endl;
    return 0;
}