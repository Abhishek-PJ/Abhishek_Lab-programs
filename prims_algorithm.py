from collections import defaultdict

def prim(graph):
    min_span_tree = []
    visited = set()
    start_vertex = list(graph.keys())[0]
    visited.add(start_vertex)

    while len(visited) < len(graph):
        min_weight = float('inf')
        min_edge = None

        for u in visited:
            for v, weight in graph[u]:
                if v not in visited and weight < min_weight:
                    min_weight = weight
                    min_edge = (u, v, weight)

        if min_edge:
            min_span_tree.append(min_edge)
            visited.add(min_edge[1])

    return min_span_tree

graph = {
    'A': [('B', 2), ('C', 3)],
    'B': [('A', 2), ('C', 1), ('D', 1)],
    'C': [('A', 3), ('B', 1), ('D', 2)],
    'D': [('B', 1), ('C', 2)]
}

min_span_tree = prim(graph)
print("Minimum Spanning Tree Edges:")
for edge in min_span_tree:
    print(edge)
