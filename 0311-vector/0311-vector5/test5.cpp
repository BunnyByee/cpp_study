#include <iostream>
#include <vector>
using namespace std;

int main() {
	int row, col;
	cout << "��� �� �Է�: ";
	cin >> row >> col;

	// row X col 2���� ���� ����
	vector<vector<int>> v(row, vector<int>(col));

	// ���Ҹ� �Է¹޾� ���� �ʱ�ȭ
	cout << "����� ���Ҹ� �Է��ϼ���:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			int value;
			cin >> value;
			v[i][j] = value;
		}
	} cout << endl;

	// �� ���� ���� ���ϱ�
	cout << "�� ���� ��:" << endl;
	for (int i = 0; i < row; i++) {
		int rowSum = 0;
		for (int j = 0; j < col; j++) {
			rowSum += v[i][j];
		}
		cout << i+1 << ": " << rowSum << endl;
	} cout << endl;

	// �� ���� ���� ���ϱ�
	cout << "�� ���� ��:" << endl;
	for (int i = 0; i < col; i++) {
		int colSum = 0;
		for (int j = 0; j < row; j++) {
			colSum += v[j][i];
		}
		cout << i + 1 << ": " << colSum << endl;
	} cout << endl;
}