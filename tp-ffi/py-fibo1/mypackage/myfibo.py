
def fibo_naive(n: int):
    assert n >= 0
    return n if n < 2 else fibo_naive(n-1) + fibo_naive(n-2)

# TODO implement fibo_iterative

