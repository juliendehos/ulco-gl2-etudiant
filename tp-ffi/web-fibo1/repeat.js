function repeatN(n, f){
    for (let i = 0;i<=n;i++){
        var node = document.createElement("li");
        var fibo_n = f(i);
        node.innerHTML = `fibo(${i}) = ${fibo_n}`;
        document.getElementById("my_ul").appendChild(node);
    }
}