import itertools

def fib():
  a = 0
  b = 1 
  while True:
    yield a+b
    a , b = b , a + b  # inplace swap! 

if __name__ == "__main__":
  print(sum(filter(lambda x : x % 2 == 0, itertools.takewhile(lambda y: y< 4000000,fib()))))

