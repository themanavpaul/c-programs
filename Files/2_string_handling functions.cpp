#include <iostream>
#include <cstring> // for string handling functions

using namespace std;

int main() {
  // Using strcpy to copy a string
  char source[] = "Hello";
  char destination[10];
  strcpy(destination, source);
  cout << "The copied string is: " << destination << endl;

  // Using strcat to concatenate strings
  char str1[] = "Hello ";
  char str2[] = "World";
  strcat(str1, str2);
  cout << "The concatenated string is: " << str1 << endl;

  // Using strlen to find the length of a string
  char str3[] = "This is a string.";
  cout << "The length of the string is: " << strlen(str3) << endl;

  // Using strcmp to compare two strings
  char str4[] = "Hello";
  char str5[] = "World";
  if (strcmp(str4, str5) == 0) {
    cout << "The two strings are equal." << endl;
  } else {
    cout << "The two strings are not equal." << endl;
  }

  // Using strchr to find the first occurrence of a character in a string
  char str6[] = "Hello";
  char ch = 'l';
  char *result = strchr(str6, ch);
  if (result != NULL) {
    cout << "The character '" << ch << "' was found at position " << (result - str6) << " in the string." << endl;
  } else {
    cout << "The character '" << ch << "' was not found in the string." << endl;
  }

  return 0;
}

