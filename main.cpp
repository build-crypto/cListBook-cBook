#include<iostream>
#include "cBook.h"
#include "cListBook.h"
using namespace std;
int main ()
{
    cout<<"Nhap Danh Sach cac quyen Sach: "<<endl;
    cListBook T;
    T.Set_ListBook();
    T.Get_ListBook();
    T.Sort_List();
    cout<<"Quyen Sach duoc xuat ban gan day la: "<<endl;
    T.Get_BookInList(T.Get_size());
    return 0;
}
