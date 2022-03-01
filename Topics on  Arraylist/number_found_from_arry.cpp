#include <iostream>
using namespace std;

int main()
{
    
  int arr[5]={1,200,8,20,10};
  int lookFor=10;
  
  
  bool isPresent = false;
  for(int i=0; i< 5 && isPresent == false; i++){
      if(arr[i]==lookFor){
          isPresent=true;
      }
  }
  if(isPresent){
      cout<<lookFor <<"found";
      
  }
  else{
        cout<<lookFor <<" not found";
  }

  
  return 0;
}
