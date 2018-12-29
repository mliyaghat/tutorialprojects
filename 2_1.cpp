#include <iostream>
using namespace std;
 
int main() {
	int n=10;
	float a;
	float array [n];
	float arrayindex [n];
	for (int i=0;i<n;i++){
		cin>>array[i];
		arrayindex[i]=i;
	}
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			if (array[i]<array[i+1]){
				a = array[i];
	    		array[i] = array[i + 1];
	      		array[i + 1] = a;
	      		a = arrayindex[i];
	    		arrayindex[i] = arrayindex[i + 1];
	      		arrayindex[i + 1] = a;
			}
		}
	}

	for (int k=0;k<5;k++){
		cout<<arrayindex[k]<<endl;
	}
}
