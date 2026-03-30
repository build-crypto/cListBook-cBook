#include "cBook.h"
#include "cListBook.h"
#include <vector>
#include <iostream>
using namespace std;

void cListBook::Set_ListBook()
{
    SIZE=0;
    int t=0;
    char x;
    do
    {
        SIZE++;
        cout<<"Nhap sach thu "<<++t<<": "<<endl;
        cBook A;
        A.Set_Book();
        ListBook.push_back(A);
        cout<<"Tiep tuc?y/n"<<endl;
        cin>>x;
        cin.ignore();
    }while (x=='Y'||x=='y');
}
void cListBook::Get_ListBook()
{   int t=0;
    do
    {
        cout<<"Sach thu "<<++t<<": "<<endl;
        ListBook[t-1].Get_Book();
    }while (t<ListBook.size());
}
void cListBook::Sort_List()
{
    int temp;
    cBook A;
    for (int t=1;t<ListBook.size();t++)
    {
        A = ListBook[t];
        temp = ListBook[t].Year;
        for (int i=t;i>0;i--)
        {
            ListBook[i]=ListBook[i-1];
            if (temp>=ListBook[i].Year)
            {
                ListBook[i] = A;
                break;
            }
        }
    }
}
void cListBook::Get_BookInList(int t)
{
    ListBook[t-1].Get_Book();
}
int cListBook::Get_size()
{
    return SIZE;
}
