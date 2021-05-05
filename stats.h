/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <this is a header file >
 *
 * <Add Extended Description Here>
 *9913101017
 * @author <Atta Maleki>
 * @date <1400/02/14 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_array();
/* this function prints the array without any order from start to the end of the array that has been sent as arguman into*/
unsigned char find_minimum();
/* this function searches from zero till the size of array(the first argument) that sent as the secound argument and finds the one that is minimum*/
unsigned char find_maximum();
/* this function searches from zero till the size of array(the first argument) that sent as the secound argument and finds the one that is maximum*/
float find_mean();
/* this function goes through the array that has been sent as an argument and sums them to eachother and divides them to the size of the array that is the secound argument has been sent */
unsigned char * sort_array();
/*sorts the array has been sent as argument into*/
unsigned char find_median();
/*this function is related to the sorting function above , it uses that function to sort and then find the median in the array that has been sent as an argument into*/
void print_statistics(unsigned char, unsigned char, unsigned char, float);
/*prints all the statistics that has been saved in the main ()*/



#endif /* __STATS_H__ */
