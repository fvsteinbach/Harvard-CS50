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

The first task I was required to do was called "The mario game". 

It is a progamm that reads an input from the user and then prints a right aligned pyramid matching the number of rows and collumn that was entered by the user.

Although it wasnt a hard task, I've felt pretty confident during the exercise, and it turns out like this:

