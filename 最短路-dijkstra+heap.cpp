#include<iostream>
#include<vector>
#include<queue>
using namespace std;

#define maxn 100001
#define Valuetype int
#define inf 1000000001

struct Dist {
	int v;
	Valuetype w;
	Dist() {}
	Dist(int _v, Valuetype _w) :v(_v), w(_w){}
	bool operator<(const Dist& d)const {
		return w > d.w;//小顶堆
	}
};

typedef priority_queue<Dist> Heap;

void addEdge(vector<Dist>* edges, int u, int v, Valuetype w) {
	edges[u].push_back(Dist(v, w));
}

void dijkstraInit(int n,int st,Heap&heap, bool* visited, Valuetype* d) {
	for (int i = 0; i < n; ++i) {
		d[i] = inf;
		visited[i] = false;
	}
	d[st] = 0;
	heap.push(Dist(st, d[st]));
}

int dijkstraFindMin(Heap& heap) {
	Dist s = heap.top();
	heap.pop();
	return s.v;
}

void dijkstraUpdata(int u,vector<Dist>* edges, Heap& heap,bool *visited, Valuetype* d) {
	if (visited[u] == true) {
		return;
	}
	visited[u] = true;
	for (int i = 0; i < edges[u].size(); ++i) {
		int v = edges[u][i].v;
		Valuetype w = edges[u][i].w;
		if (d[u] + w < d[v]) {
			d[v] = d[u] + w;
			heap.push(Dist(v, d[v]));
		}

	}
}

void DijkstraHeap(int n, int st, vector<Dist>* edges, Valuetype* d) {
	Heap heap;
	bool visited[maxn] = { false };
	dijkstraInit(n,st,heap, visited,d);
	while (!heap.empty()) {
		int u = dijkstraFindMin(heap); 
		dijkstraUpdata(u,edges,heap,visited,d);
	}
}


int main() {


	return 0;
}
