#include <iostream>
#include "unorderedArrayListType.h"

using namespace std;

int main()
{
    unorderedArrayListType myList(10);

    myList.insertEnd(10);
    myList.insertEnd(20);
    myList.insertEnd(30);
    myList.insertEnd(40);
    myList.insertEnd(50);

    cout << "Initial list: ";
    myList.print();

    cout << "\nRemoving element at position 1 (value 20) using removeAt:" << endl;
    myList.removeAt(1);
    cout << "List after removeAt(1): ";
    myList.print();

    cout << "\nRemoving element with value 30 using remove:" << endl;
    myList.remove(30);
    cout << "List after remove(30): ";
    myList.print();

    cout << "\nAttempting to remove element at invalid position 5:" << endl;
    myList.removeAt(5);

    cout << "\nAttempting to remove non-existent item 100:" << endl;
    myList.remove(100);

    cout << "\nInserting 60 at the end:" << endl;
    myList.insertEnd(60);
    cout << "List after inserting 60: ";
    myList.print();

    cout << "\nReplacing element at position 0 with 15:" << endl;
    myList.replaceAt(0, 15);
    cout << "List after replaceAt(0, 15): ";
    myList.print();

    int searchItem = 40;
    int position = myList.seqSearch(searchItem);
    if (position != -1)
        cout << "\nElement " << searchItem << " found at position " << position << "." << endl;
    else
        cout << "\nElement " << searchItem << " not found in the list." << endl;

    cout << "\nIs the list sorted? " << (myList.isSorted() ? "Yes" : "No") << endl;

    cout << "\nSorting the list..." << endl;
    myList.sortList();
    cout << "List after sorting: ";
    myList.print();

    cout << "\nIs the list sorted now? " << (myList.isSorted() ? "Yes" : "No") << endl;

    cout << "\nClearing the list..." << endl;
    myList.clearList();
    cout << "List after clearing: ";
    myList.print();

    cout << "\nIs the list empty? " << (myList.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
