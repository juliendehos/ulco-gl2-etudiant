import matplotlib
matplotlib.use('TkAgg')
import matplotlib.pyplot as plt
import numpy as np


def test_func(x: int):
    return x*x


if __name__ == '__main__':

    xs = np.arange(-10, 11, 1)
    ys = np.vectorize(test_func)(xs)

    fig, ax = plt.subplots()
    ax.plot(xs, ys)
    ax.set(xlabel='i', ylabel='test_func(i)')
    ax.grid()

    fig.savefig("output.png")
    plt.show()

