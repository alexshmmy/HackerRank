#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n;
    int q;
    
    cin >> n >> q;

    vector<int> a[n];

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        int l;
        
        for (int j = 0; j < m; j++) {
            cin >> l;
            a[i].push_back(l);
        }
    }

    int z, w;

    for (int k = 1; k <= q; k++) {
        cin >> z >> w;
        cout << a[z][w] << endl;
    }
    
    return 0;
}
