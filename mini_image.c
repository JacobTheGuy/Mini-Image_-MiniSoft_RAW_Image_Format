/*

            Mini-Image_-MiniSoft_RAW_Image_Format 

              [default file extention: *.minimg]

An internal image format created to make raw image data 
easier to work with and implement in C. I decided to make open source.

This code contains the header and data structures.

mini_view.c is a simple reader program that copies a fullscreen image
to a 320x240 framebuffer.

(C)2022 Jacob Sitton

*/

#include <stdio.h>
#include <stdlib.h>

struct mini-img_header
{
    char chunk_id[8]; /* "MINI_IMG" */
    char format[4];
    unsigned long data_read_position;
    char current_byte[1];
};

