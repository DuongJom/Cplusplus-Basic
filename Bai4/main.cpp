#include <iostream>
#define MAX 100
using namespace std;

void enterMatrix(int a[][MAX], int &n, int &m);
void findSaddleElements(int a[][MAX], int n, int m);

int main()
{
    int a[MAX][MAX],n,m;
    enterMatrix(a,n,m);
    findSaddleElements(a,n,m);
    return 0;
}

void enterMatrix(int a[][MAX], int &n, int &m){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
}

void findSaddleElements(int a[][MAX], int n, int m){
    int i,j,maxElement,minElement,col;
    for(i=0;i<n;i++){
        maxElement = a[i][0];
        col=0;
        for(j=0;j<m;j++){
            if(a[i][j]>maxElement){
                maxElement = a[i][j];
                col = j;
            }
        }

        minElement = a[0][col];
        for(int k=0;k<n;k++){
            if(a[k][col]<minElement){
                minElement=a[k][col];
            }
        }
        if(maxElement==minElement){
            cout<<a[i][col];
        }
    }
}
