#include<stdlib.h>
#include<stdio.h>
int main() {
    int n = 6, m, k;
    int p[6] = { 2,4,6,8,10,12 };
    printf("�п�J�n�d�ߪ���M�G");
    scanf_s("%d", &k);
    m = HalfSearch(p, 0, n - 1, k);
    if (m != -1)
        printf("��%d���O%d", m + 1, k);
    else
        printf("�S�����G");

}
int HalfSearch(int a[], int low, int high, int key)
{
    int mid;
    if (low > high) return -1;
    else {
        mid = (low + high) / 2;
        if (a[mid] == key) return mid;
        else if (a[mid] < key)  return HalfSearch(a, mid + 1, high, key);
        else return HalfSearch(a, low, mid - 1, key);
    }
}