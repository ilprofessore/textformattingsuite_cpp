// Code of Zain Ul Abideen 200601005 ...
// ... assisted by Aisha munir, Sharraz nasir, Ahmed farooq
// SS09 (Space Science 09) IST (Institute of Space Technology)

#include <iostream>
#include <fstream>

using namespace std;

class MainApp
{

public:
    MainApp()
    {
        // constructor
        
        string input_content = "";
        string option = "";

        ifstream input_file;

        input_file.open("input.txt");

        // error handling

        if (input_file.fail())
        {
            cout << "\n\tFailed to open file! Exiting ...\n\n";
            exit(1);
        }

        getline(input_file, input_content);

        cout << "\n\tText Formatting Suite v1.0\n";

        // checkpoint for goto statement

        checkpoint1:

        cout << "\n\tEnter '-help' to display all the available options.\n";
        cout << "\n\t?: ";
        getline(cin, option);

        if (option == "-help")
        {
            cout << "\n\n\tThe following Text Formatting Modules are available:\n";
            cout << "\n\t\t'-lowercase' Convert all text to lowercase";
            cout << "\n\t\t'-uppercase'  Convert all text to uppercase";
            cout << "\n\t\t'-initcap'  Convert all text to initial capitalization form";
            cout << "\n\t\t'-underscore'  Replace all spaces with an underscore";
            cout << "\n\t\t'-encrypt'  Encrypt the text using algorithm";
            cout << "\n\t\t'-decrypt'  Decrypt the text using algorithm";
            cout << "\n\t\t'-chars'  Count the number of characters in a string";
            cout << "\n\t\t'-words'  Count the number of words in text";
            cout << "\n\t\t'-reverse'  Reverse the order of the string";
            cout << "\n\t\t'-sentences' Count the number of sentences in text\n";
            cout << "\n\n\t\t'-credits' to display all the credits";
            cout << "\n\t\t'-manual' to display the usage documentation";
            cout << "\n\t\t'-exit' to exit the app\n";
            goto checkpoint1;
        }

        else if (option == "-credits")
        {
            cout << "\n\tGroup Leader:     Zain Ul Abideen 200601005 SS09 IST";
            cout << "\n\tFounding Members: Aisha Munir 200601004 and Sherraz Nasir 200601035";
            cout << "\n\tNewest Member:    Ahmed Farooq 200601040 SS09 IST\n";
            cout << "\n\tSubmitted to:     Sir Shahanshah Abbas (IST)\n";
            cout << "\n\tReferences:       None";
            cout << "\n\tThe project was thought out by and compiled into a single file ...";
            cout << "\n\t... by the group leader (Zain Ul Abideen)\n";
            goto checkpoint1;
        }

        else if (option == "-manual")
        {
            cout << "\n\tINSTRUCTIONS";
            cout << "\n\t1) All the modules take their input from the 'input.txt' file in the same directory";
            cout << "\n\t2) All the output is saved into the 'output.txt' file in the same directory";
            cout << "\n\t3) The input provided must be in a single line. It can have any number of sentences ...";
            cout << "\n\t   ... but must not contain any 'next lines' through enter key";
            cout << "\n\t4) The 'input.txt' file must contain input before running the program\n";
            goto checkpoint1;
        }

        else if (option == "-exit")
        {
            cout << "\n\tGood bye! come again!\n\n";
            exit(0);
        }

        else if (option == "-lowercase")
        {
            ModuleOne(input_content);
            cout << "\n\tOperation succesful! output written to file";
            goto checkpoint1;
        }

        else if (option == "-uppercase")
        {
            ModuleTwo(input_content);
            cout << "\n\tOperation succesful! output written to file";
            goto checkpoint1;
        }

        else if (option == "-initcap")
        {
            ModuleThree(input_content);
            cout << "\n\tOperation succesful! output written to file";
            goto checkpoint1;
        }

        else if (option == "-underscore")
        {
            ModuleFour(input_content);
            cout << "\n\tOperation succesful! output written to file";
            goto checkpoint1;
        }

        else if (option == "-encrypt")
        {
            ModuleFive(input_content);
            cout << "\n\tOperation succesful! output written to file";
            goto checkpoint1;
        }

        else if (option == "-decrypt")
        {
            ModuleSix(input_content);
            cout << "\n\tOperation succesful! output written to file";
            goto checkpoint1;
        }

        else if (option == "-chars")
        {
            ModuleSeven(input_content);
            cout << "\n\tOperation succesful! output written to file";
            goto checkpoint1;
        }

        else if (option == "-words")
        {
            ModuleEight(input_content);
            cout << "\n\tOperation succesful! output written to file";
            goto checkpoint1;
        }

        else if (option == "-reverse")
        {
            ModuleNine(input_content);
            cout << "\n\tOperation succesful! output written to file";
            goto checkpoint1;
        }

        else if (option == "-sentences")
        {
            ModuleTen(input_content);
            cout << "\n\tOperation succesful! output written to file";
            goto checkpoint1;
        }

        else
        {
            cout << "\n\tInvalid Option!" << endl;
            goto checkpoint1;
        }
    
        input_file.close();
    }

    void ModuleOne(string name)
    {
        ofstream output_file;
        output_file.open("output.txt");

        // convert all text to lowercase

        for (int i = 0; i < name.length(); i++)
        {
            name[i] = tolower(name[i]);
        }

        output_file << name;
        output_file.close();
    }

    void ModuleTwo(string name)
    {
        ofstream output_file;
        output_file.open("output.txt");

        // convert all text to uppercase

        for (int i = 0; i < name.length(); i++)
        {
            name[i] = toupper(name[i]);
        }

        output_file << name;
        output_file.close();
    }

    void ModuleThree(string name)
    {
        ofstream output_file;
        output_file.open("output.txt");

        // convert all text to initial capitalization form

        for (int i = 0; i < name.length(); i++)
        {
            name[i] = tolower(name[i]);
            name[0] = toupper(name[0]);

            if (name[i] != 0)
            {
                if (name[i - 1] == ' ')
                {
                    name[i] = toupper(name[i]);
                }
            }
        }

        output_file << name;
        output_file.close();
    }

    void ModuleFour(string name)
    {
        ofstream output_file;
        output_file.open("output.txt");

        // replace all spaces with an underscore

        for (int i = 0; i < name.length(); i++)
        {
            if (name[i] == ' ')
            {
                name[i] = '_';
            }
        }

        output_file << name;
        output_file.close();
    }

    void ModuleFive(string encode)
    {
        ofstream output_file;
        output_file.open("output.txt");

        // encrypt text

        string name = encode;

        for (int i  = 0; i < encode.length(); i++)
        {
            name[i] = encode[encode.length() - 1 - i];
        }

        for (int i = 0; i < name.length(); i++)
        {
            switch (name[i])
            {
            case 'A':
                name[i] = 'j';
                break;

            case 'B':
                name[i] = 'D';
                break;

            case 'C':
                name[i] = 'b';
                break;

            case 'D':
                name[i] = 'K';
                break;

            case 'E':
                name[i] = '0';
                break;

            case 'F':
                name[i] = 'B';
                break;

            case 'G':
                name[i] = 'h';
                break;

            case 'H':
                name[i] = 'A';
                break;

            case 'I':
                name[i] = 'Y';
                break;

            case 'J':
                name[i] = 'Q';
                break;

            case 'K':
                name[i] = 'Z';
                break;

            case 'L':
                name[i] = 'a';
                break;

            case 'M':
                name[i] = 'G';
                break;

            case 'N':
                name[i] = 'l';
                break;

            case 'O':
                name[i] = 'c';
                break;

            case 'P':
                name[i] = 'P';
                break;

            case 'Q':
                name[i] = 'n';
                break;

            case 'R':
                name[i] = 'd';
                break;

            case 'S':
                name[i] = 'N';
                break;

            case 'T':
                name[i] = 'k';
                break;

            case 'U':
                name[i] = 'e';
                break;

            case 'V':
                name[i] = 'o';
                break;

            case 'W':
                name[i] = 'O';
                break;

            case 'X':
                name[i] = 'f';
                break;

            case 'Y':
                name[i] = 'q';
                break;

            case 'Z':
                name[i] = 'p';
                break;

            case 'a':
                name[i] = 'r';
                break;

            case 'b':
                name[i] = 'w';
                break;

            case 'c':
                name[i] = 'z';
                break;

            case 'd':
                name[i] = 'C';
                break;

            case 'e':
                name[i] = 'x';
                break;

            case 'f':
                name[i] = '1';
                break;

            case 'g':
                name[i] = 'J';
                break;

            case 'h':
                name[i] = 't';
                break;

            case 'i':
                name[i] = 'X';
                break;

            case 'j':
                name[i] = '2';
                break;

            case 'k':
                name[i] = 'E';
                break;

            case 'l':
                name[i] = '5';
                break;

            case 'm':
                name[i] = '6';
                break;

            case 'n':
                name[i] = 'L';
                break;

            case 'o':
                name[i] = 'y';
                break;

            case 'p':
                name[i] = 's';
                break;

            case 'q':
                name[i] = '3';
                break;

            case 'r':
                name[i] = 'F';
                break;

            case 's':
                name[i] = '4';
                break;

            case 't':
                name[i] = 'T';
                break;

            case 'u':
                name[i] = 'u';
                break;

            case 'v':
                name[i] = '7';
                break;

            case 'w':
                name[i] = 'M';
                break;

            case 'x':
                name[i] = '8';
                break;

            case 'y':
                name[i] = 'v';
                break;

            case 'z':
                name[i] = 'R';
                break;

            case '0':
                name[i] = '&';
                break;

            case '1':
                name[i] = '9';
                break;

            case '2':
                name[i] = 'm';
                break;

            case '3':
                name[i] = '.';
                break;

            case '4':
                name[i] = ';';
                break;

            case '5':
                name[i] = '/';
                break;

            case '6':
                name[i] = 'H';
                break;

            case '7':
                name[i] = '(';
                break;

            case '8':
                name[i] = '%';
                break;

            case '9':
                name[i] = 'V';
                break;

            case '.':
                name[i] = '@';
                break;

            case ':':
                name[i] = '!';
                break;

            case '(':
                name[i] = 'I';
                break;

            case ')':
                name[i] = 'g';
                break;

            case '/':
                name[i] = 'U';
                break;

            case '%':
                name[i] = 'W';
                break;

            case '&':
                name[i] = 'S';
                break;

            case '!':
                name[i] = 'i';
                break;

            case '@':
                name[i] = ')';
                break;

            case ' ':
                name[i] = ':';
                break;

            case ',':
                name[i] = '{';
                break;

            default:
                name[i] = '|';
                break;
            }
        }

        output_file << name;
        output_file.close();
    }

    void ModuleSix(string decode)
    {
        ofstream output_file;
        output_file.open("output.txt");

        // decrypt text

        string name = decode;

        for (int i = 0; i < decode.length(); i++)
        {
            name[i] = decode[decode.length() - 1 - i];
        }

        for (int i = 0; i < name.length(); i++)
        {
            switch (name[i])
            {
            case 'j':
                name[i] = 'A';
                break;

            case 'D':
                name[i] = 'B';
                break;

            case 'b':
                name[i] = 'C';
                break;

            case 'K':
                name[i] = 'D';
                break;

            case '0':
                name[i] = 'E';
                break;

            case 'B':
                name[i] = 'F';
                break;

            case 'h':
                name[i] = 'G';
                break;

            case 'A':
                name[i] = 'H';
                break;

            case 'Y':
                name[i] = 'I';
                break;

            case 'Q':
                name[i] = 'J';
                break;

            case 'Z':
                name[i] = 'K';
                break;

            case 'a':
                name[i] = 'L';
                break;

            case 'G':
                name[i] = 'M';
                break;

            case 'l':
                name[i] = 'N';
                break;

            case 'c':
                name[i] = 'O';
                break;

            case 'P':
                name[i] = 'P';
                break;

            case 'n':
                name[i] = 'Q';
                break;

            case 'd':
                name[i] = 'R';
                break;

            case 'N':
                name[i] = 'S';
                break;

            case 'k':
                name[i] = 'T';
                break;

            case 'e':
                name[i] = 'U';
                break;

            case 'o':
                name[i] = 'V';
                break;

            case 'O':
                name[i] = 'W';
                break;

            case 'f':
                name[i] = 'X';
                break;

            case 'q':
                name[i] = 'Y';
                break;

            case 'p':
                name[i] = 'Z';
                break;

            case 'r':
                name[i] = 'a';
                break;

            case 'w':
                name[i] = 'b';
                break;

            case 'z':
                name[i] = 'c';
                break;

            case 'C':
                name[i] = 'd';
                break;

            case 'x':
                name[i] = 'e';
                break;

            case '1':
                name[i] = 'f';
                break;

            case 'J':
                name[i] = 'g';
                break;

            case 't':
                name[i] = 'h';
                break;

            case 'X':
                name[i] = 'i';
                break;

            case '2':
                name[i] = 'j';
                break;

            case 'E':
                name[i] = 'k';
                break;

            case '5':
                name[i] = 'l';
                break;

            case '6':
                name[i] = 'm';
                break;

            case 'L':
                name[i] = 'n';
                break;

            case 'y':
                name[i] = 'o';
                break;

            case 's':
                name[i] = 'p';
                break;

            case '3':
                name[i] = 'q';
                break;

            case 'F':
                name[i] = 'r';
                break;

            case '4':
                name[i] = 's';
                break;

            case 'T':
                name[i] = 't';
                break;

            case 'u':
                name[i] = 'u';
                break;

            case '7':
                name[i] = 'v';
                break;

            case 'M':
                name[i] = 'w';
                break;

            case '8':
                name[i] = 'x';
                break;

            case 'v':
                name[i] = 'y';
                break;

            case 'R':
                name[i] = 'z';
                break;

            case '&':
                name[i] = '0';
                break;

            case '9':
                name[i] = '1';
                break;

            case 'm':
                name[i] = '2';
                break;

            case '.':
                name[i] = '3';
                break;

            case ';':
                name[i] = '4';
                break;

            case '/':
                name[i] = '5';
                break;

            case 'H':
                name[i] = '6';
                break;

            case '(':
                name[i] = '7';
                break;

            case '%':
                name[i] = '8';
                break;

            case 'V':
                name[i] = '9';
                break;

            case '@':
                name[i] = '.';
                break;

            case '!':
                name[i] = ':';
                break;

            case 'I':
                name[i] = '(';
                break;

            case 'g':
                name[i] = ')';
                break;

            case 'U':
                name[i] = '/';
                break;

            case 'W':
                name[i] = '%';
                break;

            case 'S':
                name[i] = '&';
                break;

            case 'i':
                name[i] = '!';
                break;

            case ')':
                name[i] = '@';
                break;

            case ':':
                name[i] = ' ';
                break;

            case '{':
                name[i] = ',';
                break;

            default:
                name[i] = ' ';
                break;
            }
        }

        output_file << name;
        output_file.close();
    }

    void ModuleSeven(string name)
    {
        ofstream output_file;
        output_file.open("output.txt");

        // count the number of characters spaces in the string

        int counter = 0;

        for (int i = 0; i < name.length(); i++)
        {
            if (name[i] == ' ')
            {
                counter++;
            }
        }

        output_file << "Number of spaces: " << counter << "\nNumber of Characters: " << name.length();
        output_file.close();
    }

    void ModuleEight(string name)
    {
        ofstream output_file;
        output_file.open("output.txt");

        // count the number of words in the text

        int spaces = 0;
        int words = 0;

        for (int i = 0; i < name.length(); i++)
        {
            if (name[i] == ' ')
            {
                spaces++;
            }
        }

        if (spaces < 1)
        {
            words = 1;
        }

        else if (spaces == 1)
        {
            words = 2;
        }
        else
        {
            words = spaces + 1;
        }

        output_file << "The number of words in text are: " << words;
        output_file.close();
    }

    void ModuleNine(string name)
    {
        ofstream output_file;
        output_file.open("output.txt");

        // reverse the order of the text

        string reverse_name = name;

        for (int i = 0; i < name.length(); i++)
        {
            reverse_name[i] = name[name.length() - 1 - i];
        }

        output_file << reverse_name;
        output_file.close();
    }

    void ModuleTen(string name)
    {
        ofstream output_file;
        output_file.open("output.txt");

        // count the number of sentences in the text

        int sentences = 0;

        for (int i = 0; i < name.length(); i++)
        {
            if (name[i] == '.')
            {
                sentences++;

                if (name[i+1] == '.')
                {
                    sentences--;
                }
            }
        }

        if (sentences == 0 && name != "")
        {
            sentences = 1;
        }

        output_file << "The number of sentences in the text are: " << sentences;
        output_file.close();
    }
};

int main()
{
    // creaing an instance of the main class 
    
    MainApp instance;
    return 0;
}