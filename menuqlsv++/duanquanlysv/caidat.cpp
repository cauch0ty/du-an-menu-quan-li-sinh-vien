#include "thuvien.h"

void nhapThongTin(HocVien hv[], int &n)
{
	system("cls");

	printf("Nhap so luong hoc vien: ");
	scanf("%d", &n);

	printf("\n");

	for (int i = 0; i < n; i++)
	{
		system("cls");
		printf("\t*------THONG TIN HOC VIEN %d------*\n", i);
		getchar();
		printf("Nhap ma hoc vien: ");
		gets(hv[i].thongtin.maHocVien);
		printf("Nhap ho va ten hoc vien: ");
		gets(hv[i].thongtin.hoTen);
		printf("Nhap gioi tinh hoc vien: ");
		gets(hv[i].thongtin.gioiTinh);
		printf("Nhap ngay sinh hoc vien: ");
		scanf("%d%d%d", &hv[i].thongtin.ngaySinh, &hv[i].thongtin.thang, &hv[i].thongtin.nam);
		getchar();
		printf("Nhap que quan hoc vien: ");
		gets(hv[i].thongtin.queQuan);
		printf("Nhap lop hoc vien: ");
		gets(hv[i].thongtin.lop);
		printf("\n\t*------MON HOC CUA HOC VIEN %d------*\n", i);
		for (int j = 0; j < 3; j++)
		{
			fflush(stdin);
			printf("Nhap ten mon thu %d la:\t ", j + 1);
			gets(hv[j].monhoc.tenMon);
			printf("Nhap ma mon thu %d la :\t ", j + 1);
			gets(hv[j].monhoc.maMon);
			printf("Nhap so buoi mon thu %d:\t ", j + 1);
			scanf("%d", &hv[j].monhoc.soBuoi);
		}


		printf("Nhap so diem cua mon hoc thu 1 :\t");
		scanf("%f", &hv[i].monhoc.diemMon1);
		printf("Nhap so diem cua mon hoc thu 2 :\t");
		scanf("%f", &hv[i].monhoc.diemMon2);
		printf("Nhap so diem cua mon hoc thu 3 :\t");
		scanf("%f", &hv[i].monhoc.diemMon3);

		printf("\n\t*------QUA TRINH HOC CUA HOC VIEN %d------*\n", i);
		printf("So buoi yeu cau hoc: ");
		scanf("%d", &hv[i].hoctap.soBuoiYeuCau);
		printf("So buoi nghi: ");
		scanf("%d", &hv[i].hoctap.soBuoiNghi);
		printf("So buoi di hoc: ");
		scanf("%d", &hv[i].hoctap.soBuoiDiHoc);

	}

}
void xuatThongTin(HocVien hv[], int n)
{
	system("cls");
	for (int i = 0; i < n; i++)
	{
		printf(" \t * ------ THONG TIN HOC VIEN %d------ * \n ", i);
		printf(" Ho va ten sinh vien la: %s \n ", hv[i].thongtin.hoTen);
		printf(" Ma sinh vien la: %s \n ", hv[i].thongtin.maHocVien);
		printf(" lop cua sinh vien la: % s \n ", hv[i].thongtin.lop);
		printf(" Ngay sinh cua sinh vien la: %d %d %d \n ", hv[i].thongtin.ngaySinh, hv[i].thongtin.thang, hv[i].thongtin.nam);
		printf(" Gioi tinh cua sinh vien la: %s \n ", hv[i].thongtin.gioiTinh);
		printf(" Que quan sinh vien la: %s \n ", hv[i].thongtin.queQuan);
		printf("o=======D=========================================================>\n");
		printf(" \n \t * ------ MON HOC CUA HOC VIEN ------ * \n ");
		for (int j = 0; j < 3; j++)
		{
			printf(" mon hoc thu %d cua sinh vien la: %s\n\n ", j + 1, hv[j].monhoc.tenMon);
			printf(" ma cua mon hoc thu %d la: %s \n\n ", j + 1, hv[j].monhoc.maMon);
			printf(" so buoi cua mon hoc thu %d la: %d \n\n ", j + 1, hv[j].monhoc.soBuoi);
			printf("o=======D=========================================================>\n");
		}
		printf(" \n \t * ------ DIEM MON HOC CUA HOC VIEN ------ * \n ");
		printf(" so diem mon 1 cua hoc vien %d la : %.2f \n", i + 1, hv[i].monhoc.diemMon1);
		printf(" so diem mon 2 cua hoc vien %d la : %.2f \n", i + 1, hv[i].monhoc.diemMon2);
		printf(" so diem mon 3 cua hoc vien %d la : %.2f \n", i + 1, hv[i].monhoc.diemMon3);
		printf("o=======D=========================================================>\n");

		printf(" \n \t * ------ QUA TRINH HOC CUA HOC VIEN ------ * \n ");
		printf(" So buoi yeu cau hoc la: %d \n ", hv[i].hoctap.soBuoiYeuCau);
		printf(" so buoi hoc vien nghi hoc la: %d \n ", hv[i].hoctap.soBuoiNghi);
		printf(" so buoi hoc vien di hoc la: %d \n ", hv[i].hoctap.soBuoiDiHoc);
		printf("o=======D=========================================================>\n");
	}
}
float tinhdiemtrungbinh(HocVien diem)
{
	float tong = 0;
	float diemtb = 0;


	tong += diem.monhoc.diemMon1 + diem.monhoc.diemMon2 + diem.monhoc.diemMon3;

	diemtb = tong / 3;

	return diemtb;
}

void diemTBVaXepLoai(HocVien hv[], int n)
{
	for (int i = 0; i < n; i++)
	{
		float dtb = tinhdiemtrungbinh(hv[i]);
		if (dtb >= 8)
			printf("Hoc vien %d: xep loai : Gioi \n co diem trung binh : %.2f! \n \n", i + 1, dtb);
		else if (dtb >= 6.5)
			printf("Hoc vien %d: xep loai : Kha \n co diem trung binh :  %.2f! \n \n", i + 1, dtb);
		else if (dtb >= 5)
			printf("Hoc vien %d: xep loai : Trung Binh \n co diem trung : binh %.2f! \n \n", i + 1, dtb);
		else
			printf("Hoc vien %d: xep loai : Yeu \n co diem trung binh : %.2f! \n \n", i + 1, dtb);
	}
}
void timkiemhocvien(HocVien hv[], int n)
{
	char nhapMaHV[50];
	int flag = 0;
	int dem = 0;

	getchar();
	printf("Nhap ma Hoc Vien can tim: ");
	gets(nhapMaHV);

	for (int i = 0; i < n; i++)
	{
		if (strcmp(hv[i].thongtin.maHocVien, nhapMaHV) == 0)
		{
			
			if (dem == 0)
			{
				printf("====================TIM THAY HOC VIEN==================== \n");
			}
			printf("*----------------- THONG TIN HOC VIEN %d-----------------*   \n ", dem + 1);
			printf(" 1. Ho va ten sinh vien la: %s                               \n ", hv[i].thongtin.hoTen);
			printf(" 2. Ma sinh vien la: %s                                      \n",  hv[i].thongtin.maHocVien);
			printf(" 3. Lop cua sinh vien la: % s                                \n ", hv[i].thongtin.lop);
			printf(" 4. Ngay sinh cua sinh vien la: %d %d %d                     \n ", hv[i].thongtin.ngaySinh, hv[i].thongtin.thang, hv[i].thongtin.nam);
			printf(" 5. Gioi tinh cua sinh vien la: %s                           \n ", hv[i].thongtin.gioiTinh);
			printf(" 6. Que quan sinh vien la: %s                                \n ", hv[i].thongtin.queQuan);
			printf("*------------- DIEM MON HOC CUA HOC VIEN %d -------------*   \n ", dem + 1);
			printf(" 1. So diem mon 1 cua hoc vien la : %.2f                     \n", hv[i].monhoc.diemMon1);
			printf(" 2. So diem mon 2 cua hoc vien la : %.2f                     \n", hv[i].monhoc.diemMon2);
			printf(" 3. So diem mon 3 cua hoc vien la : %.2f                     \n", hv[i].monhoc.diemMon3);
			printf("*--------------------------------------------------------*   \n");
			dem++;
			flag = 1;
		}
	}

	if (flag == 0)
		printf("Khong tim thay Hoc Vien! \n");
}
void hienthisvtheolop(HocVien hv[], int n)
{
	char lopHV[50];
	int flag = 0;
	int dem = 0;

	getchar();
	printf("Nhap lop Hoc Vien can tim: ");
	gets(lopHV);

	for (int i = 0; i < n; i++)
	{
		if (strcmp(hv[i].thongtin.lop, lopHV) == 0)
		{

			if (dem == 0)
			{
				printf("====================TIM THAY HOC VIEN==================== \n");
			}
			printf("*----------------- THONG TIN HOC VIEN %d-----------------*   \n ", dem + 1);
			printf(" 1. Ho va ten sinh vien la: %s                               \n ", hv[i].thongtin.hoTen);
			printf(" 2. Ma sinh vien la: %s                                      \n", hv[i].thongtin.maHocVien);
			printf(" 3. Lop cua sinh vien la: % s                                \n ", hv[i].thongtin.lop);
			printf(" 4. Ngay sinh cua sinh vien la: %d %d %d                     \n ", hv[i].thongtin.ngaySinh, hv[i].thongtin.thang, hv[i].thongtin.nam);
			printf(" 5. Gioi tinh cua sinh vien la: %s                           \n ", hv[i].thongtin.gioiTinh);
			printf(" 6. Que quan sinh vien la: %s                                \n ", hv[i].thongtin.queQuan);
			printf("*------------- DIEM MON HOC CUA HOC VIEN %d -------------*   \n ", dem + 1);
			printf(" 1. So diem mon 1 cua hoc vien la : %.2f                     \n", hv[i].monhoc.diemMon1);
			printf(" 2. So diem mon 2 cua hoc vien la : %.2f                     \n", hv[i].monhoc.diemMon2);
			printf(" 3. So diem mon 3 cua hoc vien la : %.2f                     \n", hv[i].monhoc.diemMon3);
			printf("*--------------------------------------------------------*   \n");
			dem++;
			flag = 1;
		}
	}

	if (flag == 0)
		printf("Khong tim thay lop Hoc Vien! \n");

}
void xepsvtheodtb(HocVien hv[], int n)
{
	HocVien tmp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (diem[i] < hv.diem[j])
			{
				tmp = hv[i];
				hv[i] = hv[j];
				hv[j] = tmp;
			}
		}
	}
}
void hienthisv(HocVien hv[], int n)
{
	for (int i = 1; i <= n; i++)
		printf("\n %s \n %f", hv[]);
}
void nhapTiepTuc()
{
	printf("\nBam phim bat ki de tiep tuc!");
	getch();
	system("cls");
}


