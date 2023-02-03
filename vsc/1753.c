#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct node node;
typedef struct node* np;
struct node{
    int vertex;
    np next;
}node;

#define TRUE 1
#define FALSE 0
#define INF 999
int stack[100];
int top = -1;

int choose(int distance[], int n, int found[]);
void shortesePath(int v, int** cost, int distance[], int n, int found[]);

int main() {
    int start;
    int v, e, i, j, tmp, x, y, n;
    scanf("%d %d", &v, &e);
    scanf("%d", &start);

    int *distance = (int*)malloc(sizeof(int) * v);
    int *found = (int*)malloc(sizeof(int) * v);

    np * weight=malloc(sizeof(np)*v);
    np tmpnode;
    for (i = 0; i < e; i++) {
        scanf("%d %d %d", &y, &x, &tmp);
        np new=malloc(sizeof(node));
        new->vertex=x;
        new->next=NULL;
        tmpnode=weight[y];
        while (tmpnode->next) tmpnode=tmpnode->next;
        tmpnode->next=new;
    }
    shortesePath(start-1, weight, distance, v, found);
    
    for (i=0; i<v; i++){
        if (distance[i]==999) printf("INF\n");
        else printf("%d\n",distance[i]);
    }
    return 0;
}

int choose(int distance[], int n, int found[]) {
    int i, min, minpos;
    min = INT_MAX;
    minpos = -1;
    for (i = 0; i < n; i++) {
        if (distance[i] < min && !found[i]) {
            min = distance[i];
            minpos = i;
        }
    }
    return minpos;
}

void shortesePath(int v, int** cost, int distance[], int n, int found[]) {
    // 시작점, 가중치, 거리, 점 갯수, 방문여부, 경로
    int i, j, u=0, w=0;
    for (i = 0; i < n; i++) {
        found[i] = FALSE;
        distance[i] = cost[v][i];
    }
    found[v] = TRUE;
    distance[v] = 0;
    for (i = 0; i < n - 2; i++) {
        u = choose(distance, n, found);
        found[u] = TRUE;
        for (w = 0; w < n; w++) {
            if (!found[w]) {
                if (distance[u] + cost[u][w] < distance[w]) {
                    distance[w] = distance[u] + cost[u][w];
                }
            }
        }
    }
}
