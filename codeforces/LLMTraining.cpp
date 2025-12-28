#include <bits/stdc++.h>
using namespace std;

static const double LOG2 = log(2.0);

// safe log2
inline double lg(long long x) {
    return log((double)x) / LOG2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> texts(n);
    vector<string> mask(n);

    unordered_map<string,int> mp;
    int id = 0;
    int M = 0;

    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        M = max(M, m);
        texts[i].resize(m);

        for(int j = 0; j < m; j++){
            string s;
            cin >> s;
            if(!mp.count(s)) mp[s] = id++;
            texts[i][j] = mp[s];
        }
        cin >> mask[i];
    }

    int T = id;

    // Rolling hash
    const unsigned long long BASE = 911382323;
    vector<unsigned long long> pw(M+1);
    pw[0] = 1;
    for(int i = 1; i <= M; i++) pw[i] = pw[i-1] * BASE;

    vector<vector<unsigned long long>> pref(n);
    for(int i = 0; i < n; i++){
        int m = texts[i].size();
        pref[i].resize(m+1);
        for(int j = 0; j < m; j++){
            pref[i][j+1] = pref[i][j] * BASE + texts[i][j] + 1;
        }
    }

    cout << fixed << setprecision(12);

    for(int k = 0; k < M; k++){
        unordered_map<unsigned long long, unordered_map<int,long long>> cnt;
        unordered_map<unsigned long long, long long> tot;

        for(int i = 0; i < n; i++){
            int m = texts[i].size();
            for(int j = 0; j < m; j++){
                if(mask[i][j] == 'L'){
                    int l = max(0, j - k);
                    unsigned long long h =
                        pref[i][j] - pref[i][l] * pw[j-l];
                    int nxt = texts[i][j];
                    cnt[h][nxt]++;
                    tot[h]++;
                }
            }
        }

        double loss = 0.0;
        for(auto &p : cnt){
            long long sum = tot[p.first];
            loss += sum * lg(sum);
            for(auto &q : p.second){
                loss -= q.second * lg(q.second);
            }
        }

        cout << loss << "\n";
    }

    return 0;
}
