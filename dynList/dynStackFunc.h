#ifndef DYN_STACK_FUNC_H
#define DYN_STACK_FUNC_H

#include <string>
#include <string.h>
#include <iostream>
#include <map>
using namespace std;

struct listElem {
    char varName[30];
    char varValue[30];
    listElem* nextElem;
};

struct List {
    listElem* head;
    listElem* last;
};

void List_construct();
bool is_empt();
void push(char*, char*);
void pop(listElem* );
void ptr_to_get(char*);
void get_list();
void make_empty();

#endif /*DYN_STACK_FUNC_H*/
