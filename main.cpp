#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<string> readFile(const string& fileName)
{
    vector<string> lines;
    ifstream inputFile(fileName);


    string line;
    while (getline(inputFile, line))
    {
        lines.push_back(line);
    }

    inputFile.close();

    return lines;
}

void output(const vector<string>& lines)
{

}

void writeToFile(const vector<string>& lines, const string& fileName)
{

}

int main()
{
    string inputFileName = "input.txt";
    string outputFileName = "output.txt";

    vector<string> lines = readFile(inputFileName);
    output(lines);
    writeToFile(lines, outputFileName);

    cout << "Программа выполнена";
    return 0;
}
