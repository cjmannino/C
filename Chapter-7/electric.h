/* electric.h*/
/************to**be**used**with**electric.c***/
/****developed by****Carl. J. Mannino*********/
/****cmannino.mac****Comand-Line-Company******/
/****before it's time*************************/

#include <stdio.h>
#define RATE1  0.13230
#define RATE2  0.15040
#define RATE3  0.30025
#define RATE4  0.34025
#define BREAK1 360.0
#define BREAK2 468.0
#define BREAK3 720.0
#define BASE1  (RATE1 * BREAK1)
#define BASE2  (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
#define BASE3  (BASE1 + BASE2 + (RATE3 *(BREAK3 - BREAK2)))
