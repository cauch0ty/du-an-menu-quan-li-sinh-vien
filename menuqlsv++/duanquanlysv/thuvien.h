#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

typedef struct
{
	char maHocVien[50];
	char hoTen[50];
	char gioiTinh[50];
	int ngaySinh, thang, nam;
	char queQuan[50];
	char lop[50];
}ThongTin;

typedef struct
{
	char tenMon[50];
	char maMon[15];
	int soBuoi;
	float diemMon1;
	float diemMon2;
	float diemMon3;
	char xeploai[10];
}MonHoc;

typedef struct
{
	int soBuoiDiHoc;
	int soBuoiYeuCau;
	int soBuoiNghi;
}HocTap;

typedef struct
{

	ThongTin thongtin;
	MonHoc monhoc;
	HocTap hoctap;
}HocVien;

typedef struct {

	char matk[50];

}TimKiemSv;
typedef struct
{
	char malop[10];
}DanhSachLop;

void nhapThongTin(HocVien hv[], int &n);
void xuatThongTin(HocVien hv[], int n);
float tinhdiemtrungbinh(HocVien diem);
void diemTBVaXepLoai(HocVien hv[], int n);
void timkiemhocvien(HocVien hv[], int n);
void hienthisvtheolop(HocVien hv[], int n);
void xepsvtheodtb(HocVien hv[], int n);
void hienthisv(HocVien hv[], int n);
void nhapTiepTuc();
