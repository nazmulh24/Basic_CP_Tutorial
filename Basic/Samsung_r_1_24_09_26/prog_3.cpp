/***********************************************************************

Name --> Terror in Terminus
Link -->

***********************************************************************/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define trav(a, x) for (auto &a : x)
#define UNIQUE(v) v.erase(unique(all(v)), v.end())
//********************************************************************

const int N = 1e5 + 5;
const int LOG = 17;

vector<int> adj[N];
int up[N][LOG];
int depth[N];
int n, q;

// Depth-first search to preprocess the 'up' table and depths
void dfs(int node, int parent)
{
    up[node][0] = parent;
    for (int i = 1; i < LOG; ++i)
    {
        if (up[node][i - 1] != -1)
        {
            up[node][i] = up[up[node][i - 1]][i - 1]; // Set 2^i-th ancestor
        }
        else
        {
            up[node][i] = -1;
        }
    }

    // Visit all children
    for (int child : adj[node])
    {
        if (child != parent)
        {
            depth[child] = depth[node] + 1;
            dfs(child, node);
        }
    }
}

// Function to find the Lowest Common Ancestor (LCA) of u and v
int lca(int u, int v)
{
    if (depth[u] < depth[v])
        swap(u, v); // Ensure u is deeper

    // Lift u to the same depth as v
    int diff = depth[u] - depth[v];
    for (int i = LOG - 1; i >= 0; --i)
    {
        if ((1 << i) & diff)
        {
            u = up[u][i]; // Move u up by 2^i steps
        }
    }

    if (u == v)
        return u; // If u and v are the same, return u

    // Lift u and v together until their ancestors diverge
    for (int i = LOG - 1; i >= 0; --i)
    {
        if (up[u][i] != up[v][i])
        {
            u = up[u][i];
            v = up[v][i];
        }
    }

    return up[u][0]; // The parent of u (or v) is the LCA
}

// Function to solve each test case
void solve()
{
    cin >> n;

    // Reset adjacency list, depth, and up arrays
    for (int i = 1; i <= n; ++i)
    {
        adj[i].clear();
        depth[i] = 0;
        for (int j = 0; j < LOG; ++j)
        {
            up[i][j] = -1;
        }
    }

    // Read the n-1 edges of the tree
    for (int i = 1; i < n; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    // Preprocess with DFS starting from node 1
    dfs(1, -1);

    // Read the queries
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << lca(a, b) << endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t; // Read the number of test cases

    while (t--)
    {
        solve();
    }

    return 0;
}