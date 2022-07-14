# Harvard CS50

Here's a walkthrough my process of solving the problem set exercises that are required during the CS50 course.

## Learning programming logic!

### Understading the fundaments of programming.

Straight after the first class we were required to create a game with "Scratch" that is a programing language developed to help students.

This wasn't my first contact with programming, as I already attented to a python course a few days earlier. I do not know wheter it was related or not but for me, programing with python was a little easier, although I did the game anyway.

### Rocket Blaster

I wanted the random meteors falling on the screen and as soon as the rocket touched any of them, a message would be printed on the screen saying "game over" with the points that the user made.

<br>Every meteor that fell off the screen (reaching the bottom) counted 1 point.

**This is how it came out:**

The start:

![start](https://github.com/fvsteinbach/Harvard-CS50/blob/main/Scratch/rocketblaster%20start%20.png?raw=true)

When the meteor touches the rocket:

![scratch](https://github.com/fvsteinbach/Harvard-CS50/blob/main/Scratch/rocketblaster%20game%20over.png?raw=true)

**The logic behind it:**
1. Defined how to make the rocketship moves with the arrow keys.

![movementrocket](https://github.com/fvsteinbach/Harvard-CS50/blob/main/Scratch/code%20move%20rocketship.png?raw=true)

2. Make random meteor fall of the sky.

![meteors](https://github.com/fvsteinbach/Harvard-CS50/blob/main/Scratch/code%20that%20generates%20random%20meteors.png?raw=true)

3. Defined a condition that prints "game over" and an else to when the meteor dont touch the rocketship.

![gameover](https://github.com/fvsteinbach/Harvard-CS50/blob/main/Scratch/rocketship%20condition.png?raw=true)

If you want to try out the game [click here](https://scratch.mit.edu/projects/710088029/fullscreen/)

## Learning my first language - C.

### The first step

The very first thing I've seen was the idea of `int main(void) { }` and how to use libraries, such as `<cs50.h> and <stdio.h>`

The very first programm I did with C was, obviously a `printf("hello, world/n!");`

Right after that, I was introduced to the idea of inputs, and how to get them from the user.

Then, to implement what I've learned so far, I changed the "Hello, World" to "Hello, User", using the following code:

```
#include <stdio.h>
#include <cs50.h>

int main(void)
{
  string name = get_string("What is your name?\n");
  printf("Hello, %s\n", name);
}
```

### The first C problem set

### Mario less 

The first task I was required to do was called "The mario game". 

It is a progamm that reads an input, from 1-8,  from the user and then prints a right aligned pyramid of "#" matching the number of rows and collumn that was entered by the user.

The main issue here is that you must define what every variable will be. In this case, they were all integers. 

```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int height, row, space, column;
```

After defining the variables, I needed to define the function, for this exercise I used a `do while` loop, cause I needed that while started just after the first input, which couldnt be done if I used the `while` itself.

The loop was like this:
```
int height, row, space, column;
  do
  {
    height = get_int("Height: ");
  } while (height > 8 || height < 1);
```

After defing the lenght of the pyramid, I needed to print the pyramid and for that, I used a for loop, because I already have the quantity of times the function would be done:

The for loop was like this:
```
for (row = 0; row < height; row++)
  {
    }
    for (column = 0; column <= row; column++)
    {
      printf("#");
    }
    printf("\n");
    }
```

At this point the code was almost done, the only issue is, it had to be right hand aligned, and with the code above the pyramid was left handed.

So to make that, I just needed to add the correct number of spaces before the "#", and get that ammount, was pretty simple. The number of spaces were equal to the height - row - 1 (because on the first line we dont need to put a space), once with this formula, I just needed to put this BEFORE the print of the "#" once the spaces gone before the hashes.

```
for (space = 0; space < height - row - 1; space++)
    {
      printf(" ");
    }
```
The programm is done.

### Mario more

In this version of "the mario game", besides the right aligned pyramid, I needed to build another one, left hand aligned with a space between them.

Once I've already done both the pyramids, it was pretty simple.

After the for loop used to print the right aligned pyramid I add a `printf(" ")` to print a blank space after the first pyramid.

Then I just needed to print a left hand pyramid which I've already done before.

```
for (column = 0; column <= row; column++)
    {
      printf("#");
    }
printf("  ");
for (column = 0; column <= row; column++)
{
printf("#");
}
```
The programm is done.