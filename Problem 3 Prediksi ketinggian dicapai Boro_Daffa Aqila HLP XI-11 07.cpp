#include <bits/stdc++.h>
using namespace std;
// tinggimax=v^2*sin^2s/20
int main(){
	float s, v, t;
	int status=0;
	cin >> s >> v >> t;
	float sinA = sin(s * 22 / 7 / 180);
	float hasil = ( ( pow(v,2)) * ( pow(v,2) ) * ( pow(sinA,2) ) ) / 20;
	if(t<=hasil){
		status++;
		cout<<"status : " << status <<endl<< "ketinggian : " << hasil;
	}
	else{
		cout<<"status : " << status <<endl<< " ketinggian : " << hasil;
		
	}
}
