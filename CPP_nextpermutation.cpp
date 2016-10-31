#include <bits/stdc++.h>
#define MAXN 50
using namespace std;
bool used[MAXN];
int per[MAXN];

void perm1(const int N, int *permu,const int l,const int r,const int crr=0)
{
	if(crr==N){
		cout<<per[0];
		for(int i=1; i<N; ++i)
			cout<<' '<<per[i];
		cout<<'\n';
	}
	for(int i=l; i<=r; ++i){
		if(!used[i]){
			used[i]=true;
			per[crr]=i;
			perm1(N,permu,l,r,crr+1);
			used[i]=false;
		}
	}
}
void perm2(const int l, const int r, int *permu)
{
	const int N=r-l+1;
	for(int i=0, j=l; i<N; ++i,++j)permu[i]=j;
	do{
		cout<<permu[0];
		for(int i=1; i<N; ++i) cout<<' '<<permu[i];
		cout<<'\n';
	}while(next_permutation(permu,permu+N));
}
int main(void)
{
	int left, right;
	cin>>left>>right;
	memset(used,0x00,sizeof(used));
	perm1(right-left+1, per, left, right);
	perm2(left, right, per);
	return 0;
}
