#include <stdio.h>

enum week
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

enum designFlags {
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};

int main() {

    enum week today;
    today = Wednesday;
    printf("Day %d", today);

    card = club;
    printf("\n\nSize of enum variable = %d bytes", sizeof(card));

    int myDesign = BOLD | UNDERLINE;
    //    00000001
    //  | 00000100
    //  ___________
    //    00000101
	printf("\n\n%d", myDesign);

    return 0;
}