#include <iostream>
#include <fstream>
using namespace std;
const char size1  = 23;
const int MAX_SIZE = 1000;
struct Person
{

    char lastname[size1];
    char firstname[size1];
};
struct Client
{
    float balance;
    Person p;

};


void printSuccessMessage(char* filePath)
{
    cout << "\n\n";
    cout << "=================================================================" << endl;
    cout << "Successfully read file content from file: " << filePath << endl;
    cout << "=================================================================" << endl;
    cout << "\n\n";
}

void printErrorMessage(char* filePath)
{
    cout << "\n\n";
    cout<< "There was a problem opening file with name: " << filePath << endl;
    cout<< "Program stopped." << endl;
    cout << "\n\n";
}
float Obligations(Client clientsarr[], int numberofclients)
{
    float totalobligations = 0;

    if(clientsarr->balance < 0)
    {
        for(int i =0; i < numberofclients; i++)
        {

            totalobligations +=clientsarr[i].balance;
        }
        return totalobligations;

    }
}

float sumofAllmoney(Client clientsarr[], int numberofclients )
{
    float totalmoney = 0;

    for(int i =0; i < numberofclients; i++)
    {

        totalmoney +=clientsarr[i].balance;

    }
    return totalmoney;

}


int main()
{

    int numberofclients = 5;
    Client c[numberofclients];


    char* filePath = "name.txt";

    ifstream inputFileStream;
    inputFileStream.open(filePath, ios::in);

    if(inputFileStream.is_open())
    {
        char lineFromFile[MAX_SIZE];
        while(!inputFileStream.eof())
        {
            inputFileStream.getline(lineFromFile, MAX_SIZE);
            cout << lineFromFile << endl;
        }
        inputFileStream.close();
        printSuccessMessage(filePath);
    }
    else
    {
        printErrorMessage(filePath);
    }
    cout << "=================================================================" << endl;
    cout << "Sum of all money: " << sumofAllmoney << endl;
    cout << "=================================================================" << endl;
    cout << "Obligations money: " << Obligations << endl;
    cout << "=================================================================" << endl;

}

