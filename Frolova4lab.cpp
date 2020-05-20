#include<iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main () {

    vector <int> din;
        int inp;
    int test7=0;

for (int i=0;; i++){
    cin >> inp;
     din.push_back(inp);
     if (inp==0) break;
     if (inp==7) 
        {
            test7++;
        }else{
            test7=0;
        }


        if (test7==3)break;
}

cout<< "start" << endl;
int k=1;
int co=0;
for (auto it=din.begin(); it !=din.end(); it++)
{ 

	co=0;
	for (auto it2=din.begin()+k; it2 !=din.end(); it2++) {
		if (*it==*it2) 
			co++; 
		
	}
	
	cout <<k <<" co " << *it <<" : "<< co << endl;
	k++;
}

system("pause");
return 0;
}