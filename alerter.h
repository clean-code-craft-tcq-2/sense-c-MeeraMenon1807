#ifndef ALERTER_H 
#define ALERTER_H 

#include "stats.h"

typedef void (*alerter_funcptr)();
extern void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats);
extern void  emailAlerter();
extern void  ledAlerter();
extern int emailAlertCallCount;
extern int ledAlertCallCount;

#endif