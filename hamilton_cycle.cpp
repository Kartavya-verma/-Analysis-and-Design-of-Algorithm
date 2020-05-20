#include<bits/stdc++.h>
using namespace std;
#define V 4
int graph[4][4]= {{0,0,1,1},{0,0,1,1},{1,1,0,0},{1,1,0,0}};
int pos=1;
int path[4]={0};

bool createloop(int r){
	if(graph[r][0]==1){
		return true;
	}
	else{
		return false;
	}
}

bool issafe(int r,int c,int path[V]){
	if(graph[r][c]==1){
		for(int i=0;i<=V-1;i++){
			if(path[i]==c){
				return false;
			}
		}
		return true;
	}
	return false;
}

void write(int path[]){
	for(int i=0;i<=V-1;i++){
		cout<<path[i]<<" ";
	}
}

void hamilpath(int r){
	if(pos==V){
		if(createloop(r)==true){
			write(path);
			//exit(-1);
			path[--pos]=-1;
		}
		else{
			cout<<"No connection of last & first node ";
			path[--pos]=-1;
		}
	}
	else{
		int c=0;
		while(c<=V-1){
			if(issafe(r,c,path)){
				path[pos++]=c;
				hamilpath(c);
			}
			c++;
		}
		cout<<"No furthur solution to reach destination"<<endl;
		path[--pos]=-1;
	}
}

int main(){
	for(int i=0;i<V;i++){
		hamilpath(i);
	}
	return 0;
}
