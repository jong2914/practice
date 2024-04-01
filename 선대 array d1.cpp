#include <iostream>
using namespace std;
void main() {
	// matrix in 1D
	int N = 2, K=3, M = 2, NM;
	float *A, * B, * C;
	A = new float[N*K];
	B = new float[K*M];
	C = new float[N*M];
	A[0] = 1; A[1] = 2; A[2] = 3;
	A[3] = 4; A[4] = 5; A[5] = 6;
	B[0] = 1; B[1] = 0; 
	B[2] = 1; B[3] = 0; 
	B[4] = 2; B[5] = 3;
	// C = A * B
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			C[n*M+m] = A[n]*B[m] + A[n+1]*B[m+2] + A[n+2]*B[m+4];
		}
	}
	// show results
	for (int n = 0; n < N; n++) {
		for (int m = 0; m < M; m++) {
			cout << C[n*M+m] << "  ";
		}
		cout << endl;
	}
	delete[] A;
	delete[] B;
	delete[] C;
}
