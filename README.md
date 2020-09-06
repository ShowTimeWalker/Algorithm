中文：  
问题1：迷宫问题  
给定一个矩阵N*M(2<=N,M<=10)  
只有0和1，其中0代表路，1代表墙壁  
求某一点到零一点的最短路径  
  
输入N M代表迷宫尺寸  
输入N行，每行M个数代表迷宫  
输入两行x1,y1,x2,y2代表起点和终点  
输出最短路线的路径，无法到达输出-1  
  
Sample:
input
5 5
0 1 0 0 0  
0 1 0 1 0  
0 0 0 0 0  
0 1 1 1 0  
0 0 0 1 0  
0 0  
4 4  
  
output  
(0,0)  
(1,0)  
(2,0)  
(2,1)  
(2,2)  
(2,3)  
(2,4)  
(3,4)  
(4,4)  

更大的迷宫  
8 9  
0 0 0 1 0 1 1 0 1  
1 1 0 1 0 0 0 0 0  
0 0 0 1 0 1 0 1 0  
0 1 0 1 1 1 0 1 0  
0 1 0 0 0 0 0 1 1  
0 0 0 0 1 1 0 1 0  
1 1 1 0 1 1 0 0 0  
0 0 1 0 0 0 0 1 1  
7 0  
0 1  
  
0 0  
6 8  
  
7 5  
3 8  
  
3 0  
0 7  
  
English:  
issue-1: maze problem  
giving two number N, M(2<=N,M<=10) to construct a matrix  
where only 0 and 1 exist  
input two location (x1,y1) (x2,y2)  
write a procedure to calculate the shortest path from (x1,y1) to (x2,y2)  
if cannot reach, print warning message  
  
input N, M represent the size of the matrix  
input N rows, each row has M element  
input 4 number, representing the initialized point and terminal  
  
Sample:  
input  
5 5  
0 1 0 0 0  
0 1 0 1 0  
0 0 0 0 0  
0 1 1 1 0  
0 0 0 1 0  
0 0  
4 4  
  
output  
(0,0)  
(1,0)  
(2,0)  
(2,1)  
(2,2)  
(2,3)  
(2,4)  
(3,4)  
(4,4)  
  
bigger maze  
8 9  
0 0 0 1 0 1 1 0 1  
1 1 0 1 0 0 0 0 0  
0 0 0 1 0 1 0 1 0  
0 1 0 1 1 1 0 1 0  
0 1 0 0 0 0 0 1 1  
0 0 0 0 1 1 0 1 0  
1 1 1 0 1 1 0 0 0  
0 0 1 0 0 0 0 1 1  
7 0  
0 1  
  
0 0  
6 8  
  
7 5  
3 8  
  
3 0  
0 7  
