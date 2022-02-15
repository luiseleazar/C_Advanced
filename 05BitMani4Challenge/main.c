#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct packed_struct {

    unsigned int :6; //unsed bits
    bool opaque:1;
    unsigned int fill_color:3;
    bool show_border:1;
    unsigned int border_color:3;
    unsigned int border_style:2;

};

int main()
{
    struct packed_struct packed_data = {false,0,false,0,0};;

    //DATA VALUES (in strings)
    //char * opaque [2] = {"Opaque", "Transparent"};
    char * color [8] = {"black","Red", "Green", "Yellow", "Blue", "Magenta", "Cyan", "White"};
    char * show_border [2] = {"Border not shown", "Border shown"};
    char * border_style[3] = {"solid", "dotted", "dashed"};

    //Display default values
    printf("The default values are:\n");
    printf("The box is %s\n", packed_data.opaque == true ? "opaque":"transparent");
    printf("The fill color is %s\n", *(color + packed_data.fill_color));
    printf("Border %s\n", packed_data.show_border == true ? "shown":"not shown");
    printf("The border color is %s\n", *(color + packed_data.border_color));
    printf("The border style is %s\n", * (border_style + packed_data.border_style));

    //Modifying values
    packed_data.opaque = true;
    packed_data.fill_color = 7;
    packed_data.show_border = true;
    packed_data.border_color = 1;
    packed_data.border_style = 1;


    //Display modified values
    printf("The default values are:\n");
    printf("The box is %s\n", packed_data.opaque == true ? "opaque":"transparent");
    printf("The fill color is %s\n", *(color+packed_data.fill_color));
    printf("Border %s\n", packed_data.show_border == true ? "shown":"not shown");
    printf("The border color is %s\n", *(color + packed_data.border_color));
    printf("The border style is %s\n", * (border_style + packed_data.border_style));

    return 0;
}
