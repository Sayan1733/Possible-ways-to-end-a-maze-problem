#include<iostream>
using namespace std;
int countpathmaze(int n,int m,int i,int j){
	if(i==n-1 && j==m-1){
		return 1;
	}
	if(i>=n || j>=m){
		return 0;
	}
	return countpathmaze(n,m,i+1,j) + countpathmaze(n,m,i,j+1);
}
int main(){
	int n,m;
	cout<<"Enter the size n x m of the maze:";
	cin>>n>>m;
	cout<<"possible combination:"<<countpathmaze(n,m,0,0);
	return 0;
}
