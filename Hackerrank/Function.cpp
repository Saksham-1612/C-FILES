#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;


int max_of_four(int a, int b, int c, int d)
{
    int y=max(a,b);
    
    int x=max(c,d);
    int greatest=max(x,y);
    return greatest;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
