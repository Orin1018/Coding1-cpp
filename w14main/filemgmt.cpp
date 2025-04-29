#include <iostream>
#include <fstream>
#include <string>
#include "filemgmt.h";
using namespace std;

void ReadFromFile()
{
    string fileContents;

    ifstream file("file.txt");

    while (getline(file, fileContents))
    {
        cout << fileContents;
    }

    file.close();
}

void WriteToFile()
{
    // opening the "file.txt" file. if it doesn't exist, creates it.
    ofstream file("file.txt");

    file << "Play Ocarina of Time!\n";

    file.close();
}

void WriteArraytoFile(string* arr, int size)
{
    ofstream file("favs.txt");

    if (!file.is_open())
    {
        return;
    }

    for (int i = 0; i < size; i++)
    {
        file << arr[i] << "\n";
    }

    file.close();
}
void ReadFavs()
{
    string fileContents;

    ifstream file("fav.txt");
    while (getline(file, fileContents))
    {
        cout << fileContents;
    }

    file.close();
}