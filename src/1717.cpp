#include <iostream>
#include <vector>
using namespace std;

vector<int> parent;

// 초기화: 자기 자신을 부모로 설정
void make_set(int n) {
    parent.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }
}

// 루트(대표) 찾기 (경로 압축)
int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

// 두 집합 합치기
void union_set(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b) parent[b] = a;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m, op, a, b;
    cin >> n >> m;

    make_set(n); //0~i까지 disjoint set 만든다

    for(int i=0; i<m; i++) {
        cin >> op >> a >> b;
        if(op == 0) {
            union_set(a,b);
        } else if(op == 1) {
            if (find(a) == find(b)) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;
}