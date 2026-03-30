#include "cBook.h"
#include <iostream>
using namespace std;
void cBook::Set_Book()
        {
            cout<<"Nhap Ma Sach: ";
            getline(cin,ID);
            cout<<"Nhap Ten Sach: ";
            getline(cin,Name);
            cout<<"Nhap NXB Sach: ";
            cin>>Year;
            cout<<"Nhap So Trang Sach: ";
            cin>>Page;
        };
void cBook::Get_Book()
        {
            cout<<"Thong tin sach: "<<endl;
            cout<<"ID: "<<ID<<endl;
            cout<<"Name: "<<Name<<endl;
            cout<<"Year: "<<Year<<endl;
            cout<<"Total Pages: "<<Page<<endl;
        };
void cBook::Set_ID_Book()
{
    cout<<"Nhap Ma Sach duoc cap nhat: ";
        getline(cin,ID);
}
void cBook::Get_ID_Book()
{
    cout<<"ID: "<<ID<<endl;
}
void cBook::Set_Name_Book()
{
    cout<<"Nhap Ten Sach duoc cap nhat: ";
        getline(cin,Name);
}
void cBook::Get_Name_Book()
{
    cout<<"Name: "<<ID<<endl;
}
void cBook::Set_Year_Book()
{
    cout<<"Nhap NXB Sach duoc cap nhat: ";
        getline(cin,ID);
}
void cBook::Get_Year_Book()
{
    cout<<"Year: "<<ID<<endl;
}
void cBook::Set_Page_Book()
{
    cout<<"Nhap So Trang Sach duoc cap nhat: ";
        getline(cin,ID);
}
void cBook::Get_Page_Book()
{
    cout<<"Total Pages: "<<Page<<endl;
}
