# Chessformer-AI-Solver

A configuration of the Chessformer game is specified by the location of walls, target pieces, and player. A configuration is called a state. The Chessformer Graph G=⟨V,E⟩ is implicitly defined. The vertex set V is defined as all the possible configurations (states), and the edges E connecting two vertexes are defined by the legal movements (knight or queen movements). All edges have a weight of 1.

The solver finds the path traversing the Chessformer Graph from the initial state (vertex) leading to a state (vertex) where all the target pieces have been reached by the player. The best path is the shortest path. A path is a sequence of movements. This solver uses Dijkstra's Algorithm to find the shortest path.

When the AI solver is called, it should explore all possible paths (sequence of move actions) following the Dijkstra strategy, until a path solving the game is found. The algorithm should return the best solution found. This path will then be executed by the game engine if the option play_solution was used as an argument.

Further game-specific optimizations will be explored and implemented to speed up this algorithm.
