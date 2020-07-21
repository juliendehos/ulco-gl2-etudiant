"use strict";

const all_asmjs = require("./all_asmjs");
const express = require("express");
const app = express();

app.get("/fibo/:n", function (req, res) {
    const n = parseInt(req.params['n']);
    const data = Array.from({length: n}, (_,i) => [i, all_asmjs.fiboIterative(i)]);
    res.json(data);
});

// TODO route pour /sinus/...

app.use('/', express.static('./'))

const port = 3000;

const server = app.listen(port, function () {
    console.log(`Listening on port ${port}...`);
});

