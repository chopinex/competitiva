#include<iostream>
#include <set>
#define forn for(int i=0;i<n;++i)
using namespace std;

int main(){
	int n;
	cin>>n;
	set<int> cartas;
	forn
		cartas.insert(i+1);
	int a;
	forn{
		cin>>a;
		cartas.erase(a);
	}
	int b;
	if(*(cartas.begin())==1){
		forn{
			cin>>b;
			
		}
	}

	cout<<*(next(cartas.begin(),10))<<endl;
	return 0;
}

