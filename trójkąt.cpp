#include <iostream> 
 using namespace std; 
 
 int main()
 { 
   
  int i, h; 
  cin >> h; 
   
   
  for(i=0; i<h; i++) 
  { 
   for(int j = 1; j <= h-1-i; j++)
   { 
    cout << "+"; 
   } 
   if(i%2 == 1 )
   { 
   
  for (int j = 1; j <=2*i+1; j++)
  { 
   cout << "x"; 
  }
  } 
  else {
	  for (int j = 1; j <=2*i+1; j++)
	  { 
   cout << "o";} 
  } 
  cout << endl; 
  } 
   system ("pause");
 return 0; 
  
 }