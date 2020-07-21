"use strict";

module.exports = {
    fiboNaive: fiboNaive,
    fiboIterative: fiboIterative
};

function fiboNaive (n) {
    if (n < 2)
        return n;
    else
        return fiboNaive(n-1) + fiboNaive(n-2);
}

function fiboIterative (n) {
    if (n < 2)
        return n;
    else {
        let f0 = 0;
        let f1 = 1;
        for (let i=1; i<n; i++) {
            const tmp = f1+f0;
            f0 = f1;
            f1 = tmp;
        }
        return f1;
    }
}

