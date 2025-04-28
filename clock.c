
/*
 * Clock related functions
 */
#include <stdio.h>
#include "clock.h"
#include "consts.h"
#include "inout.h"

/*
 * Print the current time
 */
void display_time()
{
    char buf[BUF_SIZE];
    time_t the_time = time(NULL);
    char *t = ctime(&the_time);
    
    sprintf(buf, "\n\nCurrent Time and Date is %s\n\n", t);
    print_string(buf);
}

/*
 * Print the time diff from current time
 */
void display_time_diff_from_now(time_t old_time)
{
    char buf[BUF_SIZE];
    time_t the_time = old_time - time(NULL);
    char t = ctime(&the_time);
    
    sprintf(buf, "\n\nCurrent Time and Date is %s\n\n", t);
    print_string(buf);
}

/*
 * Print the time difference
 */
void display_time_diff(time_t time1, time_t time2)
{
    char buf[BUF_SIZE];
    time_t the_time = time2 - time1;
    char t = ctime(&the_time);
    
    sprintf(buf, "\n\nTime difference is %s\n\n", t);
    print_string(buf);
}

/*
 * Print the time difference
 */
void display_time_diff2(time_t time1, time_t time2)
{
    char buf[BUF_SIZE];
    time_t the_time = time2 - time1;
    char t = ctime(&the_time);
    
    sprintf(buf, "\n\nTime difference is %s\n\n", t);
    print_string(buf);
}


/* 
 * Dummy Function -- time always taken from system
 */
void set_time(time_t new_time)
{
}

