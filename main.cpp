#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

vector<string> readFile(const string& fileName)
{
    return {};
}
// ������� ��� ������ ����� �� �����
void output(const vector<string>& lines)
{
    for (const auto& line : lines)
        cout << line << endl;
}

void writeToFile(const vector<string>& lines, const string& fileName)
{
ofstream outputFile(fileName);
    if (outputFile.is_open()) {
        for (const auto& line : lines) {
            outputFile << line << endl;
        }
        outputFile.close();
    } else {
        cerr << "�� ������� ������� ���� ��� ������: " << fileName << endl;}
}

int main()
{
    string inputFileName = "input.txt";
    string outputFileName = "output.txt";

    vector<string> lines = readFile(inputFileName);
    output(lines);
    writeToFile(lines, outputFileName);

    cout << "��������� ���������";
    return 0;
}
