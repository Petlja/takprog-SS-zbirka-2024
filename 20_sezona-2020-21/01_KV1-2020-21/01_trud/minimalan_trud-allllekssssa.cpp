#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;

    if (a + b >=256) return !printf("0\n"); else
        return !printf("%d\n", 256-max(a, b));
}
