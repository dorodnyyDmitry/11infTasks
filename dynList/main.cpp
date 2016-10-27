#include "dynStackFunc.h"

int main()
{
    char name[30];
    char value[30];
    listElem* elem = new listElem;

    map<int, void(*)()> funcMap;
    funcMap.insert(pair<int, void(*)()>(1, push(name, value)))

     /*{
        { 1, push(name, value)},
        { 2, pop(elem)},
        { 3, ptr_to_get(name)},
        { 4, get_list()},
        { 5, make_empty()}
    };*/

    //List dynList;
    //List_construct(dynList);||=== Build: Debug in dynStack (compiler: GNU GCC Compiler) ===|


    /*
    List *head = new List;
    cin >> head->data;
    head ->ptr = NULL; //~~
    int i = 0;
    while(true){
        cin >> i;
        fptr[i](head);
    }

    delete head;
*/
    return 0;
}
