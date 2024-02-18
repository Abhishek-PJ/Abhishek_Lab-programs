import itertools

def find_shortest_route(distances):

  num_cities = len(distances)
  shortest_distance = float('inf')  # Start with a very large initial distance
  best_route = None

  for route in itertools.permutations(range(num_cities)):
    total_distance = 0
    for i in range(num_cities - 1):
      total_distance += distances[route[i]][route[i + 1]]
      total_distance += distances[route[-1]][route[0]]  # Return to starting city

    if total_distance < shortest_distance:
      shortest_distance = total_distance
      best_route = route

  return best_route, shortest_distance

distances = [[0, 10, 20, 30],
             [10, 0, 30, 20],
             [20, 30, 0, 10],
             [30, 20, 10, 0]]

best_route, shortest_distance = find_shortest_route(distances)
print("Shortest route:", best_route) 
print("Total distance:", shortest_distance)
