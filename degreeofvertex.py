def calculate_degrees(adjacency_matrix):
    num_vertices = len(adjacency_matrix)
    in_degrees = [0] * num_vertices
    out_degrees = [0] * num_vertices

    for i in range(num_vertices):
        for j in range(num_vertices):
            if adjacency_matrix[i][j] == 1:
                out_degrees[i] += 1
                in_degrees[j] += 1

    return in_degrees, out_degrees

def display_adjacency_matrix(adjacency_matrix):
    print("Adjacency Matrix:")
    for row in adjacency_matrix:
        print(row)

def print_degrees(vertices, in_degrees, out_degrees):
    for i, vertex in enumerate(vertices):
        print(f"Vertex {vertex}: In-Degree = {in_degrees[i]}, Out-Degree = {out_degrees[i]}")

# Example usage:
vertices = ['A', 'B', 'C', 'D']
edges = [('A', 'B'), ('B', 'C'), ('C', 'D'), ('D', 'A')]
adjacency_matrix = [[0] * len(vertices) for _ in range(len(vertices))]

for edge in edges:
    start_vertex, end_vertex = edge
    start_index = vertices.index(start_vertex)
    end_index = vertices.index(end_vertex)
    adjacency_matrix[start_index][end_index] = 1

display_adjacency_matrix(adjacency_matrix)

in_degrees, out_degrees = calculate_degrees(adjacency_matrix)
print_degrees(vertices, in_degrees, out_degrees)
