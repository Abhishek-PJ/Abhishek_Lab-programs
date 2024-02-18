class DisjointSet:
    def __init__(self, vertices):
        # Initialize parent dictionary with each vertex pointing to itself
        self.parent = {v: v for v in vertices}
        # Initialize rank dictionary with each vertex having rank 0
        self.rank = {v: 0 for v in vertices}

    def find(self, vertex):
        # Recursive function to find the representative (root) of the set
        if self.parent[vertex] != vertex:
            # Path compression: Set the parent of each traversed vertex to its root
            self.parent[vertex] = self.find(self.parent[vertex])
        return self.parent[vertex]

    def union(self, vertex1, vertex2):
        # Find the roots of the sets containing vertex1 and vertex2
        root1 = self.find(vertex1)
        root2 = self.find(vertex2)

        if root1 != root2:
            # Perform union by rank: Attach the smaller rank tree under the root of the larger rank tree
            if self.rank[root1] < self.rank[root2]:
                self.parent[root1] = root2
            elif self.rank[root1] > self.rank[root2]:
                self.parent[root2] = root1
            else:
                # If ranks are equal, arbitrarily choose one as root and increase its rank
                self.parent[root2] = root1
                self.rank[root1] += 1

def kruskal(graph):
    min_span_tree = []  # Initialize an empty list to store the edges of the minimum spanning tree
    disjoint_set = DisjointSet(graph['vertices'])  # Create a DisjointSet object with graph vertices

    edges = graph['edges']  # Extract the edges from the graph
    edges.sort(key=lambda x: x[2])  # Sort edges based on their weights

    # Iterate through each edge in sorted order
    for edge in edges:
        vertex1, vertex2, weight = edge
        # Check if adding this edge forms a cycle or not
        if disjoint_set.find(vertex1) != disjoint_set.find(vertex2):
            # If adding the edge doesn't form a cycle, add it to the minimum spanning tree
            min_span_tree.append((vertex1, vertex2, weight))
            # Union the sets containing vertex1 and vertex2
            disjoint_set.union(vertex1, vertex2)

    return min_span_tree  # Return the minimum spanning tree edges

# Example graph
graph = {
    'vertices': ['A', 'B', 'C', 'D'],
    'edges': [('A', 'B', 2), ('A', 'C', 3), ('B', 'C', 1), ('B', 'D', 1), ('C', 'D', 2)]
}

# Find the minimum spanning tree of the graph using Kruskal's algorithm
min_span_tree = kruskal(graph)

# Print the edges of the minimum spanning tree
print("Minimum Spanning Tree Edges:")
for edge in min_span_tree:
    print(edge)
