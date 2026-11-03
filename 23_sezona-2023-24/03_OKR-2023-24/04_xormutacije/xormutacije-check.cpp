#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

bool has_extra_tokens(ifstream& ifs) {
    string s;
    ifs >> s;
    return s.size() != 0;
}

int main(int argc, char** argv) {
    ifstream ouf(argv[1]);
    ifstream sof(argv[2]);
    ifstream inf(argv[3]);

    int t;
    inf >> t;

    while (t--) {
        string a, b;
        sof >> a;
        if (a.size() == 0) {
            if (has_extra_tokens(ouf)) {
                return -1;
            } else {
                return 0;
            }
        } else {
            ouf >> b;
            if (a != b) {
                return -1;
            }

            int n;
            inf >> n;

            vector<int> v;
            long long sol = 0;
            for (int i = 0; i <= n; ++i){
                int x, y;

                inf >> x;
                ouf >> y;

                v.push_back(y);

                sol += x ^ y;
            }

            sort(v.begin(),v.end());
            for(int i=0;i<=n;i++) if(v[i]!=i) return -1;

            if (to_string(sol) != a)
                return -1;
        }
    }

    string a;
    if (ouf >> a)
        return -1;

    return 0;
}
