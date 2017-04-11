#ifndef SPRITEANIMATOR_H
#define SPRITEANIMATOR_H

class SpriteAnimator{

public:
  /* Sprites have to be all the same size.*/
  SpriteAnimator(unsigned char *sprites[], int spriteCount);
  unsigned char *  getCurrentSprite(void);

  unsigned int millisPerSprite;

private:
  unsigned char **sSprites;

  unsigned int sSpriteCount;
  unsigned int currentSpriteIndex;
  unsigned long timeStamp;
};

#endif
