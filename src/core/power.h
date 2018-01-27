/**
*			Copyright (C) 2008-2018 HPDCS Group
*			http://www.dis.uniroma1.it/~hpdcs
*
*
* This file is part of ROOT-Sim (ROme OpTimistic Simulator).
*
* ROOT-Sim is free software; you can redistribute it and/or modify it under the
* terms of the GNU General Public License as published by the Free Software
* Foundation; only version 3 of the License applies.
*
* ROOT-Sim is distributed in the hope that it will be useful, but WITHOUT ANY
* WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
* A PARTICULAR PURPOSE. See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with
* ROOT-Sim; if not, write to the Free Software Foundation, Inc.,
* 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*
* @file power.h
* @brief This module implements power management facilities
* @author Stefano Conoci
*/

#pragma once

#define DEBUG_POWER
// #define OVERHEAD_POWER

/* The passed parameter should be 1 if called after all GVT computations completed,
* else it should be 0. Should be called periodically to trigger state transitions.
*
* Author: Stefano Conoci
*/
extern int powercap_state_machine(int); 

/* Inits powercap related data structures. Should be called at startup.
* 
* Author: Stefano Conoci 
*/
extern int init_powercap_module(void);


/* Frees memory used by the powercap related data structures
*  and prints powercap statistics. Should be called at startup.
* 
* Author: Stefano Conoci 
*/
extern void shutdown_powercap_module(void);
