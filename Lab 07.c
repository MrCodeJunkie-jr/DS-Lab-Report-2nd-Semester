#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int adj[MAX][MAX];
int visited[MAX];
int n;

void dfs(int v) {
  int i;
  visited[v] = 1;
  printf("\n%d ", v);
  for (i = 0; i < n; i++) {
    if (adj[v][i] && !visited[i]) {
      dfs(i);
    }
  }
}

int main() {
  int i, j;
  printf("Enter number of vertices: ");
  scanf("%d", &n);
  printf("Enter adjacency matrix:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &adj[i][j]);
    }
  }
  printf("Dfs is :");
  for (i = 0; i < n; i++) {
    visited[i] = 0;
  }
  dfs(0);
  return 0;
}
