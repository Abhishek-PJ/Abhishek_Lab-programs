from collections import defaultdict

class Graph:
    def __init__(self):
        self.graph = defaultdict(list)

    def add_edge(self, u, v):
        self.graph[u].append(v)

    def dfs(self, start):
        visited = set()
        self._dfs(start, visited)

    def _dfs(self, node, visited):
        if node not in visited:
            print(node, end=' ')
            visited.add(node)
            for neighbor in self.graph[node]:
                self._dfs(neighbor, visited)

# Example usage:
if __name__ == "__main__":
    # Create a graph
    g = Graph()
    g.add_edge(0, 1)
    g.add_edge(0, 2)
    g.add_edge(1, 2)
    g.add_edge(2, 0)
    g.add_edge(2, 3)
    g.add_edge(3, 3)

    print("Depth-First Traversal (Starting from vertex 2):")
    g.dfs(2)
