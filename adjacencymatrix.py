# Write python program that accepts the vertices and edges for a graph and stores
# it as an adjacency matrix.

def create_adjacency_matrix(vertices, edges):
    # Initialize adjacency matrix with zeros
    adjacency_matrix = [[0] * len(vertices) for _ in range(len(vertices))]
    
    # Fill in the adjacency matrix based on the edges
    for edge in edges:
        start_vertex, end_vertex = edge
        start_index = vertices.index(start_vertex)
        end_index = vertices.index(end_vertex)
        adjacency_matrix[start_index][end_index] = 1
        adjacency_matrix[end_index][start_index] = 1  # For undirected graph
        
    return adjacency_matrix

# Example usage:
vertices = ['A', 'B', 'C', 'D']
edges = [('A', 'B'), ('B', 'C'), ('C', 'D'), ('D', 'A')]
adjacency_matrix = create_adjacency_matrix(vertices, edges)

# Print the adjacency matrix
print("Adjacency Matrix:")
for row in adjacency_matrix:
    print(row)





# This program defines a function create_adjacency_matrix() that takes a list of vertices and a list of edges as input and returns the corresponding adjacency matrix. It initializes an empty matrix with zeros and iterates through the edges to set the appropriate entries in the adjacency matrix. For an undirected graph, it sets both the source-to-destination and destination-to-source entries to 1.