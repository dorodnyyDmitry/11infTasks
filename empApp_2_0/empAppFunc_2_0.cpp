#include "empAppHead_2_0.h"

using namespace std;

vector<Employee> list;
Employee *ptrAr = list.data();
Employee temp_ptr;
Employee temp;

int get_amount(){
    ifstream fin("file.dat", ios_base::binary);
    fin.seekg(0, ios_base::end);
    int size = fin.tellg();
    fin.close();
    return size / sizeof(Employee);
}

void db_read(){
    list.clear();
    ifstream fin("file.dat", ios_base::binary | ios_base::in);
    while(fin.read((char*)&temp, sizeof(Employee)))
        list.push_back(temp);
    fin.close();
    for(int i = 0; i < get_amount(); i++)
                cout << list[i].name << " " << list[i].job << " " << list[i].salary << "\n";
}

void set_pointers(){
    db_read();
    ptrAr = list.data();
}

void db_write(Employee to_write){
    ofstream fout("file.dat", ios_base::binary|ios_base::app);
    fout.write((char*)&to_write, sizeof(Employee));
    fout.close();
}

void db_clear(){
    ofstream ers("file.dat", ios_base::binary | ios_base::trunc);
    ers.close();
}

void db_sort(){
    set_pointers();
    for(int i = 0; i < get_amount() - 1; i++){
        for(int j = 0; j < get_amount() - i - 1; j++){
            if(*ptrAr[j].name > *ptrAr[j+1].name){
                temp_ptr = ptrAr[j];
                ptrAr[j] = ptrAr[j+1];
                ptrAr[j+1] = temp_ptr;
            }
        }
    }

    db_clear();
    for(int i = 0; i < list.size(); i++)
        db_write(ptrAr[i]);
    db_read();
}


