#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 32

/* Program */

void create_bakers(void);

void *run_baker_thread(void *arg);

/* Utilities */

void keyboard_interrupt(int signalNumber);

int get_baker_value(void);

void logs(char *message);

int to_error_status(int value);

void check_status(char *message, int error_status);

#endif /* MAIN_H */
