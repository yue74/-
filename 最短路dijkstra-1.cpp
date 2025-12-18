#include<iostream>
#include<vector>
using namespace std;

#define maxn 101
#define edgetype int
#define inf INT_MAX

class solution {
	edgetype graph[maxn][maxn];
	void initedges(int n) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				graph[i][j] = inf;
			}
		}
	}
	void addedge(int u, int v, edgetype w) {
		if (graph[u][v] == inf || graph[u][v] > w) {
			graph[u][v] = w;
		}
	}

	void dijkstra(int n, int s, edgetype dist[maxn]) {
		bool visited[maxn];
		for (int i = 0; i < n; ++i) {
			visited[i] = false;
			dist[i] = inf;
		}
		dist[s] = 0;
		while (1) {//第一轮循环先找到了离源节点的其他结点
			edgetype mindist = inf;
			int minindex;
			for (int i = 0; i < n; ++i) {
				if (visited[i]) {
					continue;
				}
				if(dist[i] < mindist) {
					mindist = dist[i]; 
					minindex = i;
				}
			}//第一步找到了源节点
			if (mindist == inf) {
				break;
			}
			visited[minindex] = true;//不然会一直找到源节点
			//更新其他结点
			for (int i = 0; i < n; ++i) {
				if (visited[i]) {
					continue;
				}
				int dis = graph[minindex][i];
				if (dis == inf) {
					continue;
				}
				if (dist[i] == inf||dist[minindex] + dis < dist[i]) {
					dist[i] = dist[minindex] + dis;
				}
			}
		}
	}
public:
	int networkdelaytime(vector<vector<int>>& times, int n, int k) {
		initedges(n);
		for (int i = 0; i < times.size(); ++i) {
			int u = times[i][0] - 1;
			int v = times[i][1] - 1;
			edgetype w = times[i][2] - 1;
			addedge(u, v, w);
		}
		edgetype dist[maxn];
		dijkstra(n, k-1, dist);
		int max = 0;
		for (int i = 0; i < maxn; ++i) {
			if (dist[i] == inf) {
				return -1;
			}
			if (dist[i] > max) {
				max = dist[i];
			}
		}
		return max;
	}
};
int main() {


	return 0;
}
