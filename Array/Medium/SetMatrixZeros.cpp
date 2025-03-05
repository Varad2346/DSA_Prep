//Brute 
#include <bits/stdc++.h>
using namespace std;

void makeRow(vector<vector<int>> &matrix, int row, int n, int m) {
    for (int i = 0; i < m; i++) {
		if(matrix[row][i]!=0){
        matrix[row][i] = -1;
		}
    }
}

void makeCol(vector<vector<int>> &matrix, int col, int n, int m) {
    for (int i = 0; i < n; i++) {
		if(matrix[i][col]!=0){
        matrix[i][col] = -1;
		}
    }
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
    // First pass: mark rows and columns to be set to zero
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                makeRow(matrix, i, n, m);
                makeCol(matrix, j, n, m);
            }
        }
    }

    // Second pass: change all -1 to 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

//Better
#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	int col[m]={0};
	int row[n]={0};

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				row[i]=1;
				col[j]=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(row[i]||col[j]){
				matrix[i][j]=0;
			}
		}
	}
	return matrix;
}

//Optimal
#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	int col0=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				matrix[i][0]=0;
				if(j!=0){
					matrix[0][j]=0;
				}
				else{
					col0=0;
				}
			}
		}
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if(matrix[i][j]!=0){
				if(matrix[0][j]==0||matrix[i][0]==0){
					matrix[i][j]=0;
				}
			}
		}
	}
	if(matrix[0][0]==0){
		for(int j=0;j<m;j++){
			matrix[0][j]=0;
		}
	}
	if(col0==0){
		for(int i=0;i<n;i++){
			matrix[i][0]=0;
		}
	}
	return matrix;
}
