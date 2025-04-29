// w14main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "filemgmt.h"
#include "item.h"
#include "item.cpp"
using namespace std;




int main()
{
    cout << "Play Ocarina of Time\n";

    ReadFromFile();
    WriteToFile();

    string favs[100];
    int nextIndex = 0;

    cout << "Type out your favorites, or type 'done' to stop. \n";
    while (true)
    {
        string input;
        cout << ">> ";
        getline(cin, input);

        if (input == "done")
        {
            break;
        }
        favs[nextIndex] = input;
        nextIndex++;
    }

    WriteArraytoFile(favs, nextIndex);
    ReadFavs();
    item items[5];
    items[0] = item item1("item1", 0);
    items[1] = item item2("item2", 1);
    items[2] = item item3("item3", 2);
    items[3] = item item4("item4", 3);
    items[4] = item item5("item5", 4);
    for (int i = 0; i < items.size(); i++)
    {
        cout << items[i].examine() << "\n";
    }
}

