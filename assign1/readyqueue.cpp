#include <iostream>
#include "readyqueue.h"

using namespace std;

//You must complete the all parts marked as "TODO". Delete "TODO" after you are done.
// Remember to add sufficient comments to your code


/**
 * @brief Constructor for the ReadyQueue class.
 */
 ReadyQueue::ReadyQueue()  {
     //TODO: add your code here
     count = 0; //nothing in queue yet
 }

/**
 * @brief Add a PCB representing a process into the ready queue.
 *
 * @param pcbPtr: the pointer to the PCB to be added
 */
void ReadyQueue::addPCB(PCB *pcbPtr) {
    //TODO: add your code here
    // When adding a PCB to the queue, you must change its state to READY.
    pcbPtr->setState(ProcState::READY); //set state of current PCB
    if (count != size){
        RQ[count] = pcbPtr->id; //insert id of PCB into readyqueue
        count += 1;
    }else{
        cout << "cannot add more PCBs"
    }
    trickleup(); //move PCB to correct place in readyqueue
}

/**
 * @brief Remove and return the PCB with the highest priority from the queue
 *
 * @return PCB*: the pointer to the PCB with the highest priority
 */
PCB* ReadyQueue::removePCB() {
    //TODO: add your code here
    // When removing a PCB from the queue, you must change its state to RUNNING.
    pcbPtr->setState(ProcState::RUNNING);//set state of current PCB
    
}

/**
 * @brief Returns the number of elements in the queue.
 *
 * @return int: the number of PCBs in the queue
 */
int ReadyQueue::size() {
    //TODO: add your code here
    cout << "No. elements in readyqueue: ";
    cout << count << endl;
}

/**
 * @brief Display the PCBs in the queue.
 */
void ReadyQueue::displayAll() {
    //TODO: add your code here
    cout << "PCBs in readyqueue: ";
    for(int i=0; i<count;i++){
        cout << RQ[i] << " ";
    } cout << endl;
}