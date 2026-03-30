#ifndef CBOOK_H
#define CBOOK_H
#include <string>
#include <iostream>
class cBook
{
    public:
        cBook(std::string I="Null",std::string N="Null",int Y=0,int P=0)
        {
            ID = I;
            Name = N;
            Year = Y;
            Page = P;
        };
        void Set_Book();
        void Get_Book();
        void Get_ID_Book();
        void Set_ID_Book();
        void Get_Name_Book();
        void Set_Name_Book();
        void Get_Year_Book();
        void Set_Year_Book();
        void Get_Page_Book();
        void Set_Page_Book();
    protected:

    private:
        std::string ID;
        std::string Name;
        int Year;
        int Page;
        friend class cListBook;
};

#endif // CBOOK_H
