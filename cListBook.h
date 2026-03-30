#ifndef CLISTBOOK_H
#define CLISTBOOK_H
#include "cBook.h"
#include <vector>
class cListBook
{
    public:
        void Get_ListBook();
        void Set_ListBook();
        void Sort_List();
        void Get_BookInList(int t);
        int Get_size();
    protected:

    private:
        std::vector<cBook> ListBook;
        int SIZE;
};

#endif // CLISTBOOK_H
