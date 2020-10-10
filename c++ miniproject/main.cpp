#include <iostream>
#include "item.h"
#include "ItemList.h"

using namespace std;

int menuSelection(void);

int main()
{
    int select;
    Item obj;
    ItemList item;
    string option;

    item.readFile(obj, item);// Read from the file function call

    do{
        select = menuSelection();
        switch(select)
        {
            case 1:
                do{

                        obj.addItem(obj);

                        cout<<"\nDo you want to add another Item? [Y/N]"; // To ask user if they want to enter another item
                        getline(cin>>ws, option);

                }while(option == "Y" || option == "y" || option == "Yes");
                break;

            case 2:
                item.printItem(); // Print List function call
                break;

            case 3:
                item.findItemID(); //Find by ID function call
                break;

            case 4:
                item.findItemName(); //Find by name function call
                break;

            case 5:
                item.writeFile(); //Function to save data to file
                cout<<"Good Bye!"<<endl;
                break;
            default:
                cout<<"Error: Invalid selection. Please try again!"<<endl;
        }
    }while(select !=5);

    return 0;
}

int menuSelection(void)
{

    int select;

    cout<<"\t\tInventory Management System Menu"<<endl;
    cout<<"1. Add new item"<<endl;
    cout<<"2. Print item list"<<endl;
    cout<<"3. Find item by ID"<<endl;
    cout<<"4. Find item by name"<<endl;
    cout<<"5. Quit"<<endl;
    cout<<"Select:_";
    cin>>select;
    return select;
}



