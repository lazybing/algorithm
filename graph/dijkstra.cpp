#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>

using namespace std;

const int maxn = 500000 + 100;

struct edge {
    int v, w, next;
    edge(int v = 0, int w = 0, int next = 0):v(v), w(w), next (next){}
}e[maxn];

int front[maxn], tot = 0;

void Addedge(int u, int v, int w) {
    tot++;
    e[tot].v = v;
    e[tot].w = w;
    e[tot].next = front[u];
    front[u] = tot;
};

int N, M, S;

void Readin() {
    ios::sync_with_stdio(false);
    cin >> N >> M >> S;
    for (int i = 1; i <= M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        Addedge(u, v, w);
    }
}

struct Heap {
    int id, w;
    bool operator < (const Heap &rhs) const {
        return w < rhs.w;
    }
};

int dis[maxn];
int Dijkstra(int s) {
    priority_queue<Heap> q;
    for (int i = 1; i <= N; i++)
        dis[i] = 2147483647;
    dis[s] = 0;
    q.push(Heap{s, dis[s]});
    while(!q.empty()){
        Heap x = q.top(); q.pop();
        if (dis[x.id] != x.w)
            continue;
        for (int i = front[x.id]; i != 0; i = e[i].next) {
            int k = e[i].v;
            if (dis[k] > dis[x.id] + e[i].w) {
                dis[k] = dis[x.id] + e[i].w;
                q.push(Heap{k, dis[k]});
            }
        }
    }
    for (int i = 1; i <= N; i++)
        cout << dis[i] << " ";
    cout << endl;

    return 0;
}

