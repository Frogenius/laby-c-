#include<iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main () {

    vector <double> din;
        double inp;
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

//1variant

cout << "1 var:" << endl;
for (auto it= din.begin(); it !=din.end(); it++)
{    
cout << *it <<",";

}

//2variant
cout << "2 var:" << endl;
for (int j=0; j < din.size(); j++)
    { 
        cout << din.at(j) <<",";
    }
system("pause");
}