#include<iostream>
#include<array>

using namespace std;

array<int, 5> arr = { 0, };

//���� ���
void MySequentialSort(int n, array<int, 5>& arr) {

    //�������� ����
    if (n == 1) {
        for (int i = 0; i < arr.size() - 1; i++) {
            for (int j = 0; j < arr.size() - 1 - i; j++) {
                if (arr[j] > arr[j + 1])
                {
                    int tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                }
            }
        }
    }

    //�������� ����
    else
    {
        for (int i = 0; i < arr.size() - 1; i++) {
            for (int j = 0; j < arr.size() - 1 - i; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    int tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                }
            }
        }
    }
}


int main() {

    int average = 0;
    int sum = 0;
    int choice = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];

        sum += arr[i];
    }

    average = sum / arr.size();
    cout << "Sum: " << sum << " Average: " << average << endl;

    cout << "1�� �Է½� �������� ����, 2�� �Է½� �������� ����" << endl;
    cin >> choice;
    MySequentialSort(choice, arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}