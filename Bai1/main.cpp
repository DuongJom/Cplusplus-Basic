#include <iostream>
#define MAX 100
using namespace std;

void enterMatrix(int a[][MAX], int &d, int &c);
int checkUnitMatrix(int a[][MAX], int d, int c);

int main()
{
    int a[MAX][MAX],d,c;
    enterMatrix(a,d,c);
    cout<<checkUnitMatrix(a,d,c);
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

int checkUnitMatrix(int a[][MAX], int d, int c){
    if(d!=c){
        return 0;
    }
    else{
        int numOfOne=0,numOfZero=0;
        for(int i=0;i<d;i++){
            for(int j=0;j<c;j++){
                if(i==j){
                    if(a[i][j]==1){
                        numOfOne++;
                    }
                }
                else{
                   if(a[i][j]==0){
                        numOfZero++;
                   }
                }
            }
        }
        if(numOfOne==d && numOfZero==(d*c-numOfOne)){
            return 1;
        }
    }
    return 0;
}
