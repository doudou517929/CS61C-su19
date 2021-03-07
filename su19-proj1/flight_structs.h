/*
 * CS61C Summer 2019
 * Name:
 * Login:
 */

#ifndef FLIGHT_STRUCTS_H
#define FLIGHT_STRUCTS_H

#include "timeHM.h"

typedef struct flightSys flightSys_t;
typedef struct airport airport_t;
typedef struct flight flight_t;

// hold all the airports in the system
struct flightSys {
  // my code
  airport_t* airport;
};

// hold its name and a schedule of all the flights departing from it
struct airport {
  // my code
  char name[4];
  flight_t* flightList;
  airport_t* next;
};

/**
 * Holds a pointer to the destination airport,
 * time of departure,
 * time of arrival,
 * the cost of the flight
 */
struct flight {
  // my code
  airport_t* destination;
  timeHM_t* departure;
  timeHM_t* arrival;
  int cost;
  flight_t* next;
};

#endif

