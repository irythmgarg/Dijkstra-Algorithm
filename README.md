# Dijkstra-Algorithm
# 🚦 Dijkstra's Algorithm - Single Source Shortest Path

This repository contains an efficient implementation of **Dijkstra’s Algorithm** for finding the shortest paths from a given source node to all other nodes in a **weighted undirected graph**.

---

## 📌 Problem Statement

Given a graph of `V` vertices and an edge list `edges`, each edge represented as `[u, v, w]` indicating an undirected edge between `u` and `v` with weight `w`, find the **shortest distance from the source node `src`** to all other nodes.

---

## 🔍 Approach

We use **Dijkstra’s Algorithm** with the following strategy:

- Build an adjacency list with edge weights.
- Use a **min-heap (priority queue)** to greedily pick the node with the smallest known distance.
- Maintain a `distance` vector initialized to infinity.
- Perform **relaxation** for all adjacent nodes.

---

## 🧠 Key Concepts

- **Greedy Algorithm** – always expand the closest unvisited node.
- **Min Heap (Priority Queue)** – ensures we always process the minimum-cost node first.
- **Relaxation** – update the shortest path if a better one is found.

---

## 🛠️ Complexity Analysis

| Metric           | Complexity         |
|------------------|--------------------|
| Time Complexity  | `O(E log V)`       |
| Space Complexity | `O(V + E)`         |

Where:
- `V` is the number of vertices
- `E` is the number of edges

---

## 📎 Example

```cpp
Input:
V = 5, edges = {
    {0, 1, 2},
    {0, 2, 4},
    {1, 2, 1},
    {1, 3, 7},
    {2, 4, 3}
}
src = 0

Output:
[0, 2, 3, 9, 6]
