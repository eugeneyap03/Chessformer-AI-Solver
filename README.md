# Chessformer-AI-Solver

A configuration of the Chessformer game is specified by the location of walls, target pieces, and player. A configuration is called a state. The Chessformer Graph G=⟨V,E⟩ is implicitly defined. The vertex set V is defined as all the possible configurations (states), and the edges E connecting two vertexes are defined by the legal movements (knight or queen movements). All edges have a weight of 1.

The solver finds the path traversing the Chessformer Graph from the initial state (vertex) leading to a state (vertex) where all the target pieces have been reached by the player. The best path is the shortest path. A path is a sequence of movements. This solver uses Dijkstra's Algorithm to find the shortest path.

When the AI solver is called, it should explore all possible paths (sequence of move actions) following the Dijkstra strategy, until a path solving the game is found. The algorithm should return the best solution found. This path will then be executed by the game engine if the option play_solution was used as an argument.

Your solver will print into an ```solution.txt``` file the following information: 

Solution
Number of expanded nodes.
Number of generated nodes.
Number of duplicated nodes.
Solutions length
Number of nodes expanded per second.
Total search time, in seconds.

For example, the output of the solver ``` ./chessformer -s test_maps/capability6``` is:

```
SOLUTION:
b1e4b6
STATS:
Expanded nodes: 31
Generated nodes: 4050
Duplicated nodes: 254
Solution Length: 3
Time (seconds): 0.001895
```

To visualise the solution using the sokoban file reader to support the following specification representing Chessformer puzzles:

<img width="424" alt="Screenshot 2025-03-01 at 10 40 50 pm" src="https://github.com/user-attachments/assets/9e0aa9e8-419d-4e21-ba72-cd218dd3a518" />


Apply the command ```./chessformer -s test_maps/capability6 play_solution``` :

<img width="79" alt="chessformerimage1" src="https://github.com/user-attachments/assets/8411cecf-b2bc-44c7-b852-969c308248f4" />


Further game-specific optimizations will be explored and implemented to speed up this algorithm in the near future.
