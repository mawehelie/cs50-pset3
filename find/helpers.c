/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include "helpers.h"
#include <stdio.h>

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{

    // binary search
    // make sure n is positive
    if (n < 0)
    {
        return false;
    }
    else
    {
        return true; 
    }
    
    
    // highest element
    int highest = n - 1; 
    // lowest element
    int lowest = 0; 
    // current index element
    int index; 
    
    while (lowest <= highest)
    {
        // index element calculation
        index = (highest + lowest) / 2; 
        
        // checking value of n
        if (n == values[index])
        {
            return index; 
        }
        
        
        // if value n is less the current index element subtract 1
        else if (n < values[index])
        {
            highest = index - 1; 
        }
        
        // otherwise add 1
        else 
        {
            lowest = index + 1; 
        }
    }
    return false;
}
    
        


/*/***/
/* * Sorts array of n values.*/
/* */
void sort(int values[], int n)
{
    int i, j, bucket; 
    // selection sort
    // loop through the list
    for ( i = 0; i < sizeof(n); i++)
    {
        for ( j = i + 1; j <= sizeof(n); j++)
        {
            // if value to the right is less do swapping
            if (values[i] > values[j])
            {
                // swapping of values 
                bucket = values[i];
                values[i] = values[j];
                values[j] = bucket; 
            }
        }
    }
}
