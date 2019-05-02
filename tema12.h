

#include <iostream>
#include <iomanip>      
using namespace std;



int main(){
	int a[4]; 
	int n = sizeof(a)/sizeof(a[0]);
	int i, q;
	
	for( i = 0; i < n; i++ ){
		cout << "a["  << i << "] = " ;
		cin >> a[i];
	}
	
	
	// alg for sort array 
    for( i = 0; i <= n-2; i++ ) {      // 0[min] 1[] 2[] 3[] 4[] 5[]
		int min = a[i];   
		int k = i; 
		
		for( int j = i+1; j <= n-1; j++){ // 1[]  > 0[] -> 1[min] k = 1
		
		    if( a[j] > min ) {
				min = a[j];
				k = j;
			}
		}
		
		// flip values x = 0[]; 0[] << 1[]; 1[] << 0[]
		int x = a[i]; 
		a[i] = a[k];
		a[k] = x;
	
	}
	
	// output 
	for( i = 0; i <= n-1 ; i++ ){
		cout << setw(10) << a[i] << endl; 
	}
	
	// END 
	return 0;

}