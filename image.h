#ifndef IMAGE_H
#define IMAGE_H

struct image {
  int width;
  int height;
  int frames;
  char *imgdata;
};

void 
set_bit(struct image *img, int frame, int w, int h, int bit);

void 
rshift(struct image *img);

void 
clear_column (struct image *img, int frame, int w);

void 
set_column (struct image *img, int frame, int w, int h);

void 
testimgdisplay(struct image *img);

int 
get_bit(struct image *img, int frame, int w, int h);

void 
dshifttop (struct image* img);
#endif
