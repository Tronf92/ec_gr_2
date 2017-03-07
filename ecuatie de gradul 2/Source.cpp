#include <iostream>
using namespace std;
//ecuatia de gradul I ax+b=0
int main(){
	float a,b,x;
	cout << "Introduceti a: " << endl;
	cin >> a;
	cout << "Introduceti b: " << endl;
	cin >> b;

	if(a==0){
		if(b==0){
			cout << "X este real" << endl;
		}
		else {
			cout << "X nu are solutii" << endl;
		}
	}
	else{
		x=-b/a;
		cout.precision(2);
		cout << "Solutia este : " << x << endl;
	}

	

	system("pause");
	return 0;
}



	
	

