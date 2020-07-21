"use strict";

exports.fiboNaive = function (n) {
    if (n < 2)
        return n;
    else
        return exports.fiboNaive(n-1) + exports.fiboNaive(n-2);
}

exports.fiboIterative = function (n) {
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

