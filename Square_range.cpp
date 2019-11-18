#include <iostream>

bool sq_test(int x){

 for(int i = 0; i <= x; ++i){
   if(i*i == x) return true;
   else continue;
}	
return false;
}

int main(){

int n = 0;
scanf("%d", &n);

for(int i =1; i <=n; ++i){
 if(sq_test(i) == true) printf("%d ",i); 
}

return 0;
}
