# MPI Applications - Chess Fest (Lab Final)

This lab addresses the following situation :

<br>

Consider in a Virtual Chess fest, 4 teams are participating. There are four processor nodes in a cluster out of which one is the master. Each node has a specialized chess algorithm implemented. Each player will play in all the processor nodes against their respective algorithm. Their points at the end of each play is sent to the master. The master finds the final sum of points of each player and adjudges the final winner. Let the points scored by each player in a particular processor node is generated locally by the processor node and has to be communicated to the master node. Implement the above scenario using MPI application with 4 worker nodes in the MPI cluster and a master node.
