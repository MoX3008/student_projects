#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x;
	int l;
	int d;
	for ( l=2; l<=100; l++){
	x=1;
	for (d=2 ; d*d<=l; d++){
	    if(l%d==0){
	    x=0;
	break;
}
}
if(x==1){
cout<<l<<endl;
}
}
return 0;}
