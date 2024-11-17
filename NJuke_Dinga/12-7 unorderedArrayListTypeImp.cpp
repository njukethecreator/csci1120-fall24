#include <iostream>
#include "unorderedArrayListType.h"

using namespace std;

unorderedArrayListType::unorderedArrayListType(int size) : arrayListType(size)
{
}

unorderedArrayListType::unorderedArrayListType(const unorderedArrayListType& otherList)
    : arrayListType(otherList)
{
}

unorderedArrayListType::~unorderedArrayListType()
{
}

void unorderedArrayListType::insertAt(int location, int insertItem)
{
    if (isFull())
    {
        cout << "Cannot insert in a full list." << endl;
        return;
    }
    if (location < 0 || location > length)
    {
        cout << "The position of the item to be inserted is out of range." << endl;
        return;
    }

    for (int i = length; i > location; i--)
        list[i] = list[i - 1];

    list[location] = insertItem;
    length++;
}

void unorderedArrayListType::insertEnd(int insertItem)
{
    if (isFull())
    {
        cout << "Cannot insert in a full list." << endl;
        return;
    }

    list[length] = insertItem;
    length++;
}

void unorderedArrayListType::replaceAt(int location, int repItem)
{
    if (location < 0 || location >= length)
    {
        cout << "The location of the item to be replaced is out of range." << endl;
        return;
    }

    list[location] = repItem;
}

int unorderedArrayListType::seqSearch(int searchItem) const
{
    for (int i = 0; i < length; i++)
    {
        if (list[i] == searchItem)
            return i;
    }
    return -1;
}

void unorderedArrayListType::remove(int removeItem)
{
    int loc = seqSearch(removeItem);
    if (loc != -1)
    {
        removeAt(loc);
        cout << "Item " << removeItem << " removed from the list." << endl;
    }
    else
    {
        cout << "Item " << removeItem << " not found in the list." << endl;
    }
}

void unorderedArrayListType::removeAt(int location)
{
    if (location < 0 || location >= length)
    {
        cout << "The location of the item to be removed is out of range." << endl;
        return;
    }

    list[location] = list[length - 1];
    length--;
}

bool unorderedArrayListType::isSorted() const
{
    for (int i = 0; i < length - 1; i++)
    {
        if (list[i] > list[i + 1])
            return false;
    }
    return true;
}

void unorderedArrayListType::sortList()
{
    for (int i = 0; i < length - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < length; j++)
        {
            if (list[j] < list[minIndex])
                minIndex = j;
        }
        int temp = list[minIndex];
        list[minIndex] = list[i];
        list[i] = temp;
    }
}
