#include <iostream>
#define MAX 100
using namespace std;

void enterMatrix(int a[][MAX], int &d, int &c);
void transpositionMatrix(int a[][MAX], int d, int c);
void displayMatrix(int a[][MAX], int d, int c);

int main()
{
    int a[MAX][MAX],d,c;
    enterMatrix(a,d,c);
    transpositionMatrix(a,d,c);
    return 0;
}

void enterMatrix(int a[][MAX], int &d, int &c){
    cin>>d>>c;
    for(int i=0;i<d;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
}

void displayMatrix(int a[][MAX], int d, int c){
    for(int i=0;i<d;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transpositionMatrix (int a[][MAX], int d, int c){
    int tmp[MAX][MAX];
    for(int i=0;i<d;i++){
        for(int j=0;j<c;j++){
            tmp[j][i]=a[i][j];
        }
    }
    displayMatrix(tmp,c,d);
}
