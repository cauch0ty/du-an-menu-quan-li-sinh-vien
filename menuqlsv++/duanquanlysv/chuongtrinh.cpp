#include "thuvien.h"

int main()
{
	HocVien hv[50];
	int chon;
	int n = 0;
	while (1)
	{
		system("color 0a");
		printf("\t\t\t\tCHUONG TRINH QUAN LY HOC VIEN \n");
		printf("\t------------------------------------MENU-----------------------------------\n");
		printf("\t-  1.Nhap thong tin hoc vien, mon hoc, qua trinh hoc.                     -\n");
		printf("\t-  2.Tinh diem trung binh, xep loai.                                      -\n");
		printf("\t-  3.Tim kiem hoc vien theo ma hoc vien.                                  -\n");
		printf("\t-  4.Hien thi danh sach hoc vien theo tung lop.                           -\n");
		printf("\t-  5.Hien thi danh sach hoc vien sap xep theo diem trung binh giam dan.   -\n");
		printf("\t-  6.hien thi thong tin cua hoc vien da nhap.                             -\n");
		printf("\t-  0.Thoat chuong trinh.                                                  -\n");
		printf("\t---------------------------------------------------------------------------\n");
		printf("Moi ban nhap vao chon: ");
		scanf("%d", &chon);

		switch (chon)
		{
		case 1:
			printf("\n1.Nhap thong tin hoc vien, mon hoc, qua trinh hoc.\n");
			nhapThongTin(hv, n);
			nhapTiepTuc();
			break;
		case 2:
			printf("\n2.Tinh diem trung binh, xep loai.\n");
			diemTBVaXepLoai(hv, n);
			nhapTiepTuc();
			break;
		case 3:
			printf("\n3.Tim kiem hoc vien theo ma hoc vien.\n");
			timkiemhocvien(hv, n);
			nhapTiepTuc();
			break;
		case 4:
			printf("\n4.Hien thi danh sach hoc vien theo tung lop.\n");
			hienthisvtheolop(hv, n);
			nhapTiepTuc();
			break;
		case 5:
			printf("\n5.Hien thi danh sach hoc vien sap xep theo diem trung binh giam dan.\n");
			hienthisv(hv, n);
			nhapTiepTuc();
			break;
		case 6:
			printf("\n6.Hien thi thong tin hoc vien.\n");
			xuatThongTin(hv, n);
			nhapTiepTuc();
			break;
		case 0:
			printf("Ban chon thoat chuong trinh! \n");
			getch();
			return 0;
		default:
			printf("Ban nhap sai!Hay vui long nhap lai! \n");
			break;
		}
	}

	return 0;
}