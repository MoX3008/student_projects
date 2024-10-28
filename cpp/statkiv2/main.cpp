#include <iostream>

using namespace std;

int main(){
	int pole[2][2]={0};
	int x, y, gx, gy;
	for(int i=0;i<1;i++){
		cout<<"Gracz 1 podaje współrzędne statku\n";
		cin>>x>>y;
		cout<<"Gracz 2 strzela\n";
		cin>>gx>>gy;
		if(pole[gx][gy]==pole[x][y]){
			cout<<"Zatopiony!!";
		}else{
			cout<<"Pudło!";
		}
	}
return 0;
}
