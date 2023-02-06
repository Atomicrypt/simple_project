/**
 * Assignment 1: priority queue of processes
 * @file readyqueue.h
 * @author ??? Alex Nelson
 * @brief ReadyQueue is a queue of PCB's that are in the READY state to be scheduled to run.
 * It should be a priority queue such that the process with the highest priority can be selected next.
 * @version 0.1
 */
//You must complete the all parts marked as "TODO". Delete "TODO" after you are done.
// Remember to add sufficient comments to your code
#pragma once

#include "pcb.h"

/**
 * @brief A queue of PCB's that are in the READY state to be scheduled to run.
 * It should be a priority queue such that the process with the highest priority can be selected next.
 */
class ReadyQueue {
private:
    // TODO: add your private member variables here
    // choose a data structure for the ReadyQueue. No STL class is allowed.
    int RQ[size];//array of given size to hold PCB priority nums
    int count;//how many PCBs are in array, slots 0 through count-1

    void swap(int,int);
    void reheapify();//may not need, reheapify after printing
    int getSmallerchild(int);//return location of smaller child
    void trickleup();//trickleup after adding to rear
    int getParent(int);//return parent location given child location
    bool even(int); //used to find parent

public:
    /**
     * @brief Construct a new ReadyQueue object
     *
     */
    ReadyQueue();

    //utility

    /**
     * @brief Destructor
     */
    ~ReadyQueue() {}

	// You may add additional member functions, but don't change the definitions of the following four member functions.

    /**
     * @brief Add a PCB representing a process into the ready queue.
     *
     * @param pcbPtr: the pointer to the PCB to be added
     */
	void addPCB(PCB* pcbPtr);

    /**
     * @brief Remove and return the PCB with the highest priority from the queue
     *
     * @return PCB*: the pointer to the PCB with the highest priority
     */
	PCB* removePCB();

    /**
     * @brief Returns the number of elements in the queue.
     *
     * @return int: the number of PCBs in the queue
     */
	int size();

     /**
      * @brief Display the PCBs in the queue.
      */
	void displayAll();

    

};