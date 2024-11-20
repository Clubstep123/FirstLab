#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> readFile(const string& fileName)
{
    return {};
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
    Output(lines);
    writeToFile(lines, outputFileName);

    cout << "Программа выполнена";
    return 0;
}
