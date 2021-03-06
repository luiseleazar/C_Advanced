#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Line Styles
#define SOLID 0
#define DOTTED 1
#define DASHED 2

//Color
#define BLUE  4
#define GREEN 2
#define RED   1

//Mixed colors
#define BLACK 0
#define YELLOW (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN (GREEN | BLUE)
#define WHITE (RED | GREEN | BLUE)

const char * colors [8] = {"black","Red", "Green", "Yellow", "Blue", "Magenta", "Cyan", "White"};

struct box_props {
    bool opaque:1;
    unsigned int fill_color:3;
    unsigned int:4; //pad

    bool show_border:1;
    unsigned int border_color:3;
    unsigned int border_style:2;
    unsigned int:2//pad


};
void show_setting(const struct box_props *pb);
int main()
{
    //Create and initialize box_props sructure
    struct box_props box = {true, YELLOW, true, GREEN, DASHED};

    //Display default values
    printf("The original box setting:\n");
    show_setting(&box);

    box.opaque = false;
    box.fill_color = CYAN;
    box.border_color = BLUE;
    box.border_style= DOTTED;
    show_setting(&box);

    return 0;
}
void show_setting(const struct box_props *pb)
{
    printf("\n");
    printf("Box is %s\n", pb->opaque == true ? "opaque":"transparent");
    printf("The fill color is %s\n", colors[pb->fill_color]);
    printf("Border %s\n", pb->show_border == true ? "shown":"not shown");
    printf("The border color is %s\n", colors[pb->border_color]);
    printf("The border style is ");

    switch(pb->border_style)
    {
        case SOLID : printf("solid\n");
        case DOTTED: printf("dotted\n");
        case DASHED: printf("dashed\n");
        default :printf("Unknown type\n");
    }
}
