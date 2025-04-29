#include <iostream>
#include <fstream>
#include <string>
#include "filemgmt.h";
using namespace std;
#include "item.h"

//in c++ the first enum value is 0, then counts up
//enum location { GREATHALL, DUNGEON, COURTYARD, MARKET, INVENTORY};

item::item(string n, int itemID)
{
	cout << "creating a new item!\n";
	string Name = n;
	int ID = itemID;
	
}