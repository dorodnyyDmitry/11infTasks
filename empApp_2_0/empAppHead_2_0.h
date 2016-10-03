#ifndef EMP_APP_HEAD_2_0_H
#define EMP_APP_HEAD_2_0_H

#include <iostream>
#include <fstream>
#include <vector>

typedef struct {
    char name[50];
    char job[50];
    int salary;
} Employee;

int get_amount();
void db_read();
void set_pointers();
void db_write(Employee to_write);
void db_clear();
void db_sort();

#endif // EMP_APP_HEAD_2_0_H
