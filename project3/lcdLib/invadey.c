#include "shape.h"

/*
 * Drawing a shape requires defining two methods, one method to check if a pixel
 * is inside the shape and one method to provide coordinates for a bounding box.
 *
 *    X
 *  XXXXX
 *  X X X
 * XXXXXXX
 *   X X
 *  X X X
 * X X X X
 *
 * Space invadey shape. The idea would be to fill the screen with many of
 * these to make a game if time allowed. This shape is a fixed size of 7x7.
 *
 */

/* This is our struct which says the shape needs a getBounds and check method. */
typedef struct AbSpaceInvadey_s {
  void (*getBounds)(const struct AbSpaceInvadey_s *shape, const Vec2 *centerPos, Region *bounds);
  int (*check)(const struct AbSpaceInvadey_s *shape, const Vec2 *centerPos, const Vec2 *pixelLoc);
} AbSpaceInvadey;


/*
 * Check method should return a 1 if the pixel is part of the shape or a 0 if
 * the pixel is not part of the shape.
 */

int abSpaceInvadeyCheck(const AbSpaceInvadey *si, const Vec2 *centerPos, const Vec2 *pixel) {
  int centerX = centerPos->axes[0];
  int centerY = centerPos->axes[1];
  int pixelX = center->axes[0];
  int pixelY = center->axes[1];


  for (axis = 0; axis < 2; axis ++) {
    int p = pixel->axes[axis];
    if (p > bounds.botRight.axes[axis] || p < bounds.topLeft.axes[axis])
      within = 0;
  }
  
  // Draw point on head
  if (pixelY == centerY-3 && pixelX == centerX)
    return 1;

  // Draw row above eyes
  if (pixelY == centerY-2 && pixelX >= centerX-2 && pixelX <= centerX+2)
    return 1;

  // Draw row with eyes
  if (pixelY == centerY-1 && (pixelX == centerX-2 || pixelX == centerX || pixelX == centerX+2))
    return 1;

  // Draw middle row
  if (pixelY == centerY && pixelX >= centerX-3 && pixelX <= centerX+3)
    return 1;

  // Draw legs first part
  if (pixelY == centerY+1 && (pixelX == centerX-1 || pixelX == centerX+1))
    return 1;

  // Draw legs second part
  if (pixelY == centerY+2 && (pixelX == centerX-2 || pixelX == centerX || pixelX == centerX+2))
    return 1;

  // Draw legs third part
  if (pixelY == centerY+3 && (pixelX == centerX-3 || pixelX == centerX-1
			      || pixelX == centerX+1 || pixelX == centerX+3))
    return 1;
  
  return 0;
}


/*
 * Get the boundary of the shape. The size of the shape is a fixed 7x7 so taking
 * the center position and adding/subtracting 3x3 will give us a box.
 */
void abSpaceInvadeyGetBounds(const AbSpaceInvadey *si, const Vec2 *centerPos, Region *bounds) {
  vec2Sub(&bounds->topLeft, centerPos, {3,3});
  vec2Add(&bounds->botRight, centerPos, {3,3});
}
