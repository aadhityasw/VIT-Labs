# MPI Applications - Elevator Trips (Lab 10)

This lab addresses the following situation :

<br>

Assume 4 elevators in a 7 storey building. Each elevator is connected to a processor node(worker). All the worker nodes are in-turn connected to a master node. The purpose of the worker node is to keep track of their respective elevator’s and the number of complete trips (starting from ground floor to 7th floor) the elevator has carried out in the last 10 minutes. Every 10 minutes, the worker node intimates master node, the number of trips their respective elevator has completed. Assume only integer number for the above purpose. For example the elevator has completed 2 trips and is in the 3rd floor of the building at the end of 10 minutes, worker node should only send 2 to the master node. The master node at the end of 30 minutes displays the elevator number that has taken the maximum complete trips.
