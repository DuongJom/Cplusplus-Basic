#include <iostream>
#define MAX 100
using namespace std;

void enterMatrix(int a[][MAX], int &n, int &m);
int checkIncrement(int a[][MAX],int n, int m);

int main()
{
    int a[MAX][MAX],n,m;
    enterMatrix(a,n,m);
    cout<<checkIncrement(a,n,m);
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

int checkIncrement(int a[][MAX],int n, int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m-1;j++){
            if(a[i][j]<a[i][j+1]){
                continue;
            }
            else return 0;
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n-1;j++){
            if(a[j][i]<a[j+1][i]){
                continue;
            }
            else return 0;
        }
    }
    return 1;
}
