#include "SpriteAnimator.h"

#include <Arduboy2Core.h>

SpriteAnimator::SpriteAnimator(unsigned char *sprites[], int spriteCount){
  sSprites = sprites;
  sSpriteCount = spriteCount;
  timeStamp = 0;
  currentSpriteIndex = 0;
  millisPerSprite = 500;
}

unsigned char *  SpriteAnimator::getCurrentSprite(void){
  // generate new index
  unsigned long deltaTime = millis() - timeStamp;
  if (deltaTime >= millisPerSprite) {
    currentSpriteIndex++;

    // reset if at end
    if (currentSpriteIndex >= sSpriteCount) currentSpriteIndex = 0;

    // update timestamp
    timeStamp = millis();
  }

  return sSprites[currentSpriteIndex];
}
