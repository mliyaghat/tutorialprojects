#include <iostream>
using namespace std;
 
int main() {
	int n=10;
	int j=0, m=0;
	float a;
	float array [n];
	float array2 [n];
	for(int i=0;i<n;i++){
		array2[i]=0.0;
	}
	for (int i=0;i<n;i++){
		cin>>array[i];
		if(array[i]>200){
			array2[j]=array[i];
			m++;
		}
		j++;
	}
	for(int j=0;j<m;j++){
		for(int i=0;i<m;i++){
			if (array2[i]<array2[i+1]){
				a = array2[i];
	    		array2[i] = array2[i + 1];
	      		array2[i + 1] = a;
			}
		}
	}
	for(int i=0;i<m;i++){
    		for(int j=0;j<n;j++){
        		if (array2[i]==array[j]){
                		cout<<j<<endl;
			}
		}
	}
}
