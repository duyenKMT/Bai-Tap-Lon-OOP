#include <iostream>
#include <string>
using namespace std;

//tao class hoac struct ngay thang nam sinh, nen de la struct cho gon va tien, phan nay Duyen lam
struct dob
{
    int ngay,thang,nam;
	void nhaptime(){
        cout<<"lan luot nhap nam,thang,ngay:\n";
		cout<<"nam: ";cin>>nam;
		do{
			cout<<"thang: ";cin>>thang;	
		}while(thang<1 || thang>12);
		
		switch(thang){
			case 2:
			{
				if((nam%400==0) ||(nam%4==0 && nam%100!=0)){
					do{
						cout<<"ngay: ";cin>>ngay;
					}
					while(ngay<1 || ngay>29);}
				else
					do{
						cout<<"ngay: ";cin>>ngay;
					}
					while(ngay<1 || ngay>28);
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
			{
				do{
					cout<<"ngay: ";
					cin>>ngay;
				}
				while(ngay<1 || ngay>30);
				break;
			}
			default:
			{
				do{
					cout<<"ngay: ";
					cin>>ngay;
				}
				while(ngay<1 || ngay>31);
				break;
			}	
		}
	}
	void xuattime(){
		cout<<"\ntime: "<<ngay<<"/"<<thang<<"/"<<nam;
	}
} time;

//tao kieu du lieu liet ke ten la gioi tinh (gender)
enum gender
{
    Male,
    Female
}; // Nam va Nu

//tao kieu du lieu liet ke ten la tinh trang (condition)
enum conditions
{
    Good,
    Bad
};

// tao class nhan khau
class Nhankhau
{
protected:
    int sothutu, MSCD;
    string ten, diachi;
    gender sex;

public:
    // ham nhap du lieu
    void nhap()
    {
        // dien code vao day
    }

    // ham in du lieu
    void in()
    {
    }
};

class Tieuhoc : public Nhankhau
{
protected:
    dob ngaysinh;

public:
    void nhap()
    {
        Nhankhau::nhap();
        // dien tiep code vao day
    }

    void in()
    {
        Nhankhau::in();
        // viet tiep code vao day
    }
};

class Truongthanh : public Nhankhau
{
protected:
    dob ngaysinh;
    conditions suckhoe;

public:
    void nhap()
    {
        Nhankhau::nhap();
        // dien tiep code vao day
    }

    void in()
    {
        Nhankhau::in();
        // viet tiep code vao day
    }

    // ham thong ke du lieu
    int thongke()
    {

    }
};
