#include <iostream>
using namespace std;
 
int main() {
	int n=10;
	float a;
	float array [n];
	float array2 [n];
	for (int i=0;i<n;i++){
		cin>>array[i];
		array2[i]=array[i];
	}
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			if (array[i]<array[i+1]){
				a = array[i];
	    		array[i] = array[i + 1];
	      		array[i + 1] = a;
			}
		}
	}	
	for(int i =0; i<5; i++){
        	for(int j=0; j<10; j++){
        		if (array[i] == array2[j]){
                		cout<<j<<endl;
			}
		}
    	}
	}
