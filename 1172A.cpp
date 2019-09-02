#include <set>
#include <iostream>

#define forn for(int i=0;i<n;++i)

using namespace std;

struct distancia{
	int alN;
	int dis;
	bool operator <(const distancia& d) const{
		return (dis<d.dis || (alN+dis)<(d.alN+d.dis));
	}
};

int main(){
	int n;
	cin>>n;
	int a;
	bool hay1=0;
	forn{
		cin>>a;
		if(!hay1)
			hay1=(a==1);
	}
	int b=0;
	set<distancia> cartas;
	if(hay1){
		forn{
			cin>>b;
			distancia d={n-i,b-n-i};
			cartas.insert(d);
		}
	}
	else{
		int c=0;
		while(b!=1){
			cin>>b;
			c++;
		}
			
		for(;c<n;++c){
			cin>>b;
			distancia d={n-c,b-n-c};
			cartas.insert(d);	
		}
	}
	cout<<n+(cartas.begin()->alN)-1<<endl;
	return 0;
}