#include <bits/stdc++.h>

struct address {
    int x;
    int y;
};


int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, m;
        std::cin >> n;
        std::cin >> m;

        int a[n][m];
        bool visit[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cin >> a[i][j];
                visit[i][j] = false;
            }
        }
        
        address memAdress[n][m];
        for (int i = 0; i < n ; i++) {
            for (int j = 0; j < m; j++) {
                memAdress[i][j].x = i;
                memAdress[i][j].y = j;
            }
        } 
        int component = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 1 && visit[i][j] == false) {
                    component++;
                    std::queue <address> q;
                    q.push(memAdress[i][j]);
                    visit[i][j] = true;

                    while (!q.empty()) {
                        address IJ = q.front();
                        int I = IJ.x;
                        int J = IJ.y;
                        q.pop();

                        if (I > 0 && J > 0 && a[I-1][J-1] == 1 && visit[I-1][J-1] == false) {
                            q.push(memAdress[I-1][J-1]);
                            visit[I-1][J-1] = true;
                        }

                        if (I > 0 && a[I-1][J] == 1 && visit[I-1][J] == false) {
                            q.push(memAdress[I-1][J]);
                            visit[I-1][J] = true;
                        }

                        if (I > 0 && J < m-1 && a[I-1][J+1] == 1 && visit[I-1][J+1] == false) {
                            q.push(memAdress[I-1][J+1]);
                            visit[I-1][J+1] = true;
                        }

                        if (J > 0 && a[I][J-1] == 1 && visit[I][J-1] == false) {
                            q.push(memAdress[I][J-1]);
                            visit[I][J-1] = true;
                        }

                        if (J < m-1 && a[I][J+1] == 1 && visit[I][J+1] == false) {
                            q.push(memAdress[I][J+1]);
                            visit[I][J+1] = true;
                        }

                        if (I < n-1 && J > 0 && a[I+1][J-1] == 1 && visit[I+1][J-1] == false) {
                            q.push(memAdress[I+1][J-1]);
                            visit[I+1][J-1] = true;
                        }

                        if (I < n-1 && a[I+1][J] == 1 && visit[I+1][J] == false) {
                            q.push(memAdress[I+1][J]);
                            visit[I+1][J] = true;
                        }

                        if (I < n-1 && J < m-1 && a[I+1][J+1] == 1 && visit[I+1][J+1] == false) {
                            q.push(memAdress[I+1][J+1]);
                            visit[I+1][J+1] = true;
                        }

                    }
                }
            }
        }

        std::cout << component << "\n";
    }

}

