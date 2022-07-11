#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int height, row, space, column;
  do
  {
    height = get_int("Height: ");
  } while (height > 8 || height < 1);
  for (row = 0; row < height; row++)
  {
    // print the number of spaces before the # to align it to the right
    for (space = 0; space < height - row - 1; space++)
    {
      printf(" ");
    }
    // print the number of # accordingly to the height entered by the user
    for (column = 0; column <= row; column++)
    {
      printf("#");
    }
    printf("  ");
    // create the second pyramid left aligned
    // add the space between the 2 pyramids
    for (column = 0; column <= row; column++)
    {
      printf("#");
    }
    // Adds a new line accordingly to the height
    printf("\n");
  }
}