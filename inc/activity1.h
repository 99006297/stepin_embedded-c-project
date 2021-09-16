#ifndef activity1_H_INCLUDED
#define activity1_H_INCLUDED
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


#define LED_PORT (PORTB)
#define IN_PIN1 (PORTB6)
#define IN_PIN2 (PORTB7)
#define OUT_PIN (PORTB5)
void init_port();
int detectUser();

#endif // activity1_H_INCLUDED
