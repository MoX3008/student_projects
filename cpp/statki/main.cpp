#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
int t;
int losowyx;
int losowyy;
int x;
int y;
srand(time(NULL));
	cout<<"Witaj, Graczu\nTwoim zadaniem jest trafienie 3 statków na polach x i y od 0 do 3\n";
	for(int i=0;i<3;i++){
	losowyx = (rand()%3)+0;
	losowyy = (rand()%3)+0;
	do{
		cout<<"Podaj pole x(od 0 do 3): ";
		cin>>x;
		cout<<"Podaj pole y(od 0 do 3): ";
		cin>>y;
	}while(x!=losowyx, y!=losowyy);
	cout<<"Brawo udało ci się zatopić statek\n";
	}
	cout<<"Gratulacje udało ci się ustrzelić wszystkie 3 statki!!\n";
	return 0;
}
