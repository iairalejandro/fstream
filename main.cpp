#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream source("source-file.txt");
    ofstream destination("dest-file.txt");

    char c;
    while(source.get(c))
      destination << c;

    if(source.eof())
      cout << "[Eof reached]";
    else
      cout << "[Eof reading]\n";
  
    source.close();

    return 0;
  }
