#include <fstream>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
#include "simple_svg_1.0.0.hpp"
using namespace svg;


int
main ()
{
    Color pdpBlack (23, 23, 27);
    Color pdpWhite (224, 226, 206);

    Dimensions dimensions (1100, 700);
    Document doc ("icewerx_board.svg",
                  Layout (dimensions, Layout::BottomLeft));
    // Red image border.
    Polygon border (Fill (pdpWhite), Stroke (1, Color::Red));
    border << Point (0, 0) << Point (dimensions.width, 0)
        << Point (dimensions.width, dimensions.height)
        << Point (0, dimensions.height);
    doc << border;



    string line;
    ifstream myfile ("Icewerx_pinout.csv");
    int line_nu = 1;
    int char_pos;
    int bgin;
    int column_nu;
    int pos;
    int textx;
    // int ypos[] = { 0, 575, 125, 175, 425, 225, 475, 525, 75 };
    int ypos[] = { 0, 585, 570, 125, 175, 435, 420, 235, 220, 475, 525,85, 70 };
    if (myfile)                 // same as: if (myfile.good())
    {
        textx = 1000;
        while (getline (myfile, line))  // same as: while (getline( myfile, line ).good())
        {
            line_nu += 1;
            if (line_nu > 11)
            {
                textx = textx - 50;
                column_nu = 1;
                bgin = 0;
                pos = 0;
                do
                {

                    char_pos = line.find_first_of (",", pos);
                    pos = char_pos + 1;
                    switch (column_nu)
                    {
                    case 1:
                    case 2:
                    case 5:
                    case 6:
		    case 7:
		    case 8:
		    case 11:
		    case 12:
                        if (bgin != char_pos)
                            doc << Text (Point (textx - 10, ypos[column_nu]),
                                         line.substr (bgin,
                                                      char_pos - bgin),
                                         pdpBlack, Font (15, "Verdana"));
                        break;
                    case 3:
                    case 4:
                    case 9:
                    case 10:
                        doc << Circle (Point (textx, ypos[column_nu]), 13,
                                       Fill (pdpBlack), Stroke (2, pdpBlack));

                        break;
                    }
                    bgin = char_pos + 1;
                    column_nu += 1;
                }
                while (char_pos != string::npos);
            }
	    if (line_nu > 28) break;
        }
        myfile.close ();
        doc << Text (Point (1025, 550),"1",
                     pdpBlack, Font (15, "Verdana"));
        doc << Text (Point (1025, 500),"PL2",
                     pdpBlack, Font (15, "Verdana"));
        doc << Text (Point (1025, 450),"2",
                     pdpBlack, Font (15, "Verdana"));
        doc << Text (Point (1025, 325),"USB",
                     pdpBlack, Font (15, "Verdana"));
        doc << Text (Point (1025, 200),"1",
                     pdpBlack, Font (15, "Verdana"));
        doc << Text (Point (1025, 150),"PL3",
                     pdpBlack, Font (15, "Verdana"));
        doc << Text (Point (1025, 100),"2",
                     pdpBlack, Font (15, "Verdana"));

        doc.save ();

    }
    else
    {
        cout << "fooey\n";
        return 0;
    }
}
