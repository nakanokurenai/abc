from random import randint
import sys

N = 10 ** 5
print(N)

for Ai in [randint(1, N) for _ in range(N) ]:
  sys.stdout.write(f"{Ai} ")
sys.stdout.write("\n")
