#include <iostream>
#include <vector>
using namespace std;

int main() {
	int row, col;
	cout << "행과 열 입력: ";
	cin >> row >> col;

	// row X col 2차원 벡터 생성
	vector<vector<int>> v(row, vector<int>(col));

	// 원소를 입력받아 벡터 초기화
	cout << "행렬의 원소를 입력하세요:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			int value;
			cin >> value;
			v[i][j] = value;
		}
	} cout << endl;

	// 각 행의 값을 더하기
	cout << "각 행의 합:" << endl;
	for (int i = 0; i < row; i++) {
		int rowSum = 0;
		for (int j = 0; j < col; j++) {
			rowSum += v[i][j];
		}
		cout << i+1 << ": " << rowSum << endl;
	} cout << endl;

	// 각 열의 값을 더하기
	cout << "각 열의 합:" << endl;
	for (int i = 0; i < col; i++) {
		int colSum = 0;
		for (int j = 0; j < row; j++) {
			colSum += v[j][i];
		}
		cout << i + 1 << ": " << colSum << endl;
	} cout << endl;
}