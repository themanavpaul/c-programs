//File Handling
#include <iostream>
#include <fstream>
using namespace std;

int main() {
   char data[100];

   // Open a file in write mode
   ofstream outfile;
   outfile.open("example.txt");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: ";
   cin.getline(data, 100);

   // Write inputted data into the file
   outfile << data << endl;

   // Close the opened file
   outfile.close();

   // Open a file in read mode
   ifstream infile;
   infile.open("example.txt");

   cout << "Reading from the file" << endl;
   infile >> data;

   // Write the data on console
   cout << data << endl;

   // Close the opened file
   infile.close();

   return 0;
}
