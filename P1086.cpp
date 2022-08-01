/*#include <bits/stdc++.h>
using namespace std;
struct con {
    int x, y, num, time;
} a[1000000];

bool campar(con a, con b) { return a.num > b.num; }

int main() {
    int m, n, k;
    cin >> m >> n >> k;
    int map[m][n];
    int tn = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
            if (map[i][j]) {
                a[tn].x = i;
                a[tn].y = j;
                a[tn].num = map[i][j];
                tn++;
            }
        }
    }
    // cout << 1;
    int now = 0, nowx = -1, nowy, ans = 0;
    sort(a, a + tn, campar);
    nowy = a[0].y;
    if (a[0].x * 2 + 1 > k) {
        cout << 0 << endl;
        return 0;
    }

    // now += a[0].x;
    // ans += a[0].num;
    /* for (int i = 1; i < tn; i++) {
         if (now + (abs(a[i].x - a[i - 1].x)) + abs(a[i].y - a[i - 1].y) +
                 a[i].x + 1 ==
             k) {
             cout << ans + a[i].num << endl;
             return 0;
         }
         if (now + (abs(a[i].x - a[i - 1].x)) + abs(a[i].y - a[i - 1].y) +
                 a[i].x + 1 <
             k) {
             cout << ans << endl;
             return 0;
         } else {
             now += (abs(a[i].x - a[i - 1].x)) + abs(a[i].y - a[i - 1].y) + 1;
             cout << 'a' << (abs(a[i].x - a[i - 1].x)) + abs(a[i].y - a[i -
     1].y)
                  << endl;
             ans += a[i].num;
         }
     } *//*
    int u, t = 0;
    for (int i = 0; i < k; i++) {  //枚举每个花生。
        u = a[i].x;  //由于我们要考虑多多采花生返回，而返回的路程就是深度即x，如果加上这个x可以按时返回的话就采这个花生。
        if (i == 0) a[i].time = a[i].x + 1;
        //第一个花生是不同的，因为多多一开始可以跳到第一个最多花生的所在列。
        // else
        a[i].time = a[i - 1].time + abs(a[i].x - a[i - 1].x) +
                    abs(a[i].y - a[i - 1].y) +
                    1;  //不是第一个的话就加上与前一个的坐标差再加采摘时间。
        if (a[i].time + u <= t)
            ans += a[i].num;  //如果数据合法那么就把花生数加上。
    }
    cout << ans << endl;
    return 0;
}
*/
#include <bits/stdc++.h>  //万能头文件。
using namespace std;
int m, n, i, j, k = 1, t, u, ans;
struct peanuts {  //用结构体存坐标和数量及时间。（x，y坐标，time时间，w数量）
    int x, y, time, w;
};
peanuts p[1000001];  //结构体下标用来排序。
int a[1010][1010];   //开个2维数组用来输入数据。
bool campar(peanuts a, peanuts b) { return a.w > b.w; }

int main() {
    cin >> m >> n >> t;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++) {
            cin >> a[i][j];  //输入完成。
            if (a[i][j] > 0) {  //当它下面有花生的时候就存它的数据。
                p[k].w = a[i][j];
                p[k].x = i;
                p[k].y = j;
                k++;
            }
        }
    sort(p + 1, p + k, campar);
    /*for (i = 1; i < k; i++)
        for (j = i + 1; j <= k; j++)
            if (p[i].w < p[j].w) swap(p[i], p[j]);*/
    for (i = 1; i <= k; i++) {  //枚举每个花生。
        u = p[i].x;  //由于我们要考虑多多采花生返回，而返回的路程就是深度即x，如果加上这个x可以按时返回的话就采这个花生。
        if (i == 1)
            p[i].time =
                p[i].x +
                1;  //第一个花生是不同的，因为多多一开始可以跳到第一个最多花生的所在列。
        else
            p[i].time = p[i - 1].time + abs(p[i].x - p[i - 1].x) +
                        abs(p[i].y - p[i - 1].y) +
                        1;  //不是第一个的话就加上与前一个的坐标差再加采摘时间。
        if (p[i].time + u <= t)
            ans += p[i].w;  //如果数据合法那么就把花生数加上。
    }
    cout << ans;  //输出最多花生数即可。
    return 0;
}