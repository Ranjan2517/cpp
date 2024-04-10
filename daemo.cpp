#include <fstream> 
#include <iostream> 
#include <string> 
  
using namespace std; 
  
int main() 
{ 
    // Specify filename to read (replace with your actual 
    // file) 
    string filename = "input.txt"; 
  
    // Open file for reading 
    ifstream inputFile(filename); 
  
    // Check file open success 
    if (!inputFile.is_open()) { 
        cerr << "Error opening file: " << filename << endl; 
        return 1; 
    } 
  
    // String to store each line 
    string line; 
  
    // Read each line until EOF 
    cout << "The file contents are: \n"; 
    while (getline(inputFile, line)) { 
        // Process each line (replace with your logic) 
        cout << line << endl; 
    } 
  
    // Close file when done 
    inputFile.close(); 
  
    return 0; 
}
