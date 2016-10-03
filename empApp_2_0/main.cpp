#include "empAppHead_2_0.h"

using namespace std;

int get_menu_pos() {
    int menu_pos;
    cout << "\n       SELECT OPTION:      \n"
         << "1 - Read DB\n"
         << "2 - Write data to DB\n"
         << "3 - Clear DB\n"
         << "4 - Sort employees by name\n"
         << "5 - How much is written\n"
         << "6 - Exit DMS\n";

    cout << ">>> ";
    cin >> menu_pos;
    return menu_pos;
}

int main() {
    bool run = true;
    int how_much;
    get_amount(); //Count amount of written employees
    db_read();

    while(run){ //Menu
        int selected_menu_pos = get_menu_pos();
        switch(selected_menu_pos){
        case 1:
            db_read();
            for(int i = 0; i < get_amount(); i++)
                cout << list[i].name << " " << list[i].job << " " << list[i].salary << "\n";
            cout << "\n===============================\n";
            break;
        case 2:
            cout << "How much employees do you want to add\n";
            cin >> how_much;
            for(int i = 0; i < how_much; i++){
                cin >> temp.name >> temp.job >> temp.salary;
                db_write(temp);
            }
            cout << "\n===============================\n";
            break;
        case 3:
            db_clear();
            break;
        case 4:
            db_sort();
            break;
        case 5:
            db_read();
            cout << list.size() << "\n";
            break;
        case 6:
            run = false;
            break;
        }
    }
	return 0;
}
