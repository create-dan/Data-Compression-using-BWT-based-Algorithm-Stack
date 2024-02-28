#include <iostream>
#include <string>

using namespace std;

string runLengthEncode(const string &input)
{
    string encoded;
    int count = 1;
    char prev = input[0];

    // Iterate through each character in the input string
    for (size_t i = 1; i < input.size(); ++i)
    {
        // If the current character is equal to the previous one, increase the count
        if (input[i] == prev)
        {
            ++count;
        }
        else
        {
            // If the current character is different, append the previous character and its count to the encoded string
            encoded += prev;
            encoded += to_string(count);
            // Reset the count and update the previous character
            count = 1;
            prev = input[i];
        }
    }

    // Append the last character and its count
    encoded += prev;
    encoded += to_string(count);

    return encoded;
}

int main()
{
    string input = "AAAABBBCCDAA";
    string encoded = runLengthEncode(input);
    cout << "Original string: " << input << endl;
    cout << "Encoded string: " << encoded << endl;
    return 0;
}
