#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int n;
	n=rand()%5;
	if(n==0){
		int p;
		p=a;
		a=b;
		b=p;

	}else if(n==1){
		int p;
		p=b;
		b=c;
		c=p;

	}else if(n==2){
		int p;
		p=c;
		c=d;
		d=p;
	}else if(n==3){
		int p;
		p=a;
		a=d;
		d=p;
	}else if(n==4){
		int p;
		p=b;
		b=d;
		d=p;
	}else if(n==5){
		int p;
		p=c;
		c=d;
		d=p;
	}
}
