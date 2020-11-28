#include<stdlib.h>
#include<stdio.h>
int main() {
    int n = 6, m, k;
    int p[6] = { 2,4,6,8,10,12 };
    printf("請輸入要查詢的數M：");
    scanf_s("%d", &k);
    m = HalfSearch(p, 0, n - 1, k);
    if (m != -1)
        printf("第%d筆是%d", m + 1, k);
    else
        printf("沒有結果");

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