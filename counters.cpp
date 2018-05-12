#include <iostream>

using namespace std;

int main (){
	int count = 0, n= 20;
	// Count number of even numbers
	for (int i = 0; i<n; i++){
		if(i%2 == 0)
			count ++;
	}
	cout<<count<<endl;
	return 0;
}