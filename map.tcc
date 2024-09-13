// List of the walls that comprise the level map. In no particular order...
// Walls are made of four corner vertices, and a "normal" which simply
// tells where the wall is "looking" towards. It is used for reflecting
// light correctly and for warding the player off.
static const struct maptype { XYZ<GLfloat> normal, p[4]; } map[] =
{
    {{{ 0, 0, 1}}, {{{ 6, 2,1}},{{ 6, 5,1}},{{ 1, 5,1}},{{ 1, 2,1}}} }, // 0
    {{{ 0, 0, 1}}, {{{ 8, 4,1}},{{ 8, 5,1}},{{ 6, 5,1}},{{ 6, 4,1}}} }, // 1
    {{{ 0, 0, 1}}, {{{24, 4,1}},{{24, 5,1}},{{16, 5,1}},{{16, 4,1}}} }, // 2
    {{{ 0, 0, 1}}, {{{24, 3,1}},{{24, 4,1}},{{14, 4,1}},{{14, 3,1}}} }, // 3
    {{{ 0, 0, 1}}, {{{24, 5,1}},{{24, 6,1}},{{17, 6,1}},{{17, 5,1}}} }, // 4
    {{{ 0, 0, 1}}, {{{24, 6,1}},{{24, 9,1}},{{13, 9,1}},{{13, 6,1}}} }, // 5
    {{{ 0,-1, 0}}, {{{24, 9,1}},{{24, 9,3}},{{16, 9,3}},{{16, 9,1}}} }, // 6
    {{{ 0,-1, 0}}, {{{24, 9,4}},{{24, 9,7}},{{16, 9,7}},{{16, 9,4}}} }, // 7
    {{{ 0,-1, 0}}, {{{24, 9,3}},{{24, 9,4}},{{17, 9,4}},{{17, 9,3}}} }, // 8
    {{{ 0,-1, 0}}, {{{24, 9,7}},{{24, 9,8}},{{17, 9,8}},{{17, 9,7}}} }, // 9
    {{{ 0,-1, 0}}, {{{16, 9,1}},{{16, 9,8}},{{13, 9,8}},{{13, 9,1}}} }, // 10
    {{{ 0, 0,-1}}, {{{16, 9,8}},{{16, 8,8}},{{13, 8,8}},{{13, 9,8}}} }, // 11
    {{{ 0, 0,-1}}, {{{16, 7,8}},{{16, 6,8}},{{13, 6,8}},{{13, 7,8}}} }, // 12
    {{{ 0, 0,-1}}, {{{16, 8,8}},{{16, 7,8}},{{11, 7,8}},{{11, 8,8}}} }, // 13
    {{{ 0, 0,-1}}, {{{16, 6,8}},{{16, 2,8}},{{ 1, 2,8}},{{ 1, 6,8}}} }, // 14
    {{{ 0, 0,-1}}, {{{11, 4,5}},{{11, 2,5}},{{ 8, 2,5}},{{ 8, 4,5}}} }, // 15
    {{{ 0,-1, 0}}, {{{11, 4,1}},{{11, 4,5}},{{ 8, 4,5}},{{ 8, 4,1}}} }, // 16
    {{{ 0, 1, 0}}, {{{ 6, 4,1}},{{ 6, 4,2}},{{ 7, 4,2}},{{ 7, 4,1}}} }, // 17
    {{{ 1, 0, 0}}, {{{ 7, 4,1}},{{ 7, 4,2}},{{ 7, 2,2}},{{ 7, 2,1}}} }, // 18
    {{{ 0, 1, 0}}, {{{ 7, 2,1}},{{ 7, 2,2}},{{14, 2,2}},{{14, 2,1}}} }, // 19
    {{{ 0, 1, 0}}, {{{ 8, 2,2}},{{ 8, 2,5}},{{14, 2,5}},{{14, 2,2}}} }, // 20
    {{{ 0, 1, 0}}, {{{ 8, 2,6}},{{ 8, 2,8}},{{16, 2,8}},{{16, 2,6}}} }, // 21
    {{{ 0, 1, 0}}, {{{ 1, 2,1}},{{ 1, 2,8}},{{ 6, 2,8}},{{ 6, 2,1}}} }, // 22
    {{{ 1, 0, 0}}, {{{ 1, 5,1}},{{ 1, 5,8}},{{ 1, 2,8}},{{ 1, 2,1}}} }, // 23
    {{{ 1, 0, 0}}, {{{ 1, 6,4}},{{ 1, 6,8}},{{ 1, 5,8}},{{ 1, 5,4}}} }, // 24
    {{{ 0,-1, 0}}, {{{ 7, 6,4}},{{ 7, 6,8}},{{ 1, 6,8}},{{ 1, 6,4}}} }, // 25
    {{{ 0,-1, 0}}, {{{ 8, 6,4}},{{ 8, 6,6}},{{ 7, 6,6}},{{ 7, 6,4}}} }, // 26
    {{{ 0, 1, 0}}, {{{16, 6,4}},{{16, 6,7}},{{17, 6,7}},{{17, 6,4}}} }, // 27
    {{{ 0, 1, 0}}, {{{16, 6,1}},{{16, 6,3}},{{17, 6,3}},{{17, 6,1}}} }, // 28
    {{{ 1, 0, 0}}, {{{17, 6,1}},{{17, 6,3}},{{17, 5,3}},{{17, 5,1}}} }, // 29
    {{{ 1, 0, 0}}, {{{17, 6,4}},{{17, 6,7}},{{17, 5,7}},{{17, 5,4}}} }, // 30
    {{{ 0,-1, 0}}, {{{17, 5,4}},{{17, 5,7}},{{16, 5,7}},{{16, 5,4}}} }, // 31
    {{{ 0,-1, 0}}, {{{17, 5,1}},{{17, 5,3}},{{16, 5,3}},{{16, 5,1}}} }, // 32
    {{{ 0, 0,-1}}, {{{17, 5,3}},{{17, 2,3}},{{16, 2,3}},{{16, 5,3}}} }, // 33
    {{{ 0, 0,-1}}, {{{17, 5,7}},{{17, 2,7}},{{16, 2,7}},{{16, 5,7}}} }, // 34
    {{{ 0, 0,-1}}, {{{17, 9,7}},{{17, 6,7}},{{16, 6,7}},{{16, 9,7}}} }, // 35
    {{{ 0, 0,-1}}, {{{17, 9,3}},{{17, 6,3}},{{16, 6,3}},{{16, 9,3}}} }, // 36
    {{{ 0, 0, 1}}, {{{17, 2,4}},{{17, 5,4}},{{16, 5,4}},{{16, 2,4}}} }, // 37
    {{{ 0, 0, 1}}, {{{17, 6,4}},{{17, 9,4}},{{16, 9,4}},{{16, 6,4}}} }, // 38
    {{{ 0, 0, 1}}, {{{15, 2,4}},{{15, 3,4}},{{14, 3,4}},{{14, 2,4}}} }, // 39
    {{{ 0, 1, 0}}, {{{15, 2,1}},{{15, 2,4}},{{16, 2,4}},{{16, 2,1}}} }, // 40
    {{{ 1, 0, 0}}, {{{15, 3,1}},{{15, 3,4}},{{15, 2,4}},{{15, 2,1}}} }, // 41
    {{{ 0, 1, 0}}, {{{14, 3,1}},{{14, 3,4}},{{15, 3,4}},{{15, 3,1}}} }, // 42
    {{{-1, 0, 0}}, {{{14, 2,1}},{{14, 2,4}},{{14, 3,4}},{{14, 3,1}}} }, // 43
    {{{-1, 0, 0}}, {{{16, 2,3}},{{16, 2,4}},{{16, 9,4}},{{16, 9,3}}} }, // 44
    {{{-1, 0, 0}}, {{{16, 2,7}},{{16, 2,8}},{{16, 9,8}},{{16, 9,7}}} }, // 45
    {{{-1, 0, 0}}, {{{16, 5,1}},{{16, 5,3}},{{16, 6,3}},{{16, 6,1}}} }, // 46
    {{{-1, 0, 0}}, {{{16, 5,4}},{{16, 5,7}},{{16, 6,7}},{{16, 6,4}}} }, // 47
    {{{-1, 0, 0}}, {{{ 8, 5,4}},{{ 8, 5,5}},{{ 8, 6,5}},{{ 8, 6,4}}} }, // 48
    {{{-1, 0, 0}}, {{{ 8, 2,5}},{{ 8, 2,6}},{{ 8, 6,6}},{{ 8, 6,5}}} }, // 49
    {{{-1, 0, 0}}, {{{ 8, 4,1}},{{ 8, 4,5}},{{ 8, 5,5}},{{ 8, 5,1}}} }, // 50
    {{{ 0,-1, 0}}, {{{ 8, 5,1}},{{ 8, 5,4}},{{ 1, 5,4}},{{ 1, 5,1}}} }, // 51
    {{{ 0, 0, 1}}, {{{ 8, 5,4}},{{ 8, 6,4}},{{ 1, 6,4}},{{ 1, 5,4}}} }, // 52
    {{{ 0, 0, 1}}, {{{11, 2,6}},{{11, 6,6}},{{ 8, 6,6}},{{ 8, 2,6}}} }, // 53
    {{{ 0, 0, 1}}, {{{11, 6,6}},{{11,18,6}},{{ 7,18,6}},{{ 7, 6,6}}} }, // 54
    {{{ 0, 0, 1}}, {{{13, 7,6}},{{13, 8,6}},{{11, 8,6}},{{11, 7,6}}} }, // 55
    {{{ 0,-1, 0}}, {{{13, 8,6}},{{13, 8,8}},{{11, 8,8}},{{11, 8,6}}} }, // 56
    {{{ 0,-1, 0}}, {{{13, 6,1}},{{13, 6,8}},{{11, 6,8}},{{11, 6,1}}} }, // 57
    {{{ 1, 0, 0}}, {{{13, 7,1}},{{13, 7,8}},{{13, 6,8}},{{13, 6,1}}} }, // 58
    {{{ 1, 0, 0}}, {{{13, 9,1}},{{13, 9,6}},{{13, 7,6}},{{13, 7,1}}} }, // 59
    {{{ 1, 0, 0}}, {{{13, 9,6}},{{13, 9,8}},{{13, 8,8}},{{13, 8,6}}} }, // 60
    {{{ 1, 0, 0}}, {{{17, 9,7}},{{17, 9,8}},{{17, 4,8}},{{17, 4,7}}} }, // 61
    {{{ 1, 0, 0}}, {{{17, 9,3}},{{17, 9,4}},{{17, 2,4}},{{17, 2,3}}} }, // 62
    {{{ 0, 1, 0}}, {{{17, 2,3}},{{17, 2,4}},{{20, 2,4}},{{20, 2,3}}} }, // 63
    {{{ 0, 1, 0}}, {{{11, 2,5}},{{11, 2,6}},{{20, 2,6}},{{20, 2,5}}} }, // 64
    {{{ 0, 1, 0}}, {{{14, 2,4}},{{14, 2,5}},{{20, 2,5}},{{20, 2,4}}} }, // 65
    {{{ 0, 1, 0}}, {{{16, 2,6}},{{16, 2,7}},{{20, 2,7}},{{20, 2,6}}} }, // 66
    {{{ 0, 1, 0}}, {{{16, 2,1}},{{16, 2,3}},{{23, 2,3}},{{23, 2,1}}} }, // 67
    {{{-1, 0, 0}}, {{{23, 2,1}},{{23, 2,3}},{{23, 3,3}},{{23, 3,1}}} }, // 68
    {{{ 0, 1, 0}}, {{{23, 3,1}},{{23, 3,3}},{{24, 3,3}},{{24, 3,1}}} }, // 69
    {{{ 0, 1, 0}}, {{{22, 3,3}},{{22, 3,6}},{{24, 3,6}},{{24, 3,3}}} }, // 70
    {{{ 0, 1, 0}}, {{{20, 3,3}},{{20, 3,7}},{{22, 3,7}},{{22, 3,3}}} }, // 71
    {{{-1, 0, 0}}, {{{20, 2,3}},{{20, 2,7}},{{20, 3,7}},{{20, 3,3}}} }, // 72
    {{{-1, 0, 0}}, {{{20, 4,7}},{{20, 4,8}},{{20, 5,8}},{{20, 5,7}}} }, // 73
    {{{ 0, 1, 0}}, {{{20, 5,7}},{{20, 5,8}},{{22, 5,8}},{{22, 5,7}}} }, // 74
    {{{-1, 0, 0}}, {{{22, 5,7}},{{22, 5,8}},{{22, 7,8}},{{22, 7,7}}} }, // 75
    {{{ 0, 1, 0}}, {{{22, 7,7}},{{22, 7,8}},{{24, 7,8}},{{24, 7,7}}} }, // 76
    {{{-1, 0, 0}}, {{{24, 7,7}},{{24, 7,8}},{{24, 9,8}},{{24, 9,7}}} }, // 77
    {{{-1, 0, 0}}, {{{24, 3,1}},{{24, 3,6}},{{24, 9,6}},{{24, 9,1}}} }, // 78
    {{{-1, 0, 0}}, {{{24, 6,6}},{{24, 6,7}},{{24, 9,7}},{{24, 9,6}}} }, // 79
    {{{ 0, 1, 0}}, {{{22, 6,6}},{{22, 6,7}},{{24, 6,7}},{{24, 6,6}}} }, // 80
    {{{-1, 0, 0}}, {{{22, 3,6}},{{22, 3,7}},{{22, 6,7}},{{22, 6,6}}} }, // 81
    {{{ 0, 0,-1}}, {{{24, 6,6}},{{24, 3,6}},{{22, 3,6}},{{22, 6,6}}} }, // 82
    {{{ 0, 0,-1}}, {{{24, 9,8}},{{24, 7,8}},{{22, 7,8}},{{22, 9,8}}} }, // 83
    {{{ 0, 0,-1}}, {{{22, 9,8}},{{22, 5,8}},{{20, 5,8}},{{20, 9,8}}} }, // 84
    {{{ 0, 0,-1}}, {{{20, 9,8}},{{20, 4,8}},{{17, 4,8}},{{17, 9,8}}} }, // 85
    {{{ 0, 0,-1}}, {{{20, 4,7}},{{20, 2,7}},{{17, 2,7}},{{17, 4,7}}} }, // 86
    {{{ 0, 0,-1}}, {{{22, 5,7}},{{22, 3,7}},{{20, 3,7}},{{20, 5,7}}} }, // 87
    {{{ 0, 0,-1}}, {{{24, 7,7}},{{24, 6,7}},{{22, 6,7}},{{22, 7,7}}} }, // 88
    {{{ 0, 0,-1}}, {{{23, 3,3}},{{23, 2,3}},{{20, 2,3}},{{20, 3,3}}} }, // 89
    {{{ 0, 0, 1}}, {{{23, 2,1}},{{23, 3,1}},{{15, 3,1}},{{15, 2,1}}} }, // 90
    {{{ 0, 0, 1}}, {{{16, 4,1}},{{16, 6,1}},{{11, 6,1}},{{11, 4,1}}} }, // 91
    {{{ 1, 0, 0}}, {{{11, 6,1}},{{11, 6,5}},{{11, 4,5}},{{11, 4,1}}} }, // 92
    {{{ 1, 0, 0}}, {{{11, 6,5}},{{11, 6,6}},{{11, 2,6}},{{11, 2,5}}} }, // 93
    {{{-1, 0, 0}}, {{{11, 6,6}},{{11, 6,8}},{{11, 7,8}},{{11, 7,6}}} }, // 94
    {{{-1, 0, 0}}, {{{11, 8,6}},{{11, 8,8}},{{11,18,8}},{{11,18,6}}} }, // 95
    {{{ 0,-1, 0}}, {{{11,18,6}},{{11,18,8}},{{ 7,18,8}},{{ 7,18,6}}} }, // 96
    {{{ 0, 0,-1}}, {{{11,18,8}},{{11, 6,8}},{{ 7, 6,8}},{{ 7,18,8}}} }, // 97
    {{{ 0, 0, 1}}, {{{14, 2,1}},{{14, 4,1}},{{ 7, 4,1}},{{ 7, 2,1}}} }, // 98
    {{{ 0, 0, 1}}, {{{ 7, 2,2}},{{ 7, 4,2}},{{ 6, 4,2}},{{ 6, 2,2}}} }, // 99
    {{{-1, 0, 0}}, {{{ 6, 2,1}},{{ 6, 2,2}},{{ 6, 4,2}},{{ 6, 4,1}}} }, // 100
    {{{ 0, 1, 0}}, {{{ 6, 2,2}},{{ 6, 2,8}},{{ 8, 2,8}},{{ 8, 2,2}}} }, // 101
    {{{ 0, 1, 0}}, {{{11, 7,6}},{{11, 7,8}},{{13, 7,8}},{{13, 7,6}}} }, // 102
    {{{ 0, 1, 0}}, {{{17, 4,7}},{{17, 4,8}},{{20, 4,8}},{{20, 4,7}}} }, // 103
    {{{ 1, 0, 0}}, {{{ 7,18,6}},{{ 7,18,8}},{{ 7, 6,8}},{{ 7, 6,6}}} }, // 104
};

// Light sources. All of them are simply 3D points with a color.
static const struct lighttype { XYZ<float> pos, dif; } lights[] =
{
    { {{ 17.3 ,  5.7, 7.5 }}, {{  1,.2, .2   }} }, // blue at the end
    { {{ 15.2 ,  2.2, 1.5 }}, {{ .1, 0.6, 1  }} }, // orange on the floor
    { {{  9.5 , 17.5, 7   }}, {{ 200,200,200 }} }, // huge white in the ceiling tunnel
    { {{  9.5 ,  3.9, 1.1 }}, {{.2, .4,  2   }} }  // blue in tunnel
};
