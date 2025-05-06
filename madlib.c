// Madlib by Eli Watson (my first c program)
// I have found that it works best for my first program to be a madlib generator

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // For getpid()
#include "words.h" // This is where the database of available words are stored

int main() {
  /*
   * The words to use for the mad lib
   * -for some reason, it didn't like the num array being a pointer
   * -the rest had to be pointers in order for me to reference them
   */
   
  // Seed the random number generator
  srand((unsigned int)(time(NULL) ^ getpid()));

  // Random selections
  // adjectives
  char *adj1 = adj[rand() % 100];
  char *adj2 = adj[rand() % 100];
  char *adj3 = adj[rand() % 100];
  char *adj4 = adj[rand() % 100];
  char *adj5 = adj[rand() % 100];
  char *adj6 = adj[rand() % 100];
  char *adj7 = adj[rand() % 100];
  char *adj8 = adj[rand() % 100];
  char *adj9 = adj[rand() % 100];
  char *adj10 = adj[rand() % 100];
  // verbs
  char *verb1 = verb[rand() % 100];
  char *verb2 = verb[rand() % 100];
  char *verb3 = verb[rand() % 100];
  char *verb4 = verb[rand() % 100];
  char *verb5 = verb[rand() % 100];
  char *verb6 = verb[rand() % 100];
  char *verb7 = verb[rand() % 100];
  char *verb8 = verb[rand() % 100];
  char *verb9 = verb[rand() % 100];
  char *verb10 = verb[rand() % 100];
  // nouns
  char *noun1 = noun[rand() % 100];
  char *noun2 = noun[rand() % 100];
  char *noun3 = noun[rand() % 100];
  char *noun4 = noun[rand() % 100];
  char *noun5 = noun[rand() % 100];
  char *noun6 = noun[rand() % 100];
  char *noun7 = noun[rand() % 100];
  char *noun8 = noun[rand() % 100];
  char *noun9 = noun[rand() % 100];
  char *noun10 = noun[rand() % 100];
  // colors
  char *color1 = color[rand() % 100];
  char *color2 = color[rand() % 100];
  char *color3 = color[rand() % 100];
  char *color4 = color[rand() % 100];
  char *color5 = color[rand() % 100];
  char *color6 = color[rand() % 100];
  char *color7 = color[rand() % 100];
  char *color8 = color[rand() % 100];
  char *color9 = color[rand() % 100];
  char *color10 = color[rand() % 100];
  // num
  int num1 = num[rand() % 100];
  int num2 = num[rand() % 100];
  int num3 = num[rand() % 100];
  int num4 = num[rand() % 100];
  int num5 = num[rand() % 100];
  int num6 = num[rand() % 100];
  int num7 = num[rand() % 100];
  int num8 = num[rand() % 100];
  int num9 = num[rand() % 100];
  int num10 = num[rand() % 100];
 
    // determines what story template to use
    int storyNum = rand() & 20;
 
    switch (storyNum) {
        case 0:
            printf("One %s morning, a %s %s decided to %s a %s %s.\n", adj1, adj2, noun1,verb1, color1, adj3);
            break;
        case 1:
            printf("After %d long hours, the %s %s finally managed to %s the %s %s.\n",num1, adj1, noun1, verb1, color1, adj2);
            break;
        case 2:
            printf("In a %s land, the %s and %s %s tried to %s a mysterious %s ""treasure guarded by a %d-headed dragon.\n", color1, adj1, adj2, noun1, verb1, adj3, num1);
            break;
                case 3:
            printf("The %s %s decided to %s over the %s %s after eating %d slices of pie.\n", adj1, noun1, verb1, color1, noun2, num1);
            break;
        case 4:
            printf("During the %s festival, %d %s %ss started to %s and %s at the same time.\n", adj2, num2, color2, noun3, verb2, verb3);
            break;
        case 5:
            printf("My %s friend has a %s %s that loves to %s every %d minutes.\n", adj3, color3, noun4, verb4, num3);
            break;
        case 6:
            printf("Once upon a %s day, a %s %s climbed a %s %s to %s the %s clouds.\n", adj4, color4, noun5, adj5, noun6, verb5, color5);
            break;
        case 7:
            printf("In the world of %s, %d %ss battled a %s %s while %s wildly.\n", noun7, num4, noun8, adj6, noun9, verb6);
            break;
        case 8:
            printf("The %s %s was no match for the %s %s and its army of %d %ss.\n", color6, noun10, adj7, noun1, num5, noun2);
            break;
        case 9:
            printf("Every %d years, the %s %s rises to %s under the %s moon.\n", num6, adj8, noun3, verb7, color7);
            break;
        case 10:
            printf("A %s %s tried to %s a %s %s, but was stopped by %d angry %ss.\n", adj9, noun4, verb8, color8, noun5, num7, noun6);
            break;
        case 11:
            printf("Legend says a %s %s will %s the %d lost %ss with the help of a %s sword.\n", adj10, noun7, verb9, num8, noun8, color9);
            break;
        case 12:
            printf("My %s uncle owns a %s %s that can %s %d miles per hour.\n", adj1, color10, noun9, verb10, num9);
            break;
        case 13:
            printf("Before the sun rose, the %s %s %sed across the %s hills chasing a %s creature.\n", adj2, noun10, verb1, color1, adj3);
            break;
        case 14:
            printf("Don't ever %s a %s %s during a %s thunderstorm with %d %ss watching.\n", verb2, adj4, noun1, color2, num10, noun2);
            break;
        case 15:
            printf("A strange %s substance oozed from the %s %s as the crowd began to %s.\n", color3, adj5, noun3, verb3);
            break;
        case 16:
            printf("To win the contest, you must %s a %s %s while wearing %s socks and juggling %d %ss.\n", verb4, adj6, noun4, color4, num1, noun5);
            break;
        case 17:
            printf("In %d days, the %s prophecy says a %s %s will %s over the kingdom of %s.\n", num2, color5, adj7, noun6, verb5, noun7);
            break;
        case 18:
            printf("The haunted %s was painted entirely %s by %d cursed %ss that love to %s.\n", noun8, color6, num3, noun9, verb6);
            break;
        case 19:
            printf("All the %ss in town gathered at the %s square to %s the giant %s balloon.\n", noun10, color7, verb7, adj8);
            break;
        case 20:
            printf("Nobody expected the %s %s to %s when the clock struck %d and the sky turned %s.\n", adj9, noun1, verb8, num4, color8);
            break;

    }
    return 0;
}
