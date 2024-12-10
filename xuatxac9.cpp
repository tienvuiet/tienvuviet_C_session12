
#include <stdio.h>
#include <math.h>
int a[100][100];
void matrannhap(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void matranxuat(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("  %d ", a[i][j]);
        }
        printf("\n");
    }
}

void matragoc(int n, int m) {
    
    printf("Goc ma tran: ");
    printf("%d ", a[0][0]);  
    if (m > 1) printf("%d ", a[0][m-1]);  
    if (n > 1) printf("%d ", a[n-1][0]);  
    if (n > 1 && m > 1) printf("%d ", a[n-1][m-1]); 
    printf("\n");
}

void duongbienmatran(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1) {
                printf(" %d  ", a[i][j]);
            } else {
                printf("    ");
            }
        }
        printf("\n");
    }
}

void cheochinh_cheophu(int n, int m) {
    printf("Cheo chinh: ");
    for (int i = 0; i < n; i++) {
        printf(" %d ", a[i][i]);
    }
    printf("\n\n");
    printf("Cheo phu: ");
    for (int i = 0; i < n; i++) {
        printf(" %d ", a[i][n-1-i]);
    }
    printf("\n");
}

void songuyento(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int dem = 1;
            if (a[i][j] < 2) {
                dem = 0;  
            } else {
                for (int k = 2; k <= sqrt(a[i][j]); k++) {
                    if (a[i][j] % k == 0) {
                        dem = 0;
                        break;
                    }
                }
            }
            if (dem == 1) {
                printf(" %d ", a[i][j]);
            }
        }
    }
    printf("\n");
}

int main() {
    int m, n;
    int luachon;
    while (1) {
        printf("\n        MENU\n");
        printf("1. Nhap gia tri cac phan tu mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra duong bien ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va duong cheo phu\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Moi se chon: ");
        scanf("%d", &luachon);
        switch (luachon) {
            case 1: {
                printf("Nhap so luong hang: ");
                scanf("%d", &n);
                printf("Nhap so luong cot: ");
                scanf("%d", &m);
                matrannhap(n, m);
                break;
            }
            case 2: {
                matranxuat(n, m);
                break;
            }
            case 3: {
                matragoc(n, m);
                break;
            }
            case 4: {
                duongbienmatran(n, m);
                break;
            }
            case 5: {
                cheochinh_cheophu(n, m);
                break;
            }
            case 6: {
                songuyento(n, m);
                break;
            }
            case 7: {
                printf("Mang da thoat!!\n");
                return 0;
            }
            default:
                printf("Phan tu nhap vao khong hop le\n");
        }
    }
}
