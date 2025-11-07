#include <stdio.h>


int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int lua_chon;
    int n = 0;
    int arr[100];
    int i;

    do {
        printf("\n------------------- MENU ----------------------\n");
        printf("1. Nhap so luong phan tu va gia tri tung phan tu cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang\n");
        printf("3. Tinh tong cua tat ca so nguyen to o trong mang\n");
        printf("4. In ra cac phan tu co index la so le trong mang\n");
        printf("5. Them moi mot phan tu vao cuoi mang\n");
        printf("6. Xoa phan tu tai mot vi tri cu the\n");
        printf("7. Sap xep mang theo thu tu giam dan (Bubble Sort)\n");
        printf("8. Kiem tra su ton tai cua phan tu trong mang (Linear Search)\n");
        printf("9. In ra cac phan tu xuat hien dung 1 lan trong mang\n");
        printf("10. Cap nhat tat ca so am trong mang thanh gia tri 0\n");
        printf("0. Thoat chuong trinh\n");
        printf("----------------------------------------------------------\n");
        printf("Nhap lua chon: ");
        scanf("%d", &lua_chon);

        switch (lua_chon) {
            case 1: {
                printf("Nhap so luong phan tu: ");
                scanf("%d", &n);
                for (i = 0; i < n; i++) {
                    printf("Phan tu arr[%d] = ", i);
                    scanf("%d", &arr[i]);
                }
                break;
            }

            case 2: {
                if (n == 0) {
                    printf("Mang chua duoc nhap!\n");
                    break;
                }
                printf("Cac phan tu trong mang: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 3: {
                int sum = 0;
                for (i = 0; i < n; i++) {
                    if (laSoNguyenTo(arr[i])) {
                        sum += arr[i];
                    }
                }
                printf("Tong cac so nguyen to trong mang la: %d\n", sum);
                break;
            }

            case 4: {
                printf("Cac phan tu co index la so le: ");
                for (i = 0; i < n; i++) {
                    if (i % 2 != 0)
                        printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 5: {
                int phan_tu;
                printf("Nhap phan tu muon them vao cuoi mang: ");
                scanf("%d", &phan_tu);
                arr[n] = phan_tu;
                n++;
                printf("Da them thanh cong!\n");
                break;
            }

            case 6: {
                int vi_tri;
                printf("Nhap vi tri can xoa (0 -> %d): ", n - 1);
                scanf("%d", &vi_tri);
                if (vi_tri >= 0 && vi_tri < n) {
                    for (i = vi_tri; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Da xoa phan tu tai vi tri %d!\n", vi_tri);
                } else {
                    printf("Vi tri khong hop le!\n");
                }
                break;
            }

            case 7: {
                for (int a = 0; a < n - 1; a++) {
                    for (int b = 0; b < n - a - 1; b++) {
                        if (arr[b] < arr[b + 1]) {
                            int temp = arr[b];
                            arr[b] = arr[b + 1];
                            arr[b + 1] = temp;
                        }
                    }
                }
                printf("Mang sau khi sap xep giam dan: ");
                for (i = 0; i < n; i++) printf("%d ", arr[i]);
                printf("\n");
                break;
            }

            case 8: {
                int x;
                int found = 0;
                printf("Nhap phan tu can tim: ");
                scanf("%d", &x);
                for (i = 0; i < n; i++) {
                    if (arr[i] == x) {
                        printf("Phan tu %d ton tai tai vi tri %d\n", x, i);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Khong tim thay phan tu %d trong mang\n", x);
                break;
            }

            case 0:
                printf("Thoat chuong trinh. Tam biet!\n");
                break;

            default:
                printf("Lua chon khong hop le, vui long nhap lai!\n");
        }

    } while (lua_chon != 0);

    return 0;
}


