#include<iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main () {
	vector <int> mas;
	int inp;
	int co;
	for (int i=0;; i++)
	{cin >> inp;
	 mas.push_back(inp);
	 if (inp==0) break;
	 if (i>=3) {if (inp==8 && mas.at(i-3)==8)break;}
	}

	for(int i=0; i<mas.size(); i++){
		cout << i << "=" << mas.at(i)<<endl;
	}
	cout << "dla parzystych:"<< endl;
	for( auto it=mas.begin(); it  < mas.end()-1; it+=2){
		co=0;  
		for( auto it2=mas.begin()+1; it2<mas.end()-1; it2+=2){
			
			if( *it==*it2) co++;
		}
		cout << *it << ": " << co << "razy" << endl;
	}

	cout << "dla nieparzystych:"<< endl;
	for(auto it=mas.begin()+1; it < mas.end(); it+=2){
		co=0;
		for( auto it2=mas.begin(); it2<mas.end()-1; it2+=2){
			if(*it==*it2) co++;
		}
		cout << *it << ": " << co << "razy" << endl;
	}
	system ("pause");
	return 0;
	}