#include<bits/stdc++.h>
#define all(v) v.begin(), v.end()
#define mp make_pair
using namespace std;

using ll = long long;
using ii = pair<int, int>;
const int INF = (int)10e9;

char m[101][101];
bool vis[101][101];
int N, M;

void dfs(int i, int j, char a) {
	if(vis[i][j]) return;
	if(m[i][j] != a) return;
	vis[i][j] = true;
	if(i+1 < N) dfs(i+1, j, a);
	if(i-1 >= 0) dfs(i-1, j, a);
	if(j+1 < M) dfs(i, j+1, a);
	if(j-1 >= 0) dfs(i, j-1, a);
} 

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t = 1;
	while(cin >> N >> M) {
		int l = 0;
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < M; j++) {
				cin >> m[i][j];
				vis[i][j] = false;
			}
		}

		for(int i = 0; i < N; i++) {
			for(int j = 0; j < M; j++) {
				if(!vis[i][j]) {
					dfs(i, j, m[i][j]);
					if(m[i][j] != '#')l++;
				}
			}
		}
		cout << "Case "<<t<<": "<< l <<endl;
		t++;
	}
	

    return 0;
}
