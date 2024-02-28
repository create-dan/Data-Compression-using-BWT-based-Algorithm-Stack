#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string burrowsWheelerTransform(const string &input)
{
    // Generate all cyclic rotations of the input string
    vector<string> rotations;
    string concatenated = input + input;
    size_t n = input.size();
    for (size_t i = 0; i < n; ++i)
    {
        rotations.push_back(concatenated.substr(i, n));
    }

    // Sort the rotations lexicographically
    sort(rotations.begin(), rotations.end());

    // Extract the last character of each rotation to form the BWT
    string bwt;
    for (const auto &rotation : rotations)
    {
        bwt.push_back(rotation[n - 1]);
    }

    return bwt;
}

int main()
{
    string input = "banana$"; // Example input string
    string bwt = burrowsWheelerTransform(input);
    cout << "Input string: " << input << endl;
    cout << "Burrows-Wheeler Transform: " << bwt << endl;
    return 0;
}
