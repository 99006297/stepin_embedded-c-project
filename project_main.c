#include "act1.h"
#include "act2.h"
#include "act3.h"
#include "act4.h"
#include <util/delay.h>

/**
 * @file main.c
 * @author Thapaswi bolisettty
 * @brief Embedded C project
 * @version 0.1
 * @date 2021-09-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */


int main(void)
{

/**
 * @brief Main function
 * 
 * @return int 
 */
	
    while(1)
    {
        uint16_t var=0;
        char temperature_op;
        //act1
        detectUser();  
        //act2/3/4         
        if (detectUser()==1)
        {
            var=Read_ADC(0);
            temperature_op= OutPWM(var);
            dispOP(temperature_op);
        }
    }
    return 0;
}	
