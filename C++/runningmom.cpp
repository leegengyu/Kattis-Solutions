#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<vector<int>> AL;
vector<int> vis;
bool backedge;

void dfs(int u) {
	vis[u] = 1; // Explored
	
	for(auto v : AL[u])
		if(!vis[v]) // Going to unvisited neighbour
			dfs(v);
		else if(vis[v] == 1) // Going to explored neighbour
			backedge = 1;

	vis[u] = 2; // Fully visited, done
}

int main() {
	int E, index = 0;
	string a, b;
	unordered_map<string, int> m;
	
	cin >> E;
	
	AL.assign(E, vector<int>());
	
	for(int i = 0; i < E; i++){
		cin >> a >> b;
		
		if(m.find(a) == m.end()) // convert into index
			m[a] = index, index++;
		
		if(m.find(b) == m.end())
			m[b] = index, index++;
		
		AL[m[a]].push_back(m[b]); // one-way flight only
	} 
	
	while(cin >> a) {
		backedge = 0;
		vis.assign(E, 0);
		
		dfs(m[a]);
		
		cout << a << " " << (backedge ? "safe" : "trapped") << '\n';
		// if we encounter a backedge, ie cycle, MoM is safe
	}
}