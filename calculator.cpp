#include <iostream>
using namespace std;
int main() 
{
  char c;
  cin>>c;
  int n1,n2;
  cin>>n1>>n2;
  switch (c) 
  { 
    case '+': 
      cout << n1 + n2; 
      break; 
    case '-': 
      cout << n1 - n2; 
      break; 
    case '*': 
      cout << n1 * n2; 
      break; 
    case '/': 
      if(n2==0)
        cout<<"Divided By 0";
      else
        cout << n1 / n2; 
      break; 
    default: 
      cout << "Invalid Operator"; 
      break; 
  } 
  return 0;  
}
