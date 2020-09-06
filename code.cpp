#include <bits/stdc++.h>
using namespace std;

void solution(vector<vector<int>> &maze, int sx, int sy, int ex, int ey, vector < pair<int, int>> &path, vector < pair<int, int>> &best) {
	if (sx == ex && sy == ey) {
		path.push_back({ sx,sy });
		if (best.empty() || best.size() > path.size()) {
			best = path;
		}
		path.pop_back();
		return;
	}
	path.push_back({ sx ,sy });
	maze[sx][sy] = 1;
	if (sx > 0 && maze[sx - 1][sy] == 0) {//可以向左移动
		solution(maze, sx - 1, sy, ex, ey, path, best);
	}
	if (sx < maze.size() - 1 && maze[sx + 1][sy] == 0) {//可以向右移动
		solution(maze, sx + 1, sy, ex, ey, path, best);
	}
	if (sy > 0 && maze[sx][sy - 1] == 0) {//可以向上移动
		solution(maze, sx, sy - 1, ex, ey, path, best);
	}
	if (sy < maze[0].size() - 1 && maze[sx][sy + 1] == 0) {//可以向下移动
		solution(maze, sx, sy + 1, ex, ey, path, best);
	}
	path.pop_back();
	maze[sx][sy] = 0;
}


int HuaWei_maze(void) {
	int N, M;
	cin >> N >> M;
	vector<vector<int>> maze(N, vector<int>(M));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> maze[i][j];
	int x1, y1, x2, y2;
	while (cin >> x1 >> y1 >> x2 >> y2) {
		vector<pair<int, int>> temp, dir;
		solution(maze, x1, y1, x2, y2, temp, dir);
		if (dir.empty()) {
			cout << "无法抵达目标" << endl;
			continue;
		}
		cout << "最短路径距离：" << dir.size() - 1 << endl;
		cout << "最短路线：" << endl;
		for (auto i : dir)
			cout << '(' << i.first << ',' << i.second << ')' << endl;
		cout << endl;
	}
	return 0;
}
