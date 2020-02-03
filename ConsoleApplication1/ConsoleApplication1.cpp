// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>

void drawing(char* field_filling);

int main()
{
    int current_position = 13;
    char field_filling[27] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' , ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' , ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
    field_filling[current_position] = char(254);
    drawing(field_filling);
    field_filling[current_position] = ' ';
    char ch;
    do
    {
        ch = _getch();
        system("cls");
        switch (ch)
        {
            case 72:
            case 'w':
            {
                if (current_position != 1 && current_position != 4 && current_position != 7)
                {
                    current_position -= 9;
                }
                else
                {
                    current_position += 18;
                }
                if (field_filling[current_position] == ' ')
                {
                    field_filling[current_position] = char(254);
                    drawing(field_filling);
                    field_filling[current_position] = ' ';
                }
                else
                {
                    field_filling[current_position - 1] = '(';
                    field_filling[current_position + 1] = ')';
                    drawing(field_filling);
                    field_filling[current_position - 1] = ' ';
                    field_filling[current_position + 1] = ' ';
                }
                break;
            }

            case 80:
            case 's':
            {
                if (current_position != 19 && current_position != 22 && current_position != 25)
                {
                    current_position += 9;
                }
                else
                {
                    current_position -= 18;
                }
                if (field_filling[current_position] == ' ')
                {
                    field_filling[current_position] = char(254);
                    drawing(field_filling);
                    field_filling[current_position] = ' ';
                }
                else
                {
                    field_filling[current_position - 1] = '(';
                    field_filling[current_position + 1] = ')';
                    drawing(field_filling);
                    field_filling[current_position - 1] = ' ';
                    field_filling[current_position + 1] = ' ';
                }
                break;
            }

            case 75:
            case 'a':
            {
                if (current_position != 1 && current_position != 10 && current_position != 19)
                {
                    current_position -= 3;
                }
                else
                {
                    current_position += 6;
                }
                if (field_filling[current_position] == ' ')
                {
                    field_filling[current_position] = char(254);
                    drawing(field_filling);
                    field_filling[current_position] = ' ';
                }
                else
                {
                    field_filling[current_position - 1] = '(';
                    field_filling[current_position + 1] = ')';
                    drawing(field_filling);
                    field_filling[current_position - 1] = ' ';
                    field_filling[current_position + 1] = ' ';
                }
                break;
            }

            case 77:
            case 'd':
            {
                if (current_position != 7 && current_position != 16 & current_position != 25)
                {
                    current_position += 3;
                }
                else
                {
                    current_position -= 6;
                }
                if (field_filling[current_position] == ' ')
                {
                    field_filling[current_position] = char(254);
                    drawing(field_filling);
                    field_filling[current_position] = ' ';
                }
                else
                {
                    field_filling[current_position - 1] = '(';
                    field_filling[current_position + 1] = ')';
                    drawing(field_filling);
                    field_filling[current_position - 1] = ' ';
                    field_filling[current_position + 1] = ' ';
                }
                break;
            }
            case 'x':
            case 'X':
            {
                if (field_filling[current_position] == ' ')
                {
                    field_filling[current_position] = 'X';
                    drawing(field_filling);
                }
            }
            case '0':
            {
                if (field_filling[current_position] == ' ')
                {
                    field_filling[current_position] = '0';
                    drawing(field_filling);
                }
            }
        }
    } 
    while (ch != 'e');
    _getch();
    return 0;
}

void drawing(char* field_filling)
{
    std::cout << char(201) << char(205) << char(205) << char(205) << char(203) << char(205) << char(205) << char(205) << char(203) << char(205) << char(205) << char(205) << char(187) << std::endl;
    std::cout << char(186) << field_filling[0] << field_filling[1] << field_filling[2] << char(186) << field_filling[3] << field_filling[4] << field_filling[5] << char(186) << field_filling[6] << field_filling[7] << field_filling[8] << char(186) << std::endl;
    std::cout << char(204) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(185) << std::endl;
    std::cout << char(186) << field_filling[9] << field_filling[10] << field_filling[11] << char(186) << field_filling[12] << field_filling[13] << field_filling[14] << char(186) << field_filling[15] << field_filling[16] << field_filling[17] << char(186) << std::endl;
    std::cout << char(204) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(185) << std::endl;
    std::cout << char(186) << field_filling[18] << field_filling[19] << field_filling[20] << char(186) << field_filling[21] << field_filling[22] << field_filling[23] << char(186) << field_filling[24] << field_filling[25] << field_filling[26] << char(186) << std::endl;
    std::cout << char(200) << char(205) << char(205) << char(205) << char(202) << char(205) << char(205) << char(205) << char(202) << char(205) << char(205) << char(205) << char(188) << std::endl;
}