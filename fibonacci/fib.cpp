#include <bits/stdc++.h>
using namespace std;

FILE* inf;
FILE* outf;

int hi;
int cry(int x){
	int ay = 1;
	int ax = 1;
	int az = 0;
	if(x==0){
		return 0;
	}
	if(x==1 or x==2){
		return 1;
	}
	for(int i =0;i<x-2;i++){
		az = ax;
		ax =(ax+ ay) % 1000;
		ay = az;
		cout << ax << "\n";	
	}
	return ax;
}
int main(){
	inf = fopen("fibin.txt","r");
	outf = fopen("fibout.txt","w");
	fscanf(inf,"%d",&hi);
	fprintf(outf,"%d",cry(hi%1500));
	return 1; 

	
}
