//
// Created by summer on 2019-08-15.
//

#ifndef CHAPTER9_COORDIN_H
#define CHAPTER9_COORDIN_H

struct polar {
    double distance;
    double angle;
};

struct rect {
    double x;
    double y;
};

polar rect_to_polar(rect xypos);

void show_polar(polar dapos);

#endif //CHAPTER9_COORDIN_H
