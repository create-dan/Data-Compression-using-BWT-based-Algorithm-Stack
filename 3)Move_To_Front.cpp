// C++ program to find move to front transform of
// a given string
#include <iostream>
#include <cstring>

using namespace std;

// Returns index at which character of the input text
// exists in the list
int search(char input_char, char *list)
{
    for (int i = 0; i < strlen(list); i++)
    {
        if (list[i] == input_char)
        {
            return i;
        }
    }
    return -1;
}

// Takes curr_index of input_char as argument
// to bring that character to the front of the list
void moveToFront(int curr_index, char *list)
{
    char record[26];
    strncpy(record, list, 26);

    // Characters pushed one position right
    // in the list up until curr_index
    for (int i = curr_index; i > 0; i--)
    {
        list[i] = record[i - 1];
    }

    // Character at curr_index stored at 0th position
    list[0] = record[curr_index];
}

// Move to Front Encoding
void mtfEncode(char *input_text, int len_text, char *list)
{
    int output_arr[len_text];

    for (int i = 0; i < len_text; i++)
    {

        // Linear Searches the characters of input_text
        // in list
        output_arr[i] = search(input_text[i], list);

        // Printing the Move to Front Transform
        cout << output_arr[i] << " ";

        // Moves the searched character to the front
        // of the list
        moveToFront(output_arr[i], list);
    }
}

// Driver program to test functions above
int main()
{
    char *input_text = "panama";
    int len_text = strlen(input_text);

    // Maintains an ordered list of legal symbols
    char list[26];
    strcpy(list, "abcdefghijklmnopqrstuvwxyz");

    cout << "Input text: " << input_text << endl;
    cout << "Move to Front Transform: ";

    // Computes Move to Front transform of given text
    mtfEncode(input_text, len_text, list);

    cout << endl;

    return 0;
}


