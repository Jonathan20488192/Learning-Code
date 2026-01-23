import time 
from queue import PriorityQueue

class Node:
  def __init__(self, start):
    self.neighbors = []
    self.graph = start

  def __str__(self):
    return f'{self.graph[0][0]} {self.graph[0][1]} {self.graph[0][2]} \n{self.graph[1][0]} {self.graph[1][1]} {self.graph[1][2]} \n{self.graph[2][0]} {self.graph[2][1]} {self.graph[2][2]}'

  def __eq__(self,other):
    return self.__class__==other.__class__ and self.graph == other.graph
  
  def __lt__(self,other):
    return self.graph < other.graph
  
  def __hash__(self):
    number = ''
    for i in self.graph:
      for j in i:
        if j != ' ':
          number += j
        else:
          number += '0'
            
    return int(number)
  
  def is_solved(self):
    number = self.__hash__()
    return number == 123456780
  
  def generate_neighbors(self):
    graph = []
    for k in self.graph:
      row = []
      for l in k:
        row.append(l)
      graph.append(row)
      
    for i in range(3):
      for j in range(3):
        if self.graph[i][j] == ' ':
          if j == 0 or j==1:
            graph = []
            for k in self.graph:
              row = []
              for l in k:
                row.append(l)
              graph.append(row)
            graph[i][j] = graph[i][j+1]
            graph[i][j+1] = ' '
            self.neighbors.append(Node(graph))

          if i == 0 or i == 1:
            graph = []
            for k in self.graph:
              row = []
              for l in k:
                row.append(l)
              graph.append(row)
            graph[i][j] = graph[i+1][j]
            graph[i+1][j] = ' '
            self.neighbors.append(Node(graph))
          
          if j == 2 or j == 1:
            graph = []
            for k in self.graph:
              row = []
              for l in k:
                row.append(l)
              graph.append(row)
            graph[i][j] = graph[i][j-1]
            graph[i][j-1] = ' '
            self.neighbors.append(Node(graph))

          if i == 2 or i == 1:
            graph = []
            for k in self.graph:
              row = []
              for l in k:
                row.append(l)
              graph.append(row)
            graph[i][j] = graph[i-1][j]
            graph[i-1][j] = ' '
            self.neighbors.append(Node(graph))

  def get_heuristic(self):
    total = 0

    #Finds the X,Y coordinates for 1, 2, 3, 4, 5... all the way to 8 and finds the Manhattan Distance of it from their correct spaces
    x = 0
    y = 0 
    for i in range(3):
      for j in range(3):
        if self.graph[i][j] == '1':
          x=j 
          y=i
          break
    total += abs(x) + abs(y)

    x = 0
    y = 0 
    for i in range(3):
      for j in range(3):
        if self.graph[i][j] == '2':
          x=j 
          y=i
          break
    total += abs(1-x) + abs(y)

    x = 0
    y = 0 
    for i in range(3):
      for j in range(3):
        if self.graph[i][j] == '3':
          x=j 
          y=i
          break
    total += abs(2-x) + abs(y)

    x = 0
    y = 0 
    for i in range(3):
      for j in range(3):
        if self.graph[i][j] == '4':
          x=j 
          y=i
          break
    total += abs(x) + abs(1-y)

    x = 0
    y = 0 
    for i in range(3):
      for j in range(3):
        if self.graph[i][j] == '5':
          x=j 
          y=i
          break
    total += abs(1-x) + abs(1-y)

    x = 0
    y = 0 
    for i in range(3):
      for j in range(3):
        if self.graph[i][j] == '6':
          x=j 
          y=i
          break
    total += abs(2-x) + abs(1-y)

    x = 0
    y = 0 
    for i in range(3):
      for j in range(3):
        if self.graph[i][j] == '7':
          x=j 
          y=i
          break
    total += abs(x) + abs(2-y)

    x = 0
    y = 0 
    for i in range(3):
      for j in range(3):
        if self.graph[i][j] == '8':
          x=j 
          y=i
          break
    total += abs(1-x) + abs(2-y)

    x = 0
    y = 0 
    for i in range(3):
      for j in range(3):
        if self.graph[i][j] == ' ':
          x=j 
          y=i
          break
    total += abs(2-x) + abs(2-y)

    return total
  
def get_heuristic(self):
    total = 0
    correct = [
      ['1', '2', '3'],
      ['4', '5', '6'],
      ['7', '8', ' '],
    ]
    # maps each value in correct to its coordinate
    correct_coords = {}
    for i in range(len(self.board)):
      for j in range(len(self.board[i])):
        correct_coords[correct[i][j]] = (i,j)
    # calculate distance of each tile from the 
    # correct position and add it to total
    for i in range(len(self.board)):
      for j in range(len(self.board[i])):
        num = self.board[i][j]
        x_dist = abs(i - correct_coords[num][0])
        y_dist = abs(j - correct_coords[num][1])
        total += x_dist + y_dist
    return total

class Graph:
  def __init__(self,start):
    self.initial = start 
  
  def bfs(self):
    start = self.initial
    path = []
    queue = [(start,path)]
    visited = {start}
    counter = 0
    while len(queue) != 0:
      counter += 1
      node,path = queue.pop(0)
      if node.is_solved():
        return path,counter 
      else:
        node.generate_neighbors()
      for i in node.neighbors:
        if i not in visited:
          queue.append((i,path+[i]))
          visited.add(i)


  def AStar(self):
    visitable = PriorityQueue()
    visited = set()
    visitable.put((self.initial.get_heuristic(),self.initial,[self.initial],0))
    node = self.initial
    num_states = 0
    while True:
      _,node,states,depth = visitable.get()

      if node not in visited:
        num_states+=1
        if not node.is_solved():
          visited.add(node)
          node.generate_neighbors()
          for i in node.neighbors:
            if i not in visited:
              visitable.put((depth+1+i.get_heuristic(),i,states+[i],depth+1))
        else:
          return states, num_states

  
  # # generates all neighbors of a node by expanding it
  # def generate_neighbors(self):
  #   neighbors = []

  #   # find and store coordinates of empty space in the board
  #   row = -1
  #   col = -1
  #   for i in range(len(self.board)):
  #     for j in range(len(self.board[i])):
  #       if self.board[i][j] == ' ':
  #         row = i
  #         col = j
  #         break

  #   # list of possible directions space can move
  #   dirs = [(-1, 0), (1, 0), (0, 1), (0, -1)]

  #   # loop through each possible movement
  #   for r,c in dirs:
  #     new_row = row+r
  #     new_col = col+c

  #     # if move is valid (new row and column are within bounds of the board), create and add child node to children
  #     if 0 <= new_row <= 2 and 0 <= new_col <= 2:

  #       # make copy of board
  #       new_board = []
  #       for line in self.board:
  #         board_row = []
  #         for space in line:
  #           board_row.append(space)
  #         new_board.append(board_row)

  #       # switch space to new location and switch number to space's old location
  #       new_board[new_row][new_col] = ' '
  #       new_board[row][col] = self.board[new_row][new_col]

  #       # create and add child to neighbors
  #       node = Node(new_board)
  #       neighbors.append(node)

  #   self.neighbors = neighbors


node1 = Node([['8',' ','6'],['5','4','7'],['2','3','1']])

# node1.generate_neighbors()
# for i in node1.neighbors:
#   print(i)
#   print('')
# print(node1.is_solved())
g = Graph(node1)
# print(node1.get_heuristic())
timer = time.time()
path, counter = g.bfs()
print(f'Time: {time.time()-timer}, States: {counter}\n')

timer = time.time()
path, counter = g.AStar()
print(f'Time: {time.time()-timer}, States: {counter}')
# print('')
# print(node1)
# print('')
# path,counter = g.AStar()
# for i in path:
#   print(i)
#   print('')
# print(counter)