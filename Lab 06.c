#include<stdio.h>
int vertex, count = 1;
int adjMat[100][100], bfs[100], visited[100];
int i,j;
void BFS(int v){
    
	bfs[0] = v; visited[v] = 1;
    int flag = 0;
    int temp = count;
    for(i=0;i<vertex;i++){
        if(adjMat[v][i] == 1 && visited[i] != 1){
            visited[i] = 1;
            bfs[count] = i;
            count++;
            flag++;
        }
    }
    if(flag != 0)
        BFS(bfs[(temp)]);
}

void main(){
    printf("Enter the number of vertex: ");
    scanf("%d", &vertex);
    for(i=0;i<vertex; i++){
        for(j=0; j<vertex; j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &adjMat[i][j]);
        }
    }
    for(i=0;i<vertex;i++){
        bfs[i] = 0; visited[i] = 0;
    }

    int v;
    printf("Enter the staring Vertex: ");
    scanf("%d", &v);

    BFS(v);
    for(i=0;i<vertex; i++){
        printf("%d ", bfs[i]);
    }
}
