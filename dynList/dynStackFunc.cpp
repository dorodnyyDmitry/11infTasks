#include "dynStackFunc.h"


List myList;

void List_construct(){
    myList.head = NULL;
}

bool is_empt(){
    return(myList.head == NULL);
}

void push(char *name, char *value){
    listElem* elem = new listElem();

    /*elem->varName = name;
    elem->varValue = *value;*/

    strcpy(elem->varName, name);
    strcpy(elem->varValue, value);

    elem->nextElem = NULL;
    if(is_empt())
        myList.head = elem;
    else
        myList.last->nextElem = elem;

    myList.last = elem;
}

void pop(listElem* elem){
    if(elem == myList.head){
        myList.head = elem->nextElem;
        return;
    }

    listElem* temp = new listElem();
    temp = myList.head;
    while(temp->nextElem != elem)
        temp = temp->nextElem;
    temp->nextElem = elem->nextElem;
    delete elem;
}

listElem* get(char *name){
    while (myList.head != NULL){
        if(myList.head->varName == name)
            return myList.head;
        myList.head = myList.head->nextElem;
    }
    return myList.head;
}

void ptr_to_get(char *arg){
    get(arg);
}

void make_empty(){
    while(myList.head != NULL)
        pop(myList.head);
}

void get_list(){
    int i = 1;
    listElem *temp = new listElem;
    temp = myList.head;
    while(temp->nextElem != myList.last){
        cout << temp->varName << " " << temp->varValue << "\n";
        temp = temp->nextElem;
    }
}
