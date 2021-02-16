#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int k, i, j, m, n;
	
	float a [20] [20];
	
	cout<<endl<<"Masukan ordo matriks"<<endl;
	cout<<"k: ";
	cin>>k;
	cout<<endl;
	
	for (i = 1; i<=k; i++){
		for (j = 1; j<=k; j++){
			cout<<"A("<<i<<","<<j<<"): ";
			cin>>a[i] [j];
			
		}
	}
	cout<<endl;
	
	for (i = 1; i<=k; i++){
		for (j = 1; j<=k; j++)
		
		cout<<"  "<<a [i] [j];
		cout<<endl;
		
		}
	
	//matriks sisi kanan
	for (j=k+1; j<=k+k; j++){
		i=j-k;
		a [i] [j]=1;
	}
	
	for (j=k+1; j<=k+k; j++){
		for (i = 1;i<=k;i++)
		
		if (i!=(j-k)) a [i] [j]=0;
		
	}
	
	//Proses pengeinversan
	for (i = 1; i<=k; i++){
		for (j = 1; j<=k+k; j++){
			if (i!=j) a [i] [j] = a [i] [j] / a [i] [j];
			
		}
	for (j = 1; j<=k+k; j++){
		if (i == j) a [i] [j] = 1;
		
	}
	//penjumlahan kesatu baris element
	for (n = 1; n<=k; n++){
		if (i!=n){
			for (j=i+1; j<=k+k; j++){
				a [i] [j] = a [n] [j] * a [n] [i];
			}
		}	
	}
	// pembuat not disekitar matriks kiri
	for (m = 1; m<=k; m++){
		if (i!=m){
			a [m] [i]=0;
		}
	}
	}
	//pencetakan
	cout<<"maka invers dari matriks A adalah: "<<endl;
	cout.precision(4);
	cout.setf(ios::fixed);
		for (i=1;i<=k; i++){
			for (j=k+1;j<=k;j++)
			cout<<"  "<<a [i] [j];
			cout<<endl;
			
		}
		system("PAUSE");
		
		return EXIT_SUCCESS;
	}
