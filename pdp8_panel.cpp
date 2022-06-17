
/*******************************************************************************
*  The "New BSD License" : http://www.opensource.org/licenses/bsd-license.php  *
********************************************************************************

Copyright (c) 2010, Mark Turney
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the <organization> nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

******************************************************************************/

#include "simple_svg_1.0.0.hpp"
using namespace svg;

// black 17171b
// red orange ba4c2b
// gold bf9f27
// white dddecf
// text 
// Demo page shows sample usage of the Simple SVG library.
int
main ()
{
    Color pdpBlack (23, 23, 27);
    Color pdpRedOrange (207, 92, 16);
    Color pdpOrange (229, 158, 0);
    Color pdpWhite (224, 226, 206);
    Dimensions dimensions (1650, 800);
    Document doc ("my_pdp8e.svg", Layout (dimensions, Layout::BottomLeft));

    // Red image border.
    Polygon border (Fill (pdpBlack), Stroke (1, Color::Red));
    border << Point (0, 0) << Point (dimensions.width, 0)
        << Point (dimensions.width, dimensions.height) << Point (0,
                                                                 dimensions.
                                                                 height);
    doc << border;

    // first we should draw the boxes

// print boxes  first the switches

    doc << Rectangle (Point (75, 200), 150, 100, Fill (pdpRedOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (125, 200), 50, 100, Fill (pdpOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (275, 200), 50, 100, Fill (pdpOrange),
                      Stroke (3, pdpWhite));

//switch reg
// first the decorator boxes
    // doc << Rectangle 
    doc << Rectangle (Point (375, 185), 150, 85, Fill (pdpRedOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (675, 185), 150, 85, Fill (pdpRedOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (525, 185), 150, 85, Fill (pdpOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (825, 185), 150, 85, Fill (pdpOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (375, 200), 600, 15, Fill (pdpRedOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (1025, 200), 50, 100, Fill (pdpRedOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (1075, 200), 50, 100, Fill (pdpOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (1175, 185), 50, 85, Fill (pdpRedOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (1225, 185), 50, 85, Fill (pdpOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (1175, 200), 100, 15, Fill (pdpRedOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (1300 - 25, 200), 50, 100, Fill (pdpRedOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (1350 - 25, 200), 50, 100, Fill (pdpOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (1400 - 25, 200), 50, 100, Fill (pdpRedOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (1500 - 25, 200), 50, 100, Fill (pdpOrange),
                      Stroke (3, pdpWhite));
    for (int k = 425; k < 1025; k = k + 50)
        doc << Line (Point (k, 185), Point (k, 100), Stroke (3, pdpWhite));
//  decorator boxes around the switch

// then the data display
// 
    doc << Rectangle (Point (450 - 75, 367 + 50), 150, 134,
                      Fill (pdpRedOrange), Stroke (3, pdpWhite));
    doc << Rectangle (Point (750 - 75, 367 + 50), 150, 134,
                      Fill (pdpRedOrange), Stroke (3, pdpWhite));
    doc << Rectangle (Point (550 - 25, 367 + 50), 150, 134, Fill (pdpOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (850 - 25, 367 + 50), 150, 134, Fill (pdpOrange),
                      Stroke (3, pdpWhite));
    for (int k = 425; k < 1025; k = k + 50)
        doc << Line (Point (k, 367 + 50), Point (k, 233 + 50),
                     Stroke (3, pdpWhite));
    doc << Line (Point (375, 390), Point (975, 394), Stroke (3, pdpWhite));
    doc << Line (Point (375, 370), Point (975, 370), Stroke (3, pdpWhite));
    doc << Line (Point (375, 350), Point (975, 344), Stroke (3, pdpWhite));
    doc << Rectangle (Point (975, 367 + 50), 200, 134, Fill (pdpBlack),
                      Stroke (3, pdpWhite));

// then the address boxes
    doc << Rectangle (Point (225, 540), 150, 25, Fill (pdpOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (375, 540), 150, 25, Fill (pdpRedOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (525, 540), 150, 25, Fill (pdpOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (675, 540), 150, 25, Fill (pdpRedOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (825, 540), 150, 25, Fill (pdpOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (1125, 540), 50, 25, Fill (pdpRedOrange),
                      Stroke (3, pdpWhite));

// top matter
//
    doc << Rectangle (Point (75, 590), 1450, 25, Fill (pdpOrange),
                      Stroke (3, pdpWhite));
    doc << Rectangle (Point (75, 660), 1450, 75, Fill (pdpRedOrange),
                      Stroke (3, pdpWhite));

// print s
// print text
// print holes
//
    doc << Text (Point (500, 595), "pdp8/e", pdpWhite, Font (60, "Verdana"));
    doc << Text (Point (675, 550), "MEMORY  ADDRESS", pdpWhite,
                 Font (10, "Verdana"));
    doc << Text (Point (300, 525), "EMA", pdpWhite, Font (10, "Verdana"));
    doc << Text (Point (1150, 525), "RUN", pdpWhite, Font (10, "Verdana"));

    // data disp labels 
    const std::string topt[] = { "MD", "DATA", "", "", "BRK" };
    const std::string top[] =
        { "F", "D", "E", "IR0", "IR1", "IR2", "", "", "SW", "PAUSE", "",
        "BRK", "STATE"
    };
    const std::string topb[] = { "DIR", "CONT", "", "", "PROG" };
    const std::string second_t[] = { "INT", "NO" };
    const std::string second_[] =
        { "LINK", "GT", "", "", "ION", "UM", "IF0", "IF1", "IF2", "DF0",
        "DF1", "DF2"
    };
    const std::string second_b[] = { "BUS", "INT" };
    const std::string disp_labels[] =
        { "STATE", "STATUS", "AC", "MD", "MQ", "BUS" };
    const std::string numbs[] =
        { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11" };
    int k1 = 0;
    for (int k = 400; k < 1000; k = k + 50)

    {
        doc << Text (Point (k, 400), top[k1], pdpWhite, Font (9, "Verdana"));
        doc << Text (Point (k, 376), second_[k1], pdpWhite,
                     Font (9, "Verdana"));
        doc << Text (Point (k, 355), numbs[k1], pdpWhite,
                     Font (11, "Verdana"));
        doc << Text (Point (k, 170), numbs[k1++], pdpWhite,
                     Font (11, "Verdana"));
    }
    float delta = 4.5;
    k1 = 0;
    for (int k = 700; k < 950; k = k + 50)

    {
        doc << Text (Point (k, 401 + delta), topt[k1], pdpWhite,
                     Font (9, "Verdana"));
        doc << Text (Point (k, 401 - delta), topb[k1++], pdpWhite,
                     Font (9, "Verdana"));
    }
    k1 = 0;
    for (int k = 500; k < 600; k = k + 50)

    {
        doc << Text (Point (k, 376 + delta), second_t[k1], pdpWhite,
                     Font (9, "Verdana"));
        doc << Text (Point (k, 376 - delta), second_b[k1++], pdpWhite,
                     Font (9, "Verdana"));
    }
    // display select
    doc << Circle (Point (1100, 350), 35, Fill (Color (200, 200, 200)),
                   Stroke (2, Color (100, 100, 100)));
    int a2[] = { 996, 1000, 988, 989, 989, 991 };
    int y2[] = { 351, 332, 313, 293, 274, 255 };
    int x2[] = { 1100, 1085, 1074, 1075, 1080, 1100 };
    k1 = 0;
  for (auto & x:a2)

    {
        doc << Text (Point (x, y2[k1] + 50), disp_labels[k1], pdpWhite,
                     Font (10, "Verdana"));
        doc << Line (Point (1025, y2[k1] + 50), Point (x2[k1], y2[k1] + 50),
                     Stroke (3, pdpWhite));
        doc << Line (Point (x2[k1]-1, y2[k1] + 50), Point (1100, 350),
                     Stroke (3, pdpWhite));
        k1++;
    }
    doc << Text (Point (675, 189), "SWITCH REGISTER", pdpWhite,
                 Font (10, "Verdana"));
    doc << Text (Point (1225, 189), "START", pdpWhite, Font (10, "Verdana"));
    int a[] = { 100, 150, 200, 300, 1050, 1100, 1300, 1350, 1400, 1500 };
    const std::string more_labels[] =
        { "OFF", "POWER", "PANEL", "SW", "ADDR", "EXTD", "EXAM", "HALT",
        "SING", "DEP"
    };
    k1 = 0;
  for (auto & x:a)
        doc << Text (Point (x, 185), more_labels[k1++], pdpWhite,
                     Font (10, "Verdana"));
    const std::string left_overs[] =
        { "LOCK", "LOAD", "ADDR", "LOAD", "CLEAR", "CONT", "STEP" };
    int a1[] = { 200, 1050, 1100, 1100, 1200, 1250, 1400 };
    int y[] = { 125, 125, 125, 115, 122, 122, 125 };
    k1 = 0;
  for (auto & x:a1)

    {
        doc << Text (Point (x, y[k1] + 50), left_overs[k1], pdpWhite,
                     Font (10, "Verdana"));
        k1++;
    }

// print holes

    // power
    int x1 = 150;
    int y1 = 150;
    doc << Circle (Point (x1, y1), 25, Fill (Color (200, 200, 200)),
                   Stroke (2, Color (100, 100, 100)));
    doc << Line (Point (x1 - 12, y1), Point (x1 + 12, y1),
                 Stroke (2, pdpBlack));
    doc << Line (Point (x1, y1 - 12), Point (x1, y1 + 12),
                 Stroke (2, pdpBlack));

    // SW
    x1 = 300;

    doc << Circle (Point (x1, y1), 25, Fill (Color (200, 200, 200)),
                   Stroke (2, Color (100, 100, 100)));
    doc << Line (Point (x1 - 12, y1), Point (x1 + 12, y1),
                 Stroke (2, pdpBlack));
    doc << Line (Point (x1, y1 - 12), Point (x1, y1 + 12),
                 Stroke (2, pdpBlack));

    // Switch Register
    for (int k = 400; k < 1000; k = k + 50)
    {
        x1 = k;
        doc << Circle (Point (x1, y1), 25, Fill (Color (200, 200, 200)),
                       Stroke (2, Color (100, 100, 100)));
        doc << Line (Point (x1 - 12, y1), Point (x1 + 12, y1),
                     Stroke (2, pdpBlack));
        doc << Line (Point (x1, y1 - 12), Point (x1, y1 + 12),
                     Stroke (2, pdpBlack));

    }
    // addr load        
    for (int k = 1050; k < 1150; k = k + 50)
    {
        x1 = k;
        doc << Circle (Point (x1, y1), 25, Fill (Color (200, 200, 200)),
                       Stroke (2, Color (100, 100, 100)));
        doc << Line (Point (x1 - 12, y1), Point (x1 + 12, y1),
                     Stroke (2, pdpBlack));
        doc << Line (Point (x1, y1 - 12), Point (x1, y1 + 12),
                     Stroke (2, pdpBlack));
    }
    // clear et all load        
    for (int k = 1200; k < 1450; k = k + 50)
    {
        x1 = k;
        doc << Circle (Point (x1, y1), 25, Fill (Color (200, 200, 200)),
                       Stroke (2, Color (100, 100, 100)));
        doc << Line (Point (x1 - 12, y1), Point (x1 + 12, y1),
                     Stroke (2, pdpBlack));
        doc << Line (Point (x1, y1 - 12), Point (x1, y1 + 12),
                     Stroke (2, pdpBlack));
    }
    // deposit
    x1 = 1500;
    doc << Circle (Point (x1, y1), 25, Fill (Color (200, 200, 200)),
                   Stroke (2, Color (100, 100, 100)));
    doc << Line (Point (x1 - 12, y1), Point (x1 + 12, y1),
                 Stroke (2, pdpBlack));
    doc << Line (Point (x1, y1 - 12), Point (x1, y1 + 12),
                 Stroke (2, pdpBlack));

    // disp sel
    x1 = 1100;
    y1 = 350;
    doc << Circle (Point (x1, y1), 25, Fill (Color (200, 200, 200)),
                   Stroke (2, Color (100, 100, 100)));
    doc << Line (Point (x1 - 12, y1), Point (x1 + 12, y1),
                 Stroke (2, pdpBlack));
    doc << Line (Point (x1, y1 - 12), Point (x1, y1 + 12),
                 Stroke (2, pdpBlack));

    // run
    doc << Circle (Point (1150, 500), 10, Fill (Color (200, 200, 200)),
                   Stroke (0.5, Color (100, 100, 100)));

    // address LED      
    for (int k = 250; k < 1000; k = k + 50)
        doc << Circle (Point (k, 500), 10, Fill (Color (200, 200, 200)),
                       Stroke (0.5, Color (100, 100, 100)));

    // data disp LED    
    for (int k = 400; k < 1000; k = k + 50)
        doc << Circle (Point (k, 450), 10, Fill (Color (200, 200, 200)),
                       Stroke (0.5, Color (100, 100, 100)));
    doc.save ();
}
